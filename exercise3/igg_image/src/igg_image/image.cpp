#include <vector>
#include "igg_image/image.h"
#include <cassert>
using namespace igg;

Image::Image(const IoStrategy& io_strategy): io_strategy_{io_strategy} {}

Image::Image(int rows, int cols, const IoStrategy& io_strategy): rows_{rows}, cols_{cols}, data_(cols * rows, {0,0,0}), io_strategy_{io_strategy} {}
int Image::rows() const {return rows_;}

int Image::cols() const {return cols_;}

Image::Pixel &Image::at (int row, int col) {return data_[index(row, col)];}

int Image::index (int row, int col) const {
 return ((row * rows_) + col);
}

void Image::DownScale(int scale) {
 std::vector<Pixel> v ((int) rows_ / scale * rows_/ scale, {0,0,0});
 for(auto a = 0; a < rows_; a += scale){
  for(auto b = 0; b < cols_; b += scale) {
   v[index((int) a/scale, (int) b/scale)] = data_[index(a,b)];
  }
 }
 cols_ = (int) cols_/scale;
 rows_ = (int) rows_/scale;
}

void Image::UpScale(int scale) {
 std::vector<Pixel> v (rows_ * cols_ * scale * scale, {0,0,0});

 for(auto a = 0; a < rows_; a++){
  for(auto b = 0; b < cols_; b++){
   for(auto c = 0; c < scale; c++){
    for(auto d = 0; d < scale; d++){
     v[index((a * scale) + c,(b * scale) + d)].red = data_[index(a, b)].red;
     v[index((a * scale) + c,(b * scale) + d)].green = data_[index(a, b)].green;
     v[index((a * scale) + c,(b * scale) + d)].blue = data_[index(a, b)].blue;
    }
   }
  }
 }
 cols_ = (int) cols_ * scale;
 rows_ = (int) rows_ * scale;
}

bool Image::ReadFromDisk(const std::string& file_name){
 ImageData image_data (io_strategy_.Read(file_name));
 if(image_data.rows){
  cols_ = image_data.cols;
  rows_ = image_data.rows;
  max_val_ = image_data.max_val;
  for(auto i = 0; i < Size(); i++){
   data_[i].red = image_data.data[0][i];
   data_[i].green = image_data.data[1][i];
   data_[i].blue = image_data.data[2][i];
  }
  return true;
 }
 else{
  return false;
 }
}

void Image::WriteToDisk(const std::string& file_name){
 std::vector<int>red_vec (rows_ * cols_);
 std::vector<int>green_vec (rows_ * cols_);
 std::vector<int>blue_vec (rows_ * cols_);

 for(int i = 0; i < Size(); i++){
  red_vec[i] = data_[i].red;
  green_vec[i] = data_[i].green;
  blue_vec[i] = data_[i].blue;
 }
 assert(io_strategy_.Write(file_name, {rows_, cols_, max_val_, {red_vec, green_vec, blue_vec}})); 
}
