#include <iostream>
using namespace std;

int main()
{
    unsigned char bitArr = 0;

    cout << "Введите 8 чисел от 0 до 7 в любом порядке" << endl;
    int n = 0;
    int num;
    
    while (n != 8) {
        cin >> num;
        if (num < 0 || num > 7) { cout << "Неправильно. Попробуйте ещё раз: "; } else {
            bitArr |= (1 << num);
            n++;
        }
    }

    cout << "Отсортированный список:" << endl;

    for (int i = 0; i < 8; i++) {
        if ((bitArr & (1 << i)) != 0) { cout << i << " "; }
    }

    return 0;
}