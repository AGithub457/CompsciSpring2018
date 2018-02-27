#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const int SIZE = 99;

int main()
{
	bool isCovered[SIZE] = {};
  int number; // number read from a file
  string num;

  // Initialize the array
  for (int i = 0; i < SIZE; i++)
    isCovered[i] = false;

  // Read each number and mark its corresponding element covered
  do
  {
	  cout << "Input number: ";
	  getline(cin, num);
	  stringstream(num) >> number;
    isCovered[number - 1] = true;
    cin >> number;
  } while (number != 0);

  // Check if all covered
  bool allCovered = true; // Assume all covered initially
  for (int i = 0; i < SIZE; i++)
    if (!isCovered[i]) 
    {
       allCovered = false; // Find one number not covered
	   i = 100;
    }

  // Display result
  if (allCovered) {
	  cout << "The tickets cover all numbers" << endl;
  } else {
	  cout << "The tickets don't cover all numbers" << endl;
  }

  return 0;
}
