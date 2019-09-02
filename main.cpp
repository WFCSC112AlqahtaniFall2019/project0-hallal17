#include <iostream>
using namespace std;
#include <cmath>;
#include <string>;


int main() {

    int num1;
    int num2;

    int num3;
    int num4;

    int sum1;
    int sum2;

    int x;
    int y;

    cin >> num1;
    cin >> num2;
    cin >> sum1;

    cin >> num3;
    cin >> num4;
    cin >> sum2;


    for( x = -10, x < 11; x++){
        for( y = -10; y < 11; y++){
            if(((num1 * x) + (num2 * y) == sum1) && ((num3 * x) + (num4 * y) == sum2)){
                cout << x << endl;
                cout << y << endl;
            }
        }
    }
cout << "No solution";

    return 0;
}
