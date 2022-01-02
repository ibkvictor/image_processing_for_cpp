#include "print.h"

Print::Print(const std::string &value): str_(value) {}
        
std::string Print::str() const {return str_;}

void Print::print() const {std::cout<<"this is the string"<<std::endl;}
