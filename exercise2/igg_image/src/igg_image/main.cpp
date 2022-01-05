#include <iostream>
#include "image.h"
#include "image.cpp"

using std::cout;
using std::endl;
using namespace igg;

int main(){
	igg::Image img (4,4);
	cout<<"pixel at [0,3]"<<img.at(0,3)<<endl;
	img.at(0,3) = 15;
	cout<<"pixel at [0,3]"<<img.at(0,3)<<endl;
	io_tools::ImageData img2 = io_tools::ReadFromPgm("data/lena.ascii.pgm");
	std::cout<<img2.cols<<std::endl;
	//for (auto &a : img2.ComputeHistogram(4)){
	//	std::cout<<a<<" ";
	//}
	return 0;
}
