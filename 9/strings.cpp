#include <iostream>

// include the cstring library so that we
// can use the cstring functions listed below
#include <cstring>

using namespace std;

int main()
{
	const int NAME_SIZE = 15,
		SPORT_SIZE = 10;
	char name[NAME_SIZE],
		sport[SPORT_SIZE];

	// will write the first 14 symbols you enter into
	// the name
	cout << "Please enter your name: ";
	cin.getline(name, NAME_SIZE);
	
	cout << "Please enter your favourite sport: ";
	cin.getline(sport, SPORT_SIZE);

	cout << name << " loves " << sport << endl;

	// functions for stringa to play with:
	// - strlen
	// - strcat, strncat (strcat_s, strncat_s)
	// - strcpy, strncpy (strcpy_s, strncpy_s)
	// - strcmp
	// - strchr
	// - strrchr
	// - strstr

	return 0;
}