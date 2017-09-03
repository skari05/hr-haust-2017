#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    cin >> a;
    if (a < 0) {
        cout << "Rangt inntak" << endl;
    }
    else if ( a >= 24) {
        cout << "Rangt inntak" << endl;
    }
    else if (a < 18) {
        cout << "Daginn!" << endl;
    }
    else if (a >= 18){
        cout << "Bleller!" << endl;
    }





    return 0;

}
