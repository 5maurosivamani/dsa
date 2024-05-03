#include <iostream>
#include <array>

using namespace std;

void print_1_to_n(int, int);
void print_n_to_1(int n);
void backtrack_1_to_n(int n);
void backtrack_n_to_1(int i, int n);
int sum_of_n_numbers(int n);
int factorial(int n);
void print_array(int[], int);
void reverse_array(int, int array[], int);
void palindrome();
bool check_polindrome(int, string);
int fibonacci(int);

int main()
{
    // title of the file
    cout << "Recursion:" << endl;

    // variables
    int sum, res;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};

    // print_1_to_n(1, 5);
    // print_1_to_n(1, 5);
    // print_n_to_1(5);
    // backtrack_1_to_n(5);
    // backtrack_n_to_1(1, 5);
    // sum = sum_of_n_numbers(3);
    // sum = factorial(5);
    // reverse_array(0, numbers, 7 - 1);
    // palindrome();
    res = fibonacci(7);

    // cout << sum << endl;
    cout << "Fibonacci of " << 7 << " is: " << res << endl;

    // print_array(numbers, 7);

    return 0;
}

void print_1_to_n(int i, int n)
{
    // base case
    if (i > n)
        return;

    // print the i
    cout << i << endl;

    // recursive call
    print_1_to_n(i + 1, n);
}

void print_n_to_1(int n)
{
    // base case
    if (n < 1)
        return;

    // print the i
    cout << n << endl;

    // recursive call
    print_n_to_1(n - 1);
}

void backtrack_1_to_n(int n)
{
    // base case
    if (n < 1)
        return;

    // recursive call
    backtrack_1_to_n(n - 1);

    //  print the n
    cout << n << endl;
}

void backtrack_n_to_1(int i, int n)
{
    // base case
    if (i > n)
        return;

    // recursive call
    backtrack_n_to_1(i + 1, n);

    // print the i
    cout << i << endl;
}

int sum_of_n_numbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum_of_n_numbers(n - 1);
}

int factorial(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive call
    return n * factorial(n - 1);
}

void print_array(int numbers[], int size)
{
    // short form of iterator used to print the number
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
}

void reverse_array(int index, int array[], int size)
{
    // base case
    if (index >= size / 2)
        return;

    // swap the array elements
    // int temp = array[index];
    // array[index] = array[size];
    // array[size] = temp;
    swap(array[index], array[size]);

    // recursive call
    reverse_array(index + 1, array, size - 1);
}

bool check_polindrome(int index, string s)
{
    // base case
    if (index >= s.size() / 2)
        return true;

    // recursive call
    if (s[index] != s[s.size() - 1 - index])
        return false;

    return check_polindrome(index + 1, s);
}

void palindrome()
{
    // title of the file
    cout << "Palindrome:" << endl;

    string s = "malayalam";

    cout << s << (check_polindrome(0, s) ? " is " : " isn't ") << "a palindrome" << endl;
}

int fibonacci(int n)
{
    // base case
    if (n < 2)
        return n;

    // multiple recursive calls
    return fibonacci(n - 1) + fibonacci(n - 2);
}