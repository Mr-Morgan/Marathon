//Problem 1.2 "Отели"
#include <iostream>

using namespace std;

int main()
{
    uint8_t n = 0;
    cin >> (int&)n;
    uint8_t h[n], identical = n/5;

    uint8_t min = 0, max = 0;           //index
    for (uint8_t i = 0; i < n; ++i) {
        cin >> (int&)h[i];
        if (h[i] < h[min]) min = i;
        if (h[i] > h[max]) max = i;
    }//for (uint8_t i = 0; i < n; ++i)

    uint8_t star = 0, k = 0;
    for (uint8_t i = 0; i < n; ++i) {
        if (!k) star++;
        (k == identical-1)? k = 0 : k++;
        h[min] = star;
        min = max;
        for (uint8_t i = 0; i < n; ++i)
            if (h[i] < h[min] && h[i] > star) min = i;
    }//for (uint8_t i = 0; i < n; ++i)

    for (uint8_t i = 0; i < n; ++i)
        cout << static_cast<uint16_t>(h[i]) << ' ';

    return 0;
}//int main()

/*
TEST DATA
5
3 11 5 2 90
2 4 3 1 5

10
3 11 5 2 90 60 35 89 42 15
1 2 2 1 5 4 3 5 4 3

15
3 11 5 2 90 60 35 89 42 15 8 23 56 12 95
1 2 1 1 5 4 3 5 4 3 2 3 4 2 5
*/
