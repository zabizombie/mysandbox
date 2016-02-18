#include <iostream>

using namespace std;

/**
	* @brief 
	*        program that asks the user to type 10 integers and writes the sum 
	*        of these integers.
	* 
	* @return int
	*/
int main ()
{
	cout <<  "Please enter 10 digits" <<  endl;
	
	int result = 0;
	int num    = 0;
	
	for (int i =0; i < 10; i++) {
		cin >> num;
		result += num;
	}
	cout << "SUCCESS " << result <<  endl;
	return 0;
}