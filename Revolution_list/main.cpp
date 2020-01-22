#include <iostream>

using namespace std;

#define U8 uint8_t
#define U16 uint16_t

int main()
{
    U8 n;
    cin >> (U16&)n;
    U8 a[n], b[n];

    for (U8 i = 0; i < n; ++i)
        cin >> (U16&)a[i];

    b[0] = 1;
    for (U8 i = 1; i < n; ++i)
        b[i] = (a[b[i-1]-1])? a[b[i-1]-1] : i;

    for (int j = n-1; j >= 0; --j)
        cout << static_cast<U16>(b[j]) << " ";

    return 0;
}//int main()

/*
Входные данные:
5
5 4 0 3 2
Выходные данные: 3 4 2 5 1

Входные данные:
3
3 0 2
Выходные данные: 2 3 1
*/
