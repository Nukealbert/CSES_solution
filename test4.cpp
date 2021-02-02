#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Initialize array of pointer
	const char *colour[4] = { "Blue", "Red", 
							"Yellow", };
    
    sort(colour,colour+4);

	// Printing Strings stored in 2D array
	for (int i = 0; i < 4; i++)
		cout << colour[i]<< "\n";

	return 0;
}
