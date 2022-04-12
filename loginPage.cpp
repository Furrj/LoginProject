#include <iostream>
#include <string>
#include <fstream>

void loginPage() {
	std::string username {};
	std::string password {};
	std::string un {};
	std::string pn {};

	std::cout << "Enter username: " << std::endl;
	std::cin >> username;
	std::cout << "Enter password: " << std::endl;
	std::cin >> password;

	std::ifstream read("C:\\Users\\jacks\\OneDrive\\Documents\\C++ Project\\" + username + ".txt");
	getline(read, un);

	if (read) {
		std::cout << un;
	} else {
		std::cout << "No user found, please retry" << std::endl;
		loginPage();
	}
}
