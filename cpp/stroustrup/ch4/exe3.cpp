#include <iostream>
#include <sstream>
#include <vector>

/**
 * @brief Read a sequence of doubles into a vector. Think of each value as the 
 *        distance between two cities along a given route. Compute and print the
 *        total distance (the sum of all distances). Find and print the smallest
 *        and greatest distance between two neighboring cities. Find and print 
 *        the mean distance between two neighboring cities.
 * 
 * @return int
 */
using namespace std;
int main (int argc, char *argv[])
{
	double sum   = 0;
	double small = 0;
	double large = 0;
	
	if (argc < 2) {
		cout << "Usage: ./exe3 num1 num2 num3" << endl;
		return -1;
	}

	// Holds the entered distances
	vector <double> dist;
	
	auto iter = dist.begin();
	
	/* Fill the data in vector */
	for (int i = 1; i < argc; i++) {
		double value;
		stringstream ss(argv[i]);
		ss >> value;
		dist.push_back(value);
	}
	
	small = dist.front();
	large = dist.front();
	for(auto iter = dist.begin(); iter < dist.end(); iter++) {
		sum += *iter;
		
		if (*iter < small) small = *iter;
		if (*iter > large) large = *iter;
	}
	
	cout << "Total    Distance " << sum << endl;
	cout << "Mean     Distance " << sum/dist.size() << endl;
	cout << "Largest  Distance " << large << endl;
	cout << "Smallest Distance " << small << endl;
	
    return 0;
}
