#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, remainder;

    cout << "adad morede nazar ra entekhab konid : ";
    cin >> n;

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "natije revers sazi adad  = " << reversedNumber;

    return 0;
}