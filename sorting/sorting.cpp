#include <bits/stdc++.h>

using namespace std;

void header(string, char);

void selection_sort(int, int[]);

int main()
{
    header("Sortings", '#');

    // variables
    int n = 10,
        numbers[n] = {2, 1, 4, 54, 10, 34, 23, 29, 9, 40};

    selection_sort(n, numbers);
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
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
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
                cout << "* ";
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