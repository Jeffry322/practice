

#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int lfNumber;
    int b = 0;
    int d = 11;
    int x = rand()%100;
    int arr[25];
    int temp;
    for (int i = 0; i < 25; i++)
    {
        arr[i] = rand() % 100;
    }


    for (int i = 0; i < 24; i++)
    {
        for (int j = 1; j < 23; j++)
        {
            temp = (arr[i] + arr[j]) / 2; // Опис алгоритму пошуку числа, найближчого до  X
            if (abs(x - temp) < d)        //Чим менша різниця d між Х та змінною temp 
            {                             //Тим змінна temp блыжча до X
                d = abs(x - temp);
                lfNumber = temp;          
            }
            if (d == 0)
                break;
        }
    }
    cout << "Заданое число:" << endl;
    cout << x << endl;
    cout << "Искаемое число:" << endl;
    cout << lfNumber << endl;
}

