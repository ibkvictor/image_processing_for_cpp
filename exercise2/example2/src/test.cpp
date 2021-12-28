#include <iostream>

class Table{
	public:
	Table(int size){
		size_ = size;
	}
	int Size() const {
		return size_;
	}
	private:
	int size_ = 0;
};

int main() {
	Table table (4);
	std::cout<<(Table (4).Size())<<std::endl;
}
