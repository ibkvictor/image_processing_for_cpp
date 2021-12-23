#include "image.h"
#include <vector>

using namespace igg;

/*int rows_ = 0;
int cols_ = 0;
std::vector<std::vector<int>> data_;
int max_val = 255; */

Image::Image(){
   cols_ = 0;
   rows_ = 0;
}

Image::Image(int rows, int cols){
   rows_ = rows;
   cols_ = cols;
   std::vector <std::vector<int>> v (rows, std::vector<int> (cols, 0));
   data_ = v;
}
int &Image::at (int rows, int cols){
   return data_[rows][cols];
}

std::vector<int> Image::ComputeHistogram(int bins){
   std::vector<int> result(bins, 0);
   for(auto &i: data_){
    for(auto &j: i){
     for(auto k=1 ; k<=bins; k++){
      if(j < (max_val_ * k)/bins){
       result[k-1] += 1;
       break;
      }
     }
    }
   }
   return result;
}
