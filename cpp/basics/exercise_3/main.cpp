#include <iostream>

using namespace std;

/**
	* @brief 
	*        Program that asks the user to type all the integers 
	*        between 8 and 23 (both included) using a while loop.
	* 
	* @return int
	*/
int main ()
{
	cout <<  "Please enter numbers from 8 & 23" <<  endl;
	
	int i = 8;
	
	/* Loop from 8 to 23 */
	while (i <= 23)
	{
		int num = 0;
		
		cin >> num;
		
		int j = 3;
		
		/* retry 3 times until the given number is correct */
		while (num != i) {
			
			if (j == 0) {
				cout << "[FAIL] Max retries exceeded" << endl;
				return 0;
			} else {
				cout << "Invalid entry, please retry" << endl;
			}
			cin >> num;
			j--;
		}
		i++;
	}
	
	cout << "SUCCESS" <<  endl;
	return 0;
}