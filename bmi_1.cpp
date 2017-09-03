#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2); // Hversu margir stafir koma eftir ","
    double mass = 0;
    double height = 0;
    cin >> mass;
    cin >> height;

    if (((mass / height) / height) < 18.5 ) {
        cout << "Undirvigt" << endl;
    }
    else if (18.5 <= ((mass / height)/height) && ((mass/height) / height) < 30.0) {
        cout << "Flottur" << endl;
    }
    else{
        cout << "Yfirvigt" << endl;
    }


    return 0;

}
