#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout << " Input two integer numbers followed by:1 for doing addition,2 for doing subtraction,3 for doing multiplication,anything else for not doing any calculation." << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (c == 1) {
        cout << a + b << endl;
    }
    else if (c == 2) {
        cout << a - b << endl;
    }
    else if (c == 3) {
        cout << a * b << endl;
    }
    else {
        cout << endl;
    }
    return 0;

}
