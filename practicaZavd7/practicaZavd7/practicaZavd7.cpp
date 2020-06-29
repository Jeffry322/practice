
#include <iostream>
using namespace std;
int fact(int x)
{
    if (x < 0)
        return 0;
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1); //функція яка вираховує факторіал числа
}
long C(int k, int n)
{
    return fact(n) / fact(k) / fact(n - k);  //функція для вираховування біномінальніх коефіцієнтів
}

int main()
{
    long s;
    int n, k;
    cout << "Enter n & k:" << endl;
    cin >> n >> k;
    s = C(k, n);
    cout << s << endl;
}

