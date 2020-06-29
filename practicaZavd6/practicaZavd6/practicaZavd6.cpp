
#include <iostream>
using namespace std;
void searchingNumber(int x)
{
	for (int i = 1; i < x; i++)
	{
		int y;
		y = (i * (i + 1) * (i + 2));     //робота програми описана у звіті 
		
		if (y == x)
		{
			cout << "Multiplying these numbers will give you searching integer" << " "<< i << " " << i + 1 << " " << i + 2 << endl;
		}
	}
}
int main()
{
	int x;
	cout << "Enter integer" << endl;
	cin >> x;
	searchingNumber(x);

}

