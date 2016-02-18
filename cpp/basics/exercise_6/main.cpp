#include <iostream>
#include <stdlib.h>


using namespace std;

/**
	* @brief 
	*        program that asks the user to type an integer N and computes the 
	*        sum of the cubes from 53 to N3.
	* 
	* @return int
	*/

#define cube(X) (X * X * X)
int main (int argc, char *argv[])
{
	int result = 0;
	
	if (argc < 2) {
		cout <<  "Usage:./exercise_6 number" <<  endl;
		return -1;
	} 
	
	int num = atoi(argv[1]);
	if (num <= 5) {
		cout << "Number should be > 5" << endl;
		return -1;
	}

	for (int i = 5; i <= num; i++) {
		result += cube(i);
	}
	
	cout << "SUCCESS " << result <<  endl;
	return 0;
}