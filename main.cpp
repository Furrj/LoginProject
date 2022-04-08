#include <iostream>
#include <string>
#include <fstream>
#include "initialPage.h"
#include "loginPage.h"
#include "registerPage.h"

int main() {
	int logNum {0};
	int& p_logNum {logNum};
	bool initOver {};
	bool& p_initOver {initOver};

	initialPage(p_logNum, p_initOver);
	
	if (logNum == 1 && initOver == true) {
		loginPage();
	} else if (logNum == 2 && initOver == true) {
		registerPage();
	}

	loginPage();

	return 0;
}	
