#include <algorithm>
#include <chrono>
#include <ctime>
#include <fstream>
#include <iostream>
#include <map>
#include <random>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
class INT {
	friend ostream& operator<<(ostream& os, const INT& i);

public:
	INT(int i) : i_(i) {}

	// prefix ++
	INT& operator++() {
		++(this->i_);
		return *this;
	}

	// postfix ++
	const INT operator++(int) {
		INT tmp = *this;
		++(*this);
		return tmp;
	}

	// prefix --
	INT& operator--() {
		--(this->i_);
		return *this;
	}

	// postfix --
	const INT operator--(int) {
		INT tmp = *this;
		--(*this);
		return tmp;
	}

	// dereference
	int& operator*() {
		return (int&)i_;
	}

private:
	int i_;
};

ostream& operator<<(ostream& os, const INT& i) {
	os << '[' << i.i_ << ']' << endl;
	return os;
}

void test() {
	INT I(5);
	cout << I++;
	cout << ++I;
	cout << I--;
	cout << --I;
	cout << *I;
}

int main() {
	test();
	return 0;
}
