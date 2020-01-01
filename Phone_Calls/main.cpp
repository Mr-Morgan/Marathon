//Problem 1.1 "Телефонные звонки"
#include <iostream>

using namespace std;

int main()
{
    uint8_t n = 0;
    cin >> (int&)n;

    if (n > 200 || n % 2) return EXIT_FAILURE;

    uint8_t calls[n];
    for (uint8_t i = 0; i < n; ++i)
        cin >> (int&)calls[i];

    for (uint8_t i = 0; i < n; ++i)
        for (uint8_t j = 0; (j != i) && (j < n); ++j)
            if(calls[i] == calls[j]) {
                cout << (i+1) << " " << (j+1) << endl;
                calls[i] += 100;
                calls[j] += 200;
            }//if(calls[i] == calls[j])

    return EXIT_SUCCESS;
}//int main()
