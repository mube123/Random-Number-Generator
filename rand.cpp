#include <iostream>
#include <ctime>
#include <cstdlib>
int roll_dice();
using namespace std;

int main()
{  
  	roll_dice();
}

//defining function
int roll_dice()
{
	srand(time(0));  // Initialize random number generator.
 
      cout << (rand() % 6) + 1<<" ";  
  	return 0;
}
 
