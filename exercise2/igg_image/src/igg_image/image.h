#pragma once

#include <vector>

namespace igg {

class Image {
 public:
  ///////////////////// Create the public interface here ///////////////////////
  Image(){
   cols_ = 0;
   rows_ = 0;
  };
  Image(int rows, int cols){
   rows_ = rows;
   cols_ = cols
  };
  int &at (int rows, int cols){
   return data_[rows][cols]; 
  }
 private:
  int rows_ = 0;
  int cols_ = 0;
  int max_val_ = 255;
  std::vector<vector<int> data_;
};

}  // namespace igg
