
#include <iostream>
using namespace std;
struct Cars
{
    string mark;
    string engine;
    int fuelConsumptiom;      //оголошуємо структуру Cars
    int maxSpeed;
};
void showData(const Cars obj[], int amount); //Створюємо прототип функції яка буде виводити масив структур
int main()
{
    const int amountOfCars = 5;
    Cars car[amountOfCars] = {}; //оголуємо масив об`єктів структури Cars

    for (int i = 0; i < amountOfCars; i++)
    {
        cout << "Mark:" << endl;
        cin>>(car[i].mark);
        cout << "Engine:" << endl;
        cin>>(car[i].engine);
        cout << "fuel Consumption:" << endl;          //заповнюємо масив структур 
        cin>>(car[i].fuelConsumptiom);
        cout << "max Speed:" << endl;
        cin>>(car[i].maxSpeed);
        cin.get();
    }
    showData(car, amountOfCars);                                      //викликаємо функцію яка буде виводити данні про всі об`єкти структури
    cout << "===========================================" << endl;

    for (int i = 0; i < amountOfCars; i++)                           
    {
        for (int j = 1; j <= amountOfCars; j++)
        {
            if(i==j)
            {
                j++;
            }
            if (car[i].mark == car[j].mark)    //порівнюємо члени структури                                                    
            {
                cout << "Coincidence betwen car" << " " << i << " " << "And car " << j << endl; //та у випадку співпадання виводимо які члени співпадають
            }
        }
    }
    return 0;
}
void showData(const Cars obj[], int amountOfCars)        //опис функції яка виводить данні про об`єкти структуи
{
    for (int i = 0; i < amountOfCars; i++)         
    {
        cout << obj[i].mark << endl;
        cout << obj[i].engine << endl;
        cout << obj[i].fuelConsumptiom << endl;
        cout << obj[i].maxSpeed << endl;
    }
}

