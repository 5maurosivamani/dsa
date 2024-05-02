#include <iostream>

using namespace std;

void print_1_to_n(int, int);

int main()
{
    // title of the file
    cout << "Recursion:" << endl;

    print_1_to_n(1, 5);

    return 0;
}

void print_1_to_n(int i, int n)
{
    // base case
    if(i > n)
        return;

    // print the i
    cout << i << endl;

    // recursive call 
    print_1_to_n(i + 1, n);
}