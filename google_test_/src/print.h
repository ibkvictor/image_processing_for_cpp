#pragma once
#include <iostream>
#include <string>

class Print{
        public:
        Print(const std::string &value);

	std::string str() const;

	void print() const;

        private:
        std::string str_;
};    
