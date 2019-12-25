// Задача 0.0 "Сумма"
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int a = 0, b = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        b += a;
    }//for (int i = 0; i < n; ++i)
    cout << b;
    return 0;
}//int main()
