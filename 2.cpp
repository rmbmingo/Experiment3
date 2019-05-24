#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	const int province = 3;
	const int day = 7;
	int temperature [province][day], i, j;
	
	cout << "Enter all temperature for a week of Province A, Province B, and then Province C \n";
	
	for(i=0; i<province; i++)
	{
		for(j=0; j<day; ++j)
		{
			cout << "Province " << i+1 << ", Day " << j+1 << ": ";
			cin >> temperature[i][j];
		}
	}
	
	cout << "\nDisplaying Values: " << endl;
	
	for(i=0; i<province; ++i)
	{
		for(j=0; j<day; ++j)
		{
			cout << "Province " << i+1 << ", Day " << j+1 << "=" << temperature[i][j] << endl;
		}
	}
	
	_getch();
	return 0;
}
