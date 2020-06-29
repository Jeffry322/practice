
#include <iostream>
using namespace std;

double triangleArea(double x)
{
   
    return (pow(x,2)* sqrt(3)) / 4; //Функція яка рахує площу правильного трикутника зі стороною а
}
double hexagonArea(double x)
{
    
    return x * 6;                   //Функція яка рахує площу шестикутника за площею трикутника
}

int main()
{
    double  hexagon_Area, triangle_Area;
    double a;
    cout << "Enter side a:" << endl;
    cin >> a;
    triangle_Area = triangleArea(a);
    cout << hexagonArea(triangle_Area);
}

