#include <iostream>
#include <time.h>

using namespace std;
int main()
{
    srand(time(NULL));                   
    int n, d, temp, error, colsNumbers = 0;
    cout << "Please enter number of cols and rows:" << endl;
    cin >> n >> d;
    int** matrix = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        matrix[i] = new int[d];          //генерування динамічного двомірного масиву 
    }
    cout << "MATRIX" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            matrix[i][j] = rand() % 100 + 1;
            cout << "|" << matrix[i][j] << "|";  //заповнення масиву рандомними числами
        }
        cout << endl;
    }
    cout << "Saddle points:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++) //алгоритм пошуку сідлових точок
        {
            temp = matrix[i][j];
            error = 0;
            for (int g = 0; g < d; g++)
            {
                if (temp < matrix[i][g]) {
                    error++;
                    break;
                }
            }
            for (int g = 0; g < n; g++)
            {
                if (temp > matrix[g][j]) {
                    error++;
                    break;
                }
            }
            if (error == 0) {
                cout << " Saddle point: " << temp << " i,j: " << j << "," << i << endl;
                colsNumbers++;
            }
            error = 0;
            for (int g = 0; g < d; g++)
            {
                if (temp > matrix[i][g]) {
                    error++;
                    break;
                }
            }
            for (int g = 0; g < n; g++)
            {
                if (temp < matrix[g][j]) {
                    error++;
                    break;
                }
            }
            if (error == 0) {
                cout << " Saddle point: " << temp << "  i,j: " << j << "," << i << endl;
                colsNumbers++;
            }
        }
    }
    if (colsNumbers == 0) {
        cout << "there are no saddle points" << endl;
    }
    if (colsNumbers == 1) {
        cout << "there is only " << colsNumbers << " saddle point" << endl;
    }
    if (colsNumbers > 1) {
        cout << "there are " << colsNumbers << " saddle points" << endl;
    }
}