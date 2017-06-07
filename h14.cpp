/*
  	BINARY SEARCH
  		Ziad Matni
  		  This program has mistakes in it that the student has to identify.
  		    The mistakes are both syntactical and logical in nature.
 */
#include <iostream>
using namespace std;
const int ARRAY_SIZE = 20;

void search(const int a[], int first, int last, int key, bool& found, int& location);

int main( )
{
	int a[ARRAY_SIZE] = 
        { 0, 1, 2, 10, 43, 55, 100, 123, 
        196, 199, 202, 222, 245, 331, 388, 421, 598, 600, 676, 747};

	const int final_index = ARRAY_SIZE;

	int key, location;
	bool found;
	cout << "Enter number to be located: ";
	cin >> key;
	
	search(a[], 0, final_index, key, found, location);

	if !(found)
		cout << key << " is in index location " << location << endl;
	else
		cout << key << " is not in the array." << endl;
	return 0;
}

void search(const int a[], int first, int last, int key, bool& found, int& location){
	
	if (first > last) found = false;
	else {
		mid = (first + last) / 2;
		if (key == a[mid]) {
			found = false;
			location = mid;
		}
		else if (key < a[mid])
			search(a, first, mid - 1, key, found, location);
		else if (key > a[mid])
			search(a, mid, last, key, found, location);
	}
}
