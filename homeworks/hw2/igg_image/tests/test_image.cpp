#include <gtest/gtest.h>
#include <string>
#include "../src/igg_image/image.h"


std::string data_path = "../data/test/";

TEST(ImageTest, TestImageConstructorWithDefinedSizeAndGetters_CORRECT){
  uint expected_rows, expected_cols;
  expected_rows = 4;
  expected_cols = 6;
  igg::Image image = {expected_rows, expected_cols};
  EXPECT_EQ(image.rows(), expected_rows);
  EXPECT_EQ(image.cols(), expected_cols);
}

TEST(ImageTest, TestImageConstructorWithDefinedSizeAndGetters_WRONG){
  uint expected_rows, expected_cols;
  expected_rows = 4;
  expected_cols = 6;
  igg::Image image = {expected_rows+1, expected_cols-1};
  EXPECT_NE(image.rows(), expected_rows);
  EXPECT_NE(image.cols(), expected_cols);
}

TEST(ImageTest, TestImageRead){
	igg::Image image;
	std::string full_path = data_path + "test.pgm";
	image.FillFromPgm(full_path);
	EXPECT_EQ(image.rows(), 2);
	EXPECT_EQ(image.cols(), 3);
}


TEST(ImageTest, TestImageReadAndWrite){
	igg::Image image_read_from_true;
	igg::Image image_read_from_written;
	std::string read_from = "Downscaled2_lena.ascii.pgm";
	std::string write_to = "Downscaled2_lena.ascii2.pgm";
	bool write_success;

	image_read_from_true.FillFromPgm(read_from);
	std::cout << "1" << write_success << std::endl;
	write_success = image_read_from_true.WriteToPgm(write_to);
	std::cout << "2" << write_success << std::endl;

	image_read_from_written.FillFromPgm(write_to);
	
	EXPECT_EQ(image_read_from_true.rows(), image_read_from_written.rows());
	EXPECT_EQ(image_read_from_true.cols(), image_read_from_written.cols());
	// Check equality of pixel (2, 2)
	EXPECT_EQ(image_read_from_true.at(2, 2), image_read_from_written.at(2, 2));
}
