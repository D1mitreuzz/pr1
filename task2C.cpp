#include <iostream>
using namespace std;

int main()
{
    unsigned char bitArr[8] = {};
    int k;

    while (true) {
        if (k > 0 && k <= 64) {
            break;
        } else { cout << "Wrong. Try again: " << endl; }
        cin >> k;
    }
    cout << "Enter " << k << " numbers from 0 to 63" << endl;
    int num;
    int n = 0;
    while (n != k) {
        cin >> num;
        if (num < 0 || num > 63) { cout << "Wrong. Try again: "; } else {
            bitArr[num / 8] |= (1 << num % 8);
            n++;
        }
    }

    return 0;
}