#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Input two integer numbers followed by:" << endl
    << "1 for doing addition,"<< endl
    << "2 for doing subtraction," << endl
    << "3 for doing multiplication," << endl
    << "anything else for not doing any calculation." << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (c == 1) {
        cout << a << "+" << b << "=" << a + b << endl;
    }
    else if (c == 2) {
        cout << a << "-" << b << "=" << a - b << endl;
    }
    else if (c == 3) {
        cout << a << "*" << b << "=" << a * b << endl;
    }
    else {
        cout << endl;
    }
    return 0;

}
