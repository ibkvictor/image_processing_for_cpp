#include <iostream>
#include "image.h"
#inlcude "io_tools.h"

TEST(Image_indexing normal){
	EXPECT_EQ(Image::Image(10,10).at(9,9), 0); //testing default vaule of image data
}

TEST(Image_indexing extreme){
	EXPECT_EQ(Image::Image().);
}

TEST(Image_size normal){
        EXPECT_EQ({Image::Image().rows, Image::Image()}, {0,0});
}

TEST(Image_size extreme){
        EXPECT_EQ(Image::Image(100, 100).size(), (std::vector<int> {100,100}));
}

TEST(Image_read_from_file normal){
        EXPECT_EQ(Image::Image().FillFromPgm("file_name.pgm"), true);
}

TEST(Image_Histogram normal){
	Image::Image() img;
	img.FillFromPgm("file_name.pgm");
        EXPECT_EQ(img.ComputeHistogram(4), (std::vector<float> {}));
}

TEST(Image_DownScale normal){
	Image::Image(4,4) img;
	for(auto i = 0; i <= 4; i++){
		for(auto j = 0; j <=4; j++){
			if((i < 2 && j < 2) || (i >= 2 && j >= 2)){
				img.at(i, j) = 255;
			}
			else{
				img.at(i, j) = 0;
			}
		}
	}
	img.DownScale(2);
	EXPECT_EQ({img.at(0,0), img.at(1,1)}, {255, 0});
}

TEST(Image_UpScale normal){
        Image::Image(4,4) img;
        for(auto i = 0; i <= 2; i++){
                for(auto j = 0; j <=2; j++){
                        if((i < 1 && j < 1) || (i >= 1 && j >= 1)){
                                img.at(i, j) = 255;
                        }
                        else{   
                                img.at(i, j) = 0;
                        }
                }
        }
        img.UpScale(2);
        EXPECT_EQ({img.at(0,0), img.at(1,1)}, {255, 255));
}

