// 1functor.cpp

#include <iostream>

template<typename T>
struct plus {
	T operator()(const T& x, const T& y) {
		return x + y;
	}
};

template<typename T>
struct minus{
	T operator()(const T& x, const T& y) {
		return x - y;
	}
};

int main() {
	std::cout << std::plus<int>()(10, 20) << std::endl;

	plus<int> plusobj;
	minus<int> minusobj;
	
	std::cout << plusobj(3, 5) << std::endl;
	std::cout << minusobj(3, 5) << std::endl;
	
	std::cout << plus<int>()(43, 50) << std::endl;
	std::cout << minus<int>()(43, 50) << std::endl;

	return 0;
}
