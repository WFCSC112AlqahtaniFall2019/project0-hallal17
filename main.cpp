#include <iostream>
using namespace std;
#include <string>

int main() {

    int num1;
    int num2;

    int num3;
    int num4;

    int sum1;
    int sum2;

    int x;
    int y;

    string temp;

    bool z;

    cout << "Type in 3 numbers for a b c in ax + by = c: ";
    cin >> num1;
    cin >> num2;
    cin >> sum1;


    cout << "Type in 3 more numbers for a b c in ax + by = c: ";
    cin >> num3;
    cin >> num4;
    cin >> sum2;


    for( x = -10; x < 11; x++){
        for( y = -10; y < 11; y++) {
            if (((num1 * x) + (num2 * y) == sum1) && ((num3 * x) + (num4 * y) == sum2)) {
                z = true;
                cout << "x value is: " << x << endl;
                cout << "y value is: " << y << endl;
            }
        }
    }
if (!z) {
    cout << "No solution";
}
    return 0;
}
