
#include <iostream>
using namespace std;
int main()
{
	int counter = 0;
	int m;

	cout << "Enter rank of matrix:" << endl;
	cin >> m;

	int** matrix = new int* [m];
	for (int i = 0; i < m; ++i)
		matrix[i] = new int[m];
	                                //Генерую два динамічних двомірних масиви з рангом m
	int** matrix2 = new int* [m];
	for (int i = 0; i < m; ++i)
		matrix2[i] = new int[m];

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)  //Заповнюю матрицю рандомними числами
		{
			matrix[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix2[i][j] = matrix[j][i];   //транспонуэмо матрицю
		}
	}

	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
	}

	cout << endl;
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < m; j++)
		{
			cout<< matrix2[i][j]<<" ";
		}
	}

	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] == matrix2[i][j]) //якщо звичайна матрция дорівнює транспонованій 
				counter++;                     //то вона є симетричною
		}                                      //кожного разу коли значення матриці 1 і матриці 2 збігаються
	}                                          //то до лічильника counter добовляється одиниця
	if (counter == (m * 2))                          //якщо лічильник дорівнює кількості елемнтів матриці то вона симетрична
		cout << "Your matrix is simmetrical" << endl;
	else
		cout << "Your matrix isn't simmetrical" << endl;
}

