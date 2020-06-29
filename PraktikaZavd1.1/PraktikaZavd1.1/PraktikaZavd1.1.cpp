#include <iostream>
using namespace std;

int main() {
	cout << "Enter amount of numbers" << endl;
	int lenght;
	int x = 0,b = 1;
	cin >>lenght;
	int *a = new int[lenght]; //ствоорюємо та заповнюємо динамічний масив
	for (int i = 0; i < lenght; i++) 
	{
		cout << "Enter number"<<" "<< i << endl;
		cin >> a[i];
		cout << a[i] << endl;
	}
	for (int i = 0; i < lenght; i++)
	{
		if (a[b] > a[i])          //якщо елемент  a[b] (який завжди більший елемента a[i] на одиницю) більший за а[i], то до лічильник х додаємо +1
		{                         
			x++;
		}
		b++;
	}
	x++;
	if (lenght == x)                                     //якщо кількість разів скільки попередній елемент був менший наступний співпадає з кількістю
		cout << "Your List Is Ascending";            //елементів в масиві, то послідновніть є зростаючею
	else
		cout << "Your List isn't Ascending" << endl;
}
