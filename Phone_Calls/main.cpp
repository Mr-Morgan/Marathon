//Problem 1.1 "Телефонные звонки"
#include <iostream>

using namespace std;

int main()
{
    uint8_t n = 0;
    cin >> (int&)n;

    if (n > 200 || n % 2) return EXIT_FAILURE;
    uint8_t *calls = new uint8_t[n] ();

    uint16_t c = 0, counter = 0;
    for (uint8_t i = 0; i < n; ++i) {
        cin >> c;
        c = (!calls[c+c-2])?c+c-2:c+c-1;
        calls[c] = i+1;
        counter++;
    }//for (uint8_t i = 0; i < n; ++i)

    for (uint8_t i = 0; i < n; i+=2) {
        cout << (uint16_t)calls[i] << " " << (uint16_t)calls[i+1] << endl;
        counter++;
    }//for (uint8_t i = 0; i < n; i+=2)

    cout << endl << counter << endl;

    delete [] calls;
    return EXIT_SUCCESS;
}//int main()
