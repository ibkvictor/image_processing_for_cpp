#include "igg_image/io_strategies/ppm_strategy.h"
#include <iomanip>

using namespace igg;

bool PpmIoStrategy::Write(const std::string &file_name, const ImageData &data) const
{
	std::ofstream f_out(file_name);
	if (!f_out)
	{
		return false;
	}
	else
	{
		f_out << "P3" << std::endl;
		f_out << "# created by Victor Ezekiel using Image Library developed by github.com/ibkvictor\n";
		f_out << "  " << data.cols << '\t' << data.rows << '\n';
		f_out << std::setw(5) << std::setfill(' ') << std::right << data.max_val << '\n';
		for (auto r = 0; r < data.rows; r++)
		{
			for (auto c = 0; c < data.cols; c++)
			{
				for (int i = 0; i < 3; i++)
				{
					f_out << std::setw(5) << std::setfill(' ') << std::right << data.data[i][r * data.cols + c];
				}
			}
			f_out.put('\n');
		}
		return true;
	}
}

ImageData PpmIoStrategy::Read(const std::string &file_name) const
{

	std::ifstream f_in(file_name);
	int rows, cols, max_val;
	std::string header1, header2;
	std::getline(f_in, header1);
	std::getline(f_in, header2);
	f_in >> rows >> cols >> max_val;
	ImageData image_data{rows, cols, max_val, std::vector<std::vector<int> >(3, std::vector<int>(rows * cols, 0))};
	for (auto r = 0; r < image_data.rows; r++)
	{
		for (auto c = 0; c < image_data.cols; c++)
		{
			f_in >> image_data.data[0][(r * cols) + c] >> image_data.data[1][(r * cols) + c] >> image_data.data[2][(r * cols) + c];
		}
	}
	return image_data;
}