#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    double mass = 0;
    double height = 0;
    cin >> mass;
    cin >> height;
    cout << (mass / height) / height<< endl;




    return 0;

}
