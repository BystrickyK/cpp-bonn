#pragma once

#include <vector>
#include "io_tools.h"

namespace igg {

class Image {
 public:
   // * Constructors *
  Image();
  Image(uint rows, uint cols);

  // * Getter functions *
  uint rows() const;
  uint cols() const;

  // * Pixel access function *
  int& at(int row, int col);

  // * File IO *
  bool FillFromPgm(const std::string& file_name);
  bool WriteToPgm(const std::string& file_name);

  std::vector<float> ComputeHistogram(uint bins) const;

  void DownScale(uint scale);
  void UpScale(uint scale);

 private:
  uint rows_ = 0;
  uint cols_ = 0;
  int max_val_ = 255;
  std::vector<int> data_;

  int inline RowMajorIndex(uint row, uint col) const;
}; // class Image
}  // namespace igg
