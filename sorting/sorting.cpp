#include <bits/stdc++.h>

using namespace std;

void header(string, char);
void printArray(int[], int);

void selection_sort(int, int[]);
void bubble_sort(int, int[]);

int main()
{
    header("Sortings", '#');

    // variables
    int n = 10,
        numbers[n] = {2, 1, 4, 54, 10, 34, 23, 29, 9, 40};
    // numbers[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // selection_sort(n, numbers);
    bubble_sort(n, numbers);
}

void header(string text, char patten)
{
    // variables
    int text_size = text.size();
    int rowSpace = 1, columnSpace = 5;
    int row = 3 + rowSpace * 2;
    int column = text_size + 2 + columnSpace * 2;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == column - 1)
                cout << patten << " ";
            else if (i == row / 2 && j > columnSpace && j <= text_size + columnSpace)
            {

                cout << text[j - (columnSpace + 1)] << " ";
            }
            else
                cout << "  ";
        }

        cout << endl;
    }
}

void printArray(int array[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
        cout << array[i] << ((i != size - 1) ? ", " : "");
    cout << "]";
}

void selection_sort(int n, int numbers[])
{
    header("Selection Sort", '-');

    // selection sort
    for (int i = 0; i < n - 2; i++)
    {
        // find minimum element index
        int min = i;

        for (int j = i; j < n; j++)
        {
            if (numbers[j] < numbers[min])
                min = j;
        }

        // swap the min element and i th element
        int temp = numbers[i];
        numbers[i] = numbers[min];
        numbers[min] = temp;
    }

    // print the sorted array
    printArray(numbers, n);
}

void bubble_sort(int n, int numbers[])
{
    header("Bubble Sort", '*');

    // print the sorted array
    printArray(numbers, n);

    for (int i = 0; i < n - 1; i++)
    {
        bool didSwap = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;

                didSwap = true;
            }
        }

        if (!didSwap)
            break;
    }

    cout << endl;

    // print the sorted array
    printArray(numbers, n);
}
