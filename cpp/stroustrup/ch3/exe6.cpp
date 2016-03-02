#include <iostream>
#include <array>
#include <algorithm>

using namespace std;


/**
 * @brief Write a program that prompts the user to enter 3 integer values, 
 *        and then outputs the values in numerical sequence separated by commas.
 *        So: if the user enters the values 10 4 6, the output should be 
 *        4, 6, 10. If two values are the same, they should just be ordered 
 *        together. So, the input 4 5 4 should give 4, 4, 5
 * 
 * @return int
 */
using namespace std;

int main(int argc, char *argv[])
{	
	if (argc != 4) {
		cout << "Usage ./exe6 num1 num2 num3" << endl;
		return -1;
	}

	std::array<int, 3> num = {0, 0, 0};
	
	auto it = num.begin();
	
	for (int i = 1; i < argc-1; i++) {
		*(it++) = atoi(argv[i]);
	}
	
	std::sort(num.begin(), num.end());
	
	for (auto it = num.begin(); it != num.end(); ++it)
	{
		cout <<  *it << " " << endl;
	}
	
	return 0;
}


