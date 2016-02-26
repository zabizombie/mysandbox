#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * @brief  
 * 	program that asks the user to type an integer and writes "YOU WIN"
 *	if the value is between 56 and 78 (both included). 
 *	In the other case it writes "YOU LOSE".
 * 
 * @return 
 * 	int
 */

int main(int argc, char *argv[])
{
    if (argc < 2) 
    {
        cout << "Usage ./exercise1 number" << endl;
	return 0;
    }
    
    int number = atoi(argv[1]);
    if ( number >= 56 && number <= 78) 
    {
	cout << "YOU WIN" << endl;
    } else 
    {
	cout << "YOU LOSE" << endl;
    }
      
    return 0;
}
