#include <iostream>

/**
 * @brief Write a program to test an integer value to determine if it is odd or 
 *        even. As always, make sure your output is clear and complete. 
 *        In other words, don't just output "yes" or "no". 
 *        Your output should stand alone, like ``The value 4 is an even number.
 *        '' Hint: see the Remainder (modulo) operator in 2.4
 * 
 * @return int
 */
using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 2) {
		cout << "Usage: ./exe8 num" << endl;
		return -1;
	}
	
	int num = atoi((const char *)argv[1]);
	
	if ((num % 2) == 0) {
		cout << "The value " << num << " is an even number" << endl;  
		
	} else {
		
		cout << "The value " << num << " is an odd number" << endl;  
	}
	
	return 0;
}
