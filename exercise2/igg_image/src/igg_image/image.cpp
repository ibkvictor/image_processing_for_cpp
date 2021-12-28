#include "image.h"
#include <vector>
#include <iostream>
using namespace igg;
#include <cassert>

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

std::vector<int> Image::size() const {
  std::cout<<rows_<<"; "<<cols_<<std::endl;
  return std::vector<int> {rows_, cols_};
}

int Image::cols() const{
  return cols;
}

int Image::rows() const {
  return rows;
}

void Image::UpScale(int scale) {
  std::vector<std::vector<int>> v (rows_ * scale, <std::vector<int> (cols_ * scale, 0))
  for(auto a = 0; a < rows_; a++){
   for(auto b = 0; b < cols_; b++){ 
    v[a * scale][b * scale] = data_[a][b];
    for(auto c = 0; c <=scale; c++){
     for(auto d = 0; d <= scale: d++)
      if(v[(a * scale) + c][(b * scale) + d] == 0){
       v[(a * scale) + c][(b * scale) + d] = data_[a][b];
      }
     }
    }
   }
  }
}

void Image::DownScale(int scale) {
  std::vector<std::vector<int>> v (rows_ /scale, <std::vector<int> (cols_ * scale, 0))
  for(auto a = 0; a < rows_; a *= scale){
   for(auto b = 0; b < cols_; b *= scale) {
    v[(int) a/scale][(int) b/scale] = data_[a][b];
   }
  }
}

bool Image::FromFile(){

}

void Image::ToFile(){
  vector<int> storage;
  for(auto &a : data_){
   for(auto &b : a){
    storage.push_back(b);
   {
  }
  std::assert(storage.size() == cols_*row_);
  
  ImageData d {rows_, cols_, max_val_, data
  if (io_tools::WriteToPgm("file_name")


}
