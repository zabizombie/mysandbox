#include <iostream>

using namespace std;

/**
 * @brief 
 *        Program that asks the user to type all the integers 
 *        between 8 and 23 (both included) using a for loop.
 * 
 * @return int
 */
int main ()
{
  cout <<  "Please enter numbers from 8 & 23" <<  endl;
  
  /* Loop from 8 to 23 */
  for(int i = 8; i <= 23; i++) 
  {
    
    for (int j = 0; j <= 3; j++ ) 
    {
	int num = 0;
	
	cin >> num;
      
	/* success as input matched i */
	if (num == i) 
	{
	  break;
	} else { /* Retry for 3 times and break if limit exceeds */
	      if (j == 2) 
	      {
		  cout <<  "[FAIL] Max retries exceeded" <<  endl ;
		  return 0;
	      } else {
		  cout <<  "Invalid Number try again, retry count " << j+1 << endl;
	      }      
	}
    }
  }

  cout << "SUCCESS" <<  endl;
  return 0;
}