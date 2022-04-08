#include <iostream>
#include <string>

void initialPage(int& po, bool& io) {
	short a {};

	std::cout << "Enter 1 to Login, 2 to Register" << std::endl;

	std::cin >> a;

	po = a;
	io = true;
	return;
}
