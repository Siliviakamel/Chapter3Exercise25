#include <iostream>
using namespace std;

int main()
{
	double rowLength; // R: length of the row, in feet
	double endPostSpace; // E: space used by one end-post assembly, in feet
	double vineSpacing; // S: space between vines, in feet

	cout << "Enter the length of the row, in feet: ";
	cin >> rowLength;

	cout << "Enter the space used by one end-post assembly, in feet: ";
	cin >> endPostSpace;

	cout << "Enter the space between vines, in feet: ";
	cin >> vineSpacing;

	// Guard against division by zero or nonsensical input
	if (vineSpacing <= 0) 
	{
		cout << "The space between vines must be greater than zero." << endl;
		return 1;
	}

	// V = (R - 2E) / S
	// Cast to int, since only whole vines can be planted
	int vines = static_cast<int>((rowLength - 2 * endPostSpace) / vineSpacing);

	if (vines < 0)
	{
		vines = 0; // row is too short to fit the end-post assemblies
	}

	cout << "The number of grapevines that will fit in the row is: " << vines << endl;
	return 0;	
}