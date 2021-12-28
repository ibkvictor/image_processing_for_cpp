# Image Object Implementaton

## Fuctionalities
* Upscale (increase) images based on a scale factor using k-nearest neighbor algorithm
* Downscale (reduce) images
* Read image from .pgm file format
* calculate histogram of image
* Writing image to a file on disk

## Methodology
### io_tools Library
The class works using a linked shared library "libio_tools.so" found in the "igg_image/lib" directory. The library provide the ability to read file streams into a struct ImageData, which is then converted to Image class data. A struct is a class with all its containing data public by default and is to be used a data container only. The implementation of the conversion is found in the Image::FillFromPgm(filename) in file "src/igg_image/image.cpp".

### Image class described in "image.cpp"
The image class implements the remaining functions as defined in the "src/image.h" header file. It constructs a representation of an image using c++ std::vector type and store values for the number of rows and cols. Indexing into the image is allowed using the "at()" function operator. Similarly, the size of the image is fetched using "siee()". The class goes further to fully implement resizing of images upscaling, increasing the scale, and downscaling, reducing the image. Thus, image objects can be zoomed into and out of. To facilitate input-output from and to files, functions are described to enable reading and writing to files using only the filename.

## Instructions
### Getting the folder
Clone the repo using the https link provided to this remote repo.
* "git clone https://github.com/ibkvictor/image_processing_for_cpp.git"
You would be using the sub directory "igg_image" in exercise2.

### Building 
Ensure you have the program cmake installed on your machine, a build folder is already provided.
On a Linux/Unix system,
* "cd build"
* "cmake .."
* "make"

The above commands would build the libraries and executable files providing the binaries in the build directory. Thus, the program can be operated from the build directory by running the binaries in a shell.

## References
![task description](https://www.ipb.uni-bonn.de/wp-content/uploads/2018/05/homework_2.pdf)
![googleetest](https://github.com/google/googletest)

## TO DO
* Complete implementation of the googletest on the entire class
* Receive positive test results for all tests provided: normal and extreme.

### Interested in contributing to this repo. Send a pull request. Thank you.
