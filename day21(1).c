//Write a program to swap the first and last digit of a number.

#include <iostream>
using namespace std;

int swapFirstLastDigit(int num) {
    int temp = num;
    int lastDigit = temp % 10;

    // Find the number of digits and the first digit
    int digits = 0;
    int firstDigit;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;

    
    int power = 1;
    for (int i = 0; i < digits; i++) {
        power *= 10;
    }

    
    int middle = num % power;
    middle /= 10;

    int swapped = lastDigit * power + middle * 10 + firstDigit;
    return swapped;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = swapFirstLastDigit(number);
    cout << "After swapping first and last digits: " << result << endl;

    return 0;
}




