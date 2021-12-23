
#include <vector>

namespace igg {

class Image {
 private:
  int rows_ = 0;
  int cols_ = 0;
  const int max_val_ = 255;
  std::vector<vector<int> data_;
 public:
  Image(){
   cols_ = 0;
   rows_ = 0;
  }
  Image(int rows, int cols){
   rows_ = rows;
   cols_ = cols;
   std::vector<vector<int>> data_ (rows, std::vector<int> (cols, 0));
  };
  int &at (int rows, int cols){
   return data_[rows][cols];
  }
  std::vector ComputeHistogram(int bins){
   std::vector<int> result(bins, 0);
   for(auto &i: data_){
    for(auto &j: i){
     for(auto k=1 ; k<=bins; k++){
      if(j < (max_val * k)/bins){
       result[k-1] += 1;
       break;
      }
     }
    }
   }
   return result;
  }
}
}
