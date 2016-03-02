#include <iostream>

/**
 * @brief Write a program that converts spelled out numbers such as "zero" and 
 *        "two" into digits, such as 0 and 2. When the user inputs a number 
 *        print out the corresponding digit. Do it for the values 0,1,2,3, and 
 *        4 and write out "not a number I know" if the user enters something 
 *        that doesn't correspond, such as ``stupid computer!''
 * 
 * @param argc ...
 * @param argv ...
 * @return int
 */

using namespace std;
int main(int argc, char *argv[])
{
	if (argc != 2) {
		cout << "Usage:./exe9 number_in_string" << endl;
		return -1;
	}

	cout << "Please enter the number in strings e.g one" << endl;
	
	std::string input(argv[1]);
	
	if (input == "zero") {
		cout << "Entered number is 0" << endl;
	} else if (input == "one")  {
		cout << "Entered number is 1" << endl;
	} else if (input == "two") {
		cout << "Entered number is 2" << endl;		
	} else if (input == "three")  {
		cout << "Entered number is 3" << endl;
	} else if (input == "four") {
		cout << "Entered number is 4" << endl;			
	} else {
		cout << "stupid computer" << endl;
	}
		
 	return 0;
}