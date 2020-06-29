#include <iostream>
using namespace std;

int main() {
	cout << "Enter amount of numbers" << endl;
	int lenght;
	int x = 0,b = 1;
	cin >>lenght;
	int *a = new int[lenght];
	for (int i = 0; i < lenght; i++)
	{
		cout << "Enter number"<<" "<< i << endl;
		cin >> a[i];
		cout << a[i] << endl;
	}
	for (int i = 0; i < lenght; i++)
	{
		if (a[b] > a[i])
		{
			x++;
		}
		b++;
	}
	x++;
	if (lenght == x)
		cout << "Your List Is Ascending";
	else
		cout << "Your List isn't Ascending" << endl;
}
