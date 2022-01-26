#include <vector>
#include "igg_image/image.h"
#include <cassert>
using namespace igg;

Image::Image(const IoStrategy &io_strategy) : io_strategy_{io_strategy} {}

Image::Image(int rows, int cols, const IoStrategy &io_strategy) : rows_{rows}, cols_{cols}, data_(cols * rows, {0, 0, 0}), io_strategy_{io_strategy} {}
int Image::rows() const { return rows_; }

int Image::cols() const { return cols_; }

Image::Pixel &Image::at(int row, int col) { return data_[index(row, col, rows_, cols_)]; }

int Image::index(int row, int col, int rows, int cols) const
{
  return ((row * rows) + col);
}

void Image::DownScale(int scale)
{
  ;
  int new_rows = (int)rows_ / scale;
  int new_cols = (int)cols_ / scale;
  std::vector<Pixel> v(new_rows * new_cols, {0, 0, 0});
  for (auto a = 0; a < rows_; a += scale)
  {
    for (auto b = 0; b < cols_; b += scale)
    {
      v[index((int)a / scale, (int)b / scale, new_rows, new_cols)] = data_[index(a, b, rows_, cols_)];
    }
  }
  cols_ = (int)cols_ / scale;
  rows_ = (int)rows_ / scale;
  data_ = v;
}

void Image::UpScale(int scale)
{
  int new_rows = rows_ * scale;
  int new_cols = cols_ * scale;
  std::vector<Pixel> v(new_rows * new_cols, {0, 0, 0});
  for (auto a = 0; a < new_rows; a += scale)
  {
    for (auto b = 0; b < new_cols; b += scale)
    {
      for (auto c = 0; c < scale; c++)
      {
        for (auto d = 0; d < scale; d++)
        {
          ;
          v[index((a + c), (b + d), new_rows, new_cols)] = data_[index((int)a / scale, (int)b / scale, rows_, cols_)];
        }
      }
    }
  }
  cols_ = (int)cols_ * scale;
  rows_ = (int)rows_ * scale;
  data_ = v;
}

bool Image::ReadFromDisk(const std::string &file_name)
{
  std::cout<<"one"<<std::endl;
  ImageData image_data{io_strategy_.Read(file_name)};
  std::cout<<"one_two"<<std::endl;
  if (image_data.rows)
  //std::cout<<"here to s"<<std::endl;
  {
    cols_ = image_data.cols;
    rows_ = image_data.rows;
    max_val_ = image_data.max_val;
    data_ = std::vector<Pixel>(Size(), {0, 0, 0});
    for (auto i = 0; i < Size(); i++)
    {
      data_[i] = {image_data.data[0][i], image_data.data[1][i], image_data.data[2][i]};
    }
    return true;
  }
  else
  {
    return false;
  }
}

void Image::WriteToDisk(const std::string &file_name)
{
  std::vector<int> red_vec(rows_ * cols_);
  std::vector<int> green_vec(rows_ * cols_);
  std::vector<int> blue_vec(rows_ * cols_);

  for (int i = 0; i < Size(); i++)
  {
    red_vec[i] = data_[i].red;
    green_vec[i] = data_[i].green;
    blue_vec[i] = data_[i].blue;
  }
  assert(io_strategy_.Write(file_name, {rows_, cols_, max_val_, {red_vec, green_vec, blue_vec}}));
}

std::vector<int> Image::ComputeHistogram(int bins)
{
  std::vector<int> result(bins, 0);
  for (auto &i : data_)
  {
    std::vector<int> pixel_rgb{i.red, i.green, i.blue};
    for (auto &p : pixel_rgb)
    {
      for (auto k = bins - 1; k >= 0; k -= 1)
      {
        if (p >= ((k * max_val_) / (bins)))
        {
          result[k] += 1;
          break;
        }
      }
    }
  }
  return result;
}
