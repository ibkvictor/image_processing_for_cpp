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
	return 0;
}
