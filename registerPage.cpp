#include <iostream>
#include <string>
#include <fstream>

void registerPage() {
	std::string username {};
	std::string password {};
	std::string password2 {};
	bool passMatch {};

	std::cout << "Create Username: " << std::endl;
	std::cin >> username;
	std::cout << "Create Password: " << std::endl;
	std::cin >> password;
	std::cout << "Confirm Password: " << std::endl;
	std::cin >> password2;

	if (password != password2) {
		std::cout << "Passwords do not match, please try again" << std::endl;
		registerPage();
	} else {
		std::cout << "Passwords match" << std::endl;
		passMatch = true;
	}
	
	if (passMatch == true) {
		std::ofstream file;
		file.open("C:\\Users\\jacks\\OneDrive\\Documents\\C++ Project\\" + username + ".txt");
		file << username << std::endl;
		file << password << std::endl;
		file.close();
	}

	return;
}
