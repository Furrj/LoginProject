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

	std::ifstream read("/home/fratersks/Documents/loginProfiles/" + username + ".txt");
	getline(read, un);
	getline(read, pn);

	if (read && pn == password) {
		std::cout << "Welcome, " << un << ", you are logged in" << std::endl;
	} else if (!read){
		std::cout << "No user found, please retry" << std::endl;
		loginPage();
	} else if (read && pn != password) {
		std::cout << "Password incorrect, please retry" << std::endl;
		loginPage();
	}
}
