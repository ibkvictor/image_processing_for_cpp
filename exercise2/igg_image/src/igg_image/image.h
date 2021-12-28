#pragma once

#include <string>
#include <vector>

namespace igg {

class Image {
 public:
  Image(); //image constructor when size of image is not specified
  Image(int rows, int cols); //image constructor using defined n by n size of image
  int &at (int rows, int cols); //gets the pixel value at the specified index and assigns values to that index
  std::vector<int> ComputeHistogram(int bins); //computes the histogram of the image
  std::vector<int> size() const ; //gets the size of the image
  int cols() const; //gets the number of columns
  int rows() const; //gets the number of rows
  bool FillFromPgm(const std::string& file_name);
  void WriteToPgm(const std::string& file_name);
  void UpScale(int scale);
  void DownScale(int scale);
 private:
  int rows_;
  int cols_;
  int max_val_ = 255; //maximum possible pixel value
  std::vector<std::vector<int>> data_; //2d vector containing the image pixel values
};

}  // namespace igg
