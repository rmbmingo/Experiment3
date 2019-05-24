#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i, total, average, arr[10], sum;
	
	cout << "Enter 10 integers" << endl;
	
	for(i=0; i<10; i++)
	{
		cout << "Enter number " << i+1 << ": ";
		cin >> arr[i];
	}
	
	sum += arr[i];
	average = sum/10;
	
	for(i=1; i<10; i++)
	{
		if(arr[0] > arr[i])
		arr[0] = arr[i];
	}
	cout << "The smallest integer is = " << arr[0] << endl;
	
	for(i=1; i<10; i++)
	{
		if(arr[0] < arr[i])
		arr[0] = arr[i];
	}
	cout << "The largest integer is = " << arr[0] << endl;
	cout << "The total of the 10 integers is = " << total << endl;
	cout << "The average of the 10 integers is = " << average << endl;
	
	_getch ();
	return 0;
}
