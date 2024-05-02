#include <iostream>

using namespace std;

void print_1_to_n(int, int);
void print_n_to_1(int n);
void backtrack_1_to_n(int n);
void backtrack_n_to_1(int i, int n);
int sum_of_n_numbers(int n);
int factorial(int n);

int main()
{
    // title of the file
    cout << "Recursion:" << endl;

    // variables
    int sum;

    // print_1_to_n(1, 5);
    // print_1_to_n(1, 5);
    // print_n_to_1(5);
    // backtrack_1_to_n(5);
    // backtrack_n_to_1(1, 5);
    // sum = sum_of_n_numbers(3);
    sum = factorial(5);

    cout << sum << endl;

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

int sum_of_n_numbers(int n){
    if(n == 0){
        return 0;
    }
    return n + sum_of_n_numbers(n - 1);
}

int factorial(int n){
    // base case
    if(n == 0)
        return 1;
    
    // recursive call
    return n * factorial(n - 1);
}