

#include <iostream>
using namespace std;
int main()
{
	int zero_count=0, zero_count2=0;
	int n;
	cout << "Enter amount of numbers:" << endl;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)                      //програма описана у звіті з практики.
	{
		if (arr[i] == 0)
			zero_count++;
		else
		{
			zero_count = 0;
		}
		if (zero_count > zero_count2)
			zero_count2 = zero_count;
			
		
	}

		cout << "Biggest line of 0's is :" << zero_count2;
}

