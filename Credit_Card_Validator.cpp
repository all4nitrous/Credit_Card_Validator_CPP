/* Credit card validator program */
/*
   ****** Luhn Algorithm ******
    1. Double every 2nd number from right to left
      If doubled number is 2 digits, split them
    2. Add all single digit numbers from step 1
    3. Add all odd numbered digits from right to left
    4. Sum results from steps 2 & 3
    5. If step 4 is divisble by 10, # is valid
*/
#include <iostream>

// Namespaces
using std::cout;
using std::endl;
using std::cin;
using std::string;

//Functions
int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main()
{
    string cardNumber;
    int result = 0;

    cout << "Enter a credit card number: " << endl;
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    return 0;
}

int getDigit(const int number)
{
    return 0;
}

int sumOddDigits(const string cardNumber)
{
    return 0;
}

int sumEvenDigits(const string cardNumber)
{
    int sum = 0; // Stores the total sum of processed even-indexed digits

    for(int i = cardNumber.size() - 2; i >= 0; i-=2) // Loop through every second digit from the right (starting at the second-to-last)
    {
        sum += getDigit((cardNumber[i] - '0') * 2); // Convert char to int, double it, and pass to getDigit to handle two-digit numbers
    }

    return sum;  // Return the total sum of processed digits
}