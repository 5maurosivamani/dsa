#include <bits/stdc++.h>

using namespace std;

void header(string);
void left_rotation(int[], int);

int main()
{
    int array[5] = {0, 1, 2, 3, 4};
    left_rotation(array, 5);
    return 0;
}

// header function
void header(string name)
{
    cout << endl
         << "*** " << name << " ***" << endl
         << endl;
}

// print array
void printArray(int array[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
        cout << array[i] << ((i != size - 1) ? ", " : "");
    cout << "]" << endl;
}

// left side rotation one element
void left_rotation(int *array, int size)
{
    header("Left Side Rotation:");
    printArray(array, size);

    // left side rotation
    int temp = array[0];

    for (int i = 1; i < size; i++)
    {
        array[i - 1] = array[i];
    }

    array[size - 1] = temp;

    // after rotation
    printArray(array, size);
}