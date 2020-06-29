
#include <iostream>
using namespace std;
struct Cars
{
    string mark;
    string engine;
    int fuelConsumptiom;
    int maxSpeed;
};
void showData(const Cars obj[], int amount);
int main()
{
    const int amountOfCars = 5;
    Cars car[amountOfCars] = {};

    for (int i = 0; i < amountOfCars; i++)
    {
        cout << "Mark:" << endl;
        cin>>(car[i].mark);
        cout << "Engine:" << endl;
        cin>>(car[i].engine);
        cout << "fuel Consumption:" << endl;
        cin>>(car[i].fuelConsumptiom);
        cout << "max Speed:" << endl;
        cin>>(car[i].maxSpeed);
        cin.get();
    }
    showData(car, amountOfCars);
    cout << "===========================================" << endl;

    for (int i = 0; i < amountOfCars; i++) 
    {
        for (int j = 1; j <= amountOfCars; j++)
        {
            if(i==j)
            {
                j++;
            }
            if (car[i].mark == car[j].mark)
            {
                cout << "Coincidence betwen car" << " " << i << " " << "And car " << j << endl;
            }
        }
    }
    return 0;
}
void showData(const Cars obj[], int amountOfCars)
{
    for (int i = 0; i < amountOfCars; i++)
    {
        cout << obj[i].mark << endl;
        cout << obj[i].engine << endl;
        cout << obj[i].fuelConsumptiom << endl;
        cout << obj[i].maxSpeed << endl;
    }
}

