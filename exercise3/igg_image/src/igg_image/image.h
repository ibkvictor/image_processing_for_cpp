// Copyright Igor Bogoslavskyi, year 2018.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#pragma once

#include <vector>
#include "igg_image/io_strategies/strategy.h"
#include "igg_image/io_strategies/ppm_strategy.h"
#include "igg_image/io_strategies/png_strategy.h"

namespace igg
{

  class Image
  {
  public:
    //Image object constructors
    Image(const IoStrategy &io_strategy);
    Image(int rows, int cols, const IoStrategy &io_strategy);
    /// A struct within class Image that defines a pixel.
    struct Pixel
    {
      int red;
      int green;
      int blue;
    };
    int rows() const;
    int cols() const;
    Pixel &at(int row, int col);
    void DownScale(int scale);
    void UpScale(int scale);
    std::vector<int> ComputeHistogram(int bins);
    // TODO: fill public interface.
    bool ReadFromDisk(const std::string &file_name);
    void WriteToDisk(const std::string &file_name);

  private:
    // TODO: add missing private members when needed.

    int rows_ = 0;
    int cols_ = 0;
    int max_val_ = 255;
    std::vector<Pixel> data_;
    int index(int row, int col, int cols, int rows) const; //converts row and col to vector index.
    const IoStrategy &io_strategy_;
    int Size() const { return cols_ * rows_; }
  };

} // namespace igg