#include <iostream>
#include <vector>
#include "image.h"
#include "io_tools.h"

int main(){
  igg::Image image;
  image.FillFromPgm("../data/lena.ascii.pgm");

  std::cout << image.rows() << std::endl;
  std::cout << image.cols() << std::endl;

  std::vector<float> hist = image.ComputeHistogram(6);

  image.UpScale(2);
  image.WriteToPgm("test_upscaled.ascii.pgm");
  
  image.DownScale(2);
  image.WriteToPgm("test_downscaled.ascii.pgm");

  return 0;
}
