#include <iostream>
#include <vector>
#include <string>
#include "image.h"
#include "io_tools.h"

int main(){
  igg::Image image;
  std::string filename = "lena.ascii.pgm";
  image.FillFromPgm("../data/" + filename);

  std::cout << image.rows() << std::endl;
  std::cout << image.cols() << std::endl;

  std::vector<float> hist = image.ComputeHistogram(6);

  image.UpScale(2);
  image.WriteToPgm("Upscaled2_" + filename);
  
  image.DownScale(2);
  image.WriteToPgm("Downscaled2_" + filename);

  return 0;
}
