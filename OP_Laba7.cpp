#include <iostream>
using namespace std;
int main()
{
    float Y, sum, x, Z, dob, y;
    cout << "Input x\nx = ";
    cin >> x;
    sum = 0;
    for (int k = 1; k <= 10; k++) {
        sum += log(k);}
    Y = sum + pow(x, 5);
    cout << "Y = " << Y;

    cout << "\n\nInput y\ny = ";
    cin >> y;
    dob = 1;
    for (int n = 1; n <= 10; n++) {
        dob *= n;}
    Z = (pow(y, 3) + dob + 2) / (pow(y, 2) + 5);
    cout << "Z = " << Z;
}