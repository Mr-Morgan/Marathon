//Problem 1.1 "Телефонные звонки"
#include <iostream>

using namespace std;

int main()
{
    uint8_t n = 0;
    cin >> (int&)(n);

    if (n > 200 || n % 2) return EXIT_FAILURE;
    uint8_t *calls = new uint8_t[n] ();

    uint16_t c = 0;
    for (uint8_t i = 0; i < n; ++i) {
        cin >> c;
        c = (!calls[c+c-2])?c+c-2:c+c-1;
        calls[c] = i+1;
    }//for (uint8_t i = 0; i < n; ++i)

    for (uint8_t i = 0; i < n; ++i)
        cout << static_cast<uint16_t>(calls[i]) << " "
             << static_cast<uint16_t>(calls[++i]) << endl;

    delete [] calls;
    return EXIT_SUCCESS;
}//int main()
