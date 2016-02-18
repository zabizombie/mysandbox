#include <iostream>

using namespace std;

/**
	* @brief 
	*        program that asks the user to type 10 integers and writes the 
	*        smallest value.
	* 
	* @return int
	*/
int main ()
{
	cout <<  "Please enter 10 digits" <<  endl;
	
	int result = 0;
	int num    = 0;
	int i      = 0;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		
		if (i == 0) {
			result = num;
		} else if (num < result) {
			result = num;
		}
	}
	cout << "SUCCESS " << result <<  endl;
	return 0;
}