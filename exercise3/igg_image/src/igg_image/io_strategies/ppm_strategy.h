#pragma once
#include <iostream>
#include "igg_image/io_strategies/strategy.h"
#include <fstream>

namespace igg {

class PpmIoStrategy: public IoStrategy{
	public:
	bool Write(const std::string& file_name, const ImageData& data) const override;

	ImageData Read(const std::string& file_name) const override;
};

}//namespace igg
