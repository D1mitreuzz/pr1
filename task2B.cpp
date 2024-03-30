#include <iostream>
using namespace std;

int main()
{
    unsigned char bitArr = 0;

    cout << "Enter 64 numbers from 0 to 63" << endl;
    int n = 0;
    int num;
    
    while (n != 64) {
        cin >> num;
        if (num < 0 || num > 63) { cout << "Wrong. Try again: "; } else {
            bitArr |= (1ULL << num); // ULL - чтобы убедиться, что операция сдвига выполняется с беззнаковым длинным целым числом.
            n++;
        }
    }

    cout << "Sorted list" << endl;

    for (int i = 0; i < 64; i++) {
        if ((bitArr & (1ULL << i)) != 0) { cout << i << " "; }
    }

    return 0;
}