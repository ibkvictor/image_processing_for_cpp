#pragma once

#include <vector>

namespace igg {

class Image {
 public:
  Image(); //image constructor when size of image is not specified
  Image(int rows, int cols); //image constructor using defined n by n size of image
  int &at (int rows, int cols); //gets the pixel value at the specified index and assigns values to that index
  std::vector<int> ComputeHistogram(int bins); //computes the histogram of the image
  std::vector<int> get_size();
 private:
  int rows_;
  int cols_;
  int max_val_ = 255; //maximum possible pixel value
  std::vector<std::vector<int>> data_; //2d vector containing the image pixel values
};

}  // namespace igg
