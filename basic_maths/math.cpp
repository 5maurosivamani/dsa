#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void extractDigits(int);
void countDigits(int);
void reverseNum(int);
void palindrome();
void armstrongNumber();
void printDivisor();
void primeNumber();
void highestCommonDivisor();

int main()
{
    cout << "Welcome to Basic Maths for DSA" << endl;

    // extractDigits(1386);
    // countDigits(138655);
    // reverseNum(138655);
    // palindrome();
    // armstrongNumber();
    // printDivisor();
    // primeNumber();
    highestCommonDivisor();
}

// Extract digits from a number
void extractDigits(int number)
{
    cout << "Extracting digits: " << number << endl;

    while (number > 0)
    {
        cout << number % 10 << endl;
        number = number / 10;
    }
}

// Count digits from a number
void countDigits(int number)
{
    cout << "Counting digits: " << number << endl;

    // int count = 0;
    // while (number > 0)
    // {
    //     count++;
    //     number = number / 10;
    // }
    int count = (int)(log10(number) + 1);

    cout << count << endl;
}

void reverseNum(int number)
{
    cout << "Reverse number: " << number << endl;

    int reverse = 0;
    while (number > 0)
    {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }
    cout << reverse << endl;
}

void palindrome()
{
    // title of the function
    cout << "Palindrome: " << endl;

    // variable declaration
    int number, dupNumber;
    int revNumber = 0;

    // Get the number from user
    cout << "Enter a number: " << endl;
    cin >> number;

    // take copy of the number
    dupNumber = number;

    // reverse the number
    while (number > 0)
    {
        revNumber = revNumber * 10 + number % 10;
        number = number / 10;
    }

    // check if the number is palindrome or not
    if (dupNumber == revNumber)
    {
        cout << dupNumber << " is a palindrome" << endl;
    }
    else
    {
        cout << dupNumber << " is not a palindrome" << endl;
    }
}

void armstrongNumber()
{
    // title of the function
    cout << "Armstrong Number: " << endl;

    // variable declaration
    int number, dupNumber, count;
    int sum = 0;

    // Get the number from user
    cout << "Enter a number: " << endl;
    cin >> number;

    // take copy of the number
    dupNumber = number;

    // found the digits in number
    count = (int)(log10(number) + 1);

    // reverse the number
    while (number > 0)
    {
        sum = sum + pow(number % 10, count);
        number = number / 10;
    }

    // check if the number is armstrong or not
    if (dupNumber == sum)
    {
        cout << dupNumber << " is an Armstrong Number" << endl;
    }
    else
    {
        cout << dupNumber << " is not an Armstrong Number" << endl;
    }
}

void printDivisor()
{
    // title of the function
    cout << "Divisor: " << endl;

    // variable declaration
    int number;
    vector<int> ls;

    // Get the number from user
    cout << "Enter a number: " << endl;
    cin >> number;

    // print the divisors
    for (int i = 1; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            ls.push_back(i);
            if (number / i != i)
                ls.push_back(number / i);
        }
    }

    // sort the list ls
    sort(ls.begin(), ls.end());

    // short form of iterator use to print the list element
    for (auto i : ls)
    {
        cout << i << " ";
    }
    cout << endl;
}

void primeNumber()
{
    // title of the function
    cout << "Prime Number: " << endl;

    // variable declaration
    int number, counter = 0;

    // Get the number from user
    cout << "Enter a number: " << endl;
    cin >> number;

    // push all divisor into the ls
    for (int i = 1; i * i <= number; i++)
    {
        if (number % i == 0)
        {

            if (number / i != i)
                counter++;

            counter++;
        }
    }

    // print the ls count
    cout << "counter value is: " << counter << endl;

    // check if the number is prime or not
    if (counter == 2)
    {
        cout << number << " is a prime number" << endl;
    }
    else
    {
        cout << number << " is not a prime number" << endl;
    }
}

void highestCommonDivisor()
{
    // title of the function
    cout << "Highest Common Divisor: " << endl;

    // variable declaration
    int number1, number2, max_, min_;

    // Get the number1 & number2 from user
    cout << "Enter a number 1: " << endl;
    cin >> number1;

    cout << "Enter a number 2: " << endl;
    cin >> number2;

    // using equilateral algorithm to find Highest common divisor
    do
    {
        max_ = max(number1, number2);
        min_ = min(number2, number1);

        number1 = max_;
        number2 = min_;

        number1 = number1 % number2;
    } while (number1 != 0);

        //  print the output
        cout
        << "Highest common divisor is: " << number2 << endl;
}