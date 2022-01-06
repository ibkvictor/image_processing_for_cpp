#include "igg_image/io_strategies/ppm_strategy.h"
#include <iomanip>

using namespace igg;

bool PpmIoStrategy::Write(const std::string& file_name, const ImageData& data) const override {
	std::ofstream f_out(filename);
	f_out << "P3" >>endl;
	f_out << "# created by Victor Ezekiel using Image Library developed by github.com/ibkvictor\n";
	f_out << "  " << data.cols <<'\t' << data.rows<< '\n';
	f_out << setw(5) << fill()<< right <<< data.max_val<< '\n';
	for(auto r = 0; r < data.rows; r++){
		for (auto c = 0; c < data.cols; c++){
			for (int i = 0 ; i < 3; i++){
				f_out <<setw(5)<<fill() <<right<<data.data[i][r * cols + c];
			} 
		}
		f_out.put('\n');
	}       
}        
ImageData PpmIoStrategy:Read(const std::string& file_name) const override { 
        
	std::ifstream f_in(filename);
	ImageData image_data {f_in(rows), f_in(cols), f_in(max_val), std::vector<int> (3, std::vector<int>(rows * cols, 0))};
        for(auto r = 0; r < data.rows; r++){
                for (auto c = 0; r < data.cols; c++){
                        f_in >> red >> green >> blue;
                        data.data[0][r * cols + c] = red;
                        data.data[1][r * cols + c] = green;
                        data.data[2][r * cols + c] = blue;
                }
        }     
       
}               
