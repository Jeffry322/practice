
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int size, counter = 0,counter2 = 0;
    string name;
    cin >> name;
    size = name.size();

    for (int i = 0; i < size; i++)
    {
        if (name[i] == 'a')
        {
            counter++;
        }
        else
        {
            counter = 0;        
        }
        if (counter > counter2)
            counter2 = counter;
    }

 
        cout << "Biggest line of a's is :" << counter2;

}

