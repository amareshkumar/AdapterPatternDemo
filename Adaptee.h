#pragma 
#include <iostream>

class Drinks // Adaptee
{
public:
	Drinks() = default;

	inline void make_black_coffee() {
		std::cout << "black coffee\n";
	}

	inline int black_coffe_price() {
		return 1;
	}

private:
	//enum coffe_type {black, tea, };
	int sugar_level; //0-100 g
	int coffe_price;
};

