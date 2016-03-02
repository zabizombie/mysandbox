/**
 * @brief Write a program that prompts the user to enter two integer values. 
 *        Store these values in int variables named val1 and val2. 
 *        Write your program to determine the smallest, largest, sum, 
 *        difference, product, and ratio of these values and report them to 
 *        the user.
 * 
 * @return int
 */

#include <iostream>

using namespace std;

int main ()
{
	int a = 0;
	int b = 0;
	
	cout << "Please Enter 2 Numbers" << endl;
	
	cin >> a;
	cin >> b;
	
	if (a == 0 || b == 0) {
		cout << "Divide by zero is invalid" << endl;
		return -1;
	}

	if ( a == b) 
	{
		cout << "Both Number are equal" << endl;
	} else {
		cout << "Largest number is            " << ((a > b) ? a : b) << endl;
		cout << "Smallest number is           " << ((a < b) ? a : b) << endl;
	} 
	
		cout << "Sum of the number is         " << (a + b) << endl;
		cout << "Difference of the number is  " << ((a > b) ? (a - b) : (b - a))
	                                                                    << endl;
		cout << "Ratio of the number is       " << ((a > b) ? (a / b) : (b / a))
	                                                                    << endl;
		cout << "Product of the number is     " << (a * b) << endl;
	
	return 0;
}

