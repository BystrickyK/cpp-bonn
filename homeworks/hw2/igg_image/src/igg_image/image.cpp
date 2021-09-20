#include "image.h"
#include "io_tools.h"
#include <vector>
#include <iostream>

// return 1D index from 2D coordinates according to row-major order
// inline -> the compiler copies the code to wherever where it's called, to minimize function calls
int inline igg::Image::RowMajorIndex(uint row, uint col) const{
  return row + col*rows_;
}

// * Constructors*
igg::Image::Image() {}
igg::Image::Image(uint rows, uint cols): rows_{rows}, cols_{cols} {
   data_.reserve(rows_*cols_);
 }

// * Getter functions *
uint igg::Image::rows() const { return rows_; }
uint igg::Image::cols() const { return cols_; }

// * File IO *
bool igg::Image::FillFromPgm(const std::string& file_name){
  igg::io_tools::ImageData image;
  image = igg::io_tools::ReadFromPgm(file_name);

  rows_ = image.rows;
  cols_ = image.cols;
  max_val_ = image.max_val;

  data_.reserve(rows_*cols_);

  for(uint i=0; i<rows_*cols_; i++){
    data_[i] = image.data[i];
  }
  return 0;
}

  bool igg::Image::WriteToPgm(const std::string& file_name){
    const igg::io_tools::ImageData image_data = {rows_, cols_, max_val_, data_};
    return igg::io_tools::WriteToPgm(image_data, file_name);
  }

// * Pixel access *
  int& igg::Image::at(const int row, const int col){
    // inefficient because of many RowMajorIndex function calls (but maybe compiler will optimize it?)
    // const unsigned int index = RowMajorIndex(row, col);
    // return data_[index];
    return data_[row + col*rows_];  // definitely more efficient
  }

// * ComputeHistogram
  std::vector<float> igg::Image::ComputeHistogram(uint bins) const{
    std::vector<int> bin_edges(bins+1, 0);
    for(uint i=0; i<bins+1; i++){bin_edges[i] = i * max_val_/bins; }

    // Calculate the bin counts
    std::vector<float> histogram(bins, 0);
    for(uint px_idx=0; px_idx < rows_*cols_; px_idx++){
      for(uint bin=0; bin<bins; bin++){
        if((data_[px_idx] > bin_edges[bin]) & (data_[px_idx] < bin_edges[bin+1])) {histogram[bin]++;}
        }
      }

    // Normalize the bin counts
    for(uint bin=0; bin<bins; bin++){
      histogram[bin] /= rows_*cols_;
      std::cout << "Bin upper edge: [" << bin_edges[bin] << "]" << std::endl;
      std::cout << "Probability mass: " << histogram[bin] << std::endl << std::endl;
    }

    return histogram;
  }

  void igg::Image::DownScale(uint scale){
    uint rows_after, cols_after, size_after;
    rows_after = rows_ / scale;
    cols_after = cols_ / scale;
    size_after = rows_after * cols_after;

    std::vector<int> data_after(size_after, -1);
    uint idx_small, idx_big;
    for(uint r=0; r<rows_after; r++){
      for(uint c=0; c<cols_after; c++){
        idx_small = c + r * cols_after;
        idx_big = c * scale + r * scale * cols_;
        data_after[idx_small] = data_[idx_big];
      }
    }
    data_ = std::move(data_after);
    cols_ = cols_after;
    rows_ = rows_after;
  }

  void igg::Image::UpScale(uint scale){
    uint rows_after, cols_after, size_after;
    rows_after = rows_ * scale;
    cols_after = cols_ * scale;
    size_after = rows_after * cols_after;

    std::vector<int> data_after(size_after, -1);
    uint idx_small, idx_big, idx_sub;
    for(uint r=0; r<rows_; r++){
      for(uint c=0; c<cols_; c++){
        idx_small = c + r * cols_;
        idx_big = c * scale + r * scale * cols_after;
        for(uint r_sub=0; r_sub<scale; r_sub++){
          for(uint c_sub=0; c_sub<scale; c_sub++){
            idx_sub = c_sub + r_sub * cols_after;
            data_after[idx_big + idx_sub] = data_[idx_small];
          }
        }
      }
    }
    data_ = std::move(data_after);
    cols_ = cols_after;
    rows_ = rows_after;
  }
