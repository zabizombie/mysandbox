#include <iostream>
#include <string>
#include <array>
/**
 * @brief Write a program that takes an operation followed by two operands and 
 *        outputs the result. For example:
          + 100 3.14
          * 4 5
          Read the operation into a string called operation and use an 
          if-statement to figure out which operation the user wants. 
	      For example, if (operation=="+"). Read the operands into variables of 
	      type double. 
	      Implement this for operations called +, -, *, /, plus, minus, mul, and
	      div with their obvious meanings.
 * 
 * @param argc ...
 * @param argv ...
 * @return int
 */

using namespace std;
int main ()
{		
	double result = 0;
	double a      = 0;
	double b      = 0;
	
	string operation;
	
	cout << "Please enter the operator num1 num2" << endl;
	
	cin >> operation >> a >> b;

	if (operation == "+") {
		result = a + b;
	} else if (operation == "-") {
		result = (a > b) ? (a-b) : (b -a);
	} else if (operation == "*") {
		result = a * b;
	} else if (operation == "/") {
		if (b == 0) {
			cout << "Division by zero Invalid" << endl;
			return -1;
		} 		
		result = a /b;
	} else {
		cout << "Invalid Operator" << endl;
		return -1;
	}

	cout << "Result is " << result << endl;
	
	return 0;
}