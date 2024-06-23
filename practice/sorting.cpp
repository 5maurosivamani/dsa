#include <bits/stdc++.h>
#include <vector>

using namespace std;

void selection_sort(vector<int>);
void bubble_sort(vector<int>);
void insertion_sort(vector<int>);
void print_sorted_array(vector<int>);

int main()
{
    // create a vector named numbers
    // vector<int> numbers = {12, 34, 10, 6, 3, 16};
    vector<int> numbers = {1, 2, 3, 4, 5, 6};

    cout << "Hello world!" << endl;

    insertion_sort(numbers);

    return 0;
}

// find the minimum and place the correct position
void selection_sort(vector<int> numbers)
{
    int tmp, minimum, n = numbers.size();

    for (int i = 0; i < n - 1; i++)
    {
        minimum = i;
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[j] < numbers[minimum])
            {
                minimum = j;
            }
        }
        // swap the minimum value
        tmp = numbers[i];
        numbers[i] = numbers[minimum];
        numbers[minimum] = tmp;
    }

    // print the sorted array
    print_sorted_array(numbers);
}

// check left side value bigger than right side swap! swap!! swap!!! (adjacent swap)
void bubble_sort(vector<int> numbers)
{
    int tmp, n = numbers.size();

    for (int i = 0; i < n - 1; i++)
    {
        int didSwap = 0;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                tmp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tmp;

                didSwap = 1;
            }
        }

        // check if the did swap is equals to true
        if (didSwap == 0)
        {
            break;
        }

        cout << "code runs" << endl;
    }

    // print the sorted array
    print_sorted_array(numbers);
}

// pick the element order wise and placed at the correct position
void insertion_sort(vector<int> numbers)
{
    int tmp, n = numbers.size();

    cout << "Total number:" << n << endl;

    // using for loop iteration
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         if (numbers[j - 1] > numbers[j])
    //         {
    //             tmp = numbers[j - 1];
    //             numbers[j - 1] = numbers[j];
    //             numbers[j] = tmp;
    //         }
    //     }
    // }

    // using while loop iteration
    int i = 1;
    while (i < n)
    {
        int j = i;

        while (j > 0 && numbers[j - 1] > numbers[j])
        {
            tmp = numbers[j - 1];
            numbers[j - 1] = numbers[j];
            numbers[j] = tmp;

            j--;
            cout << "inner while loop" << endl;
        }
        cout << "outer while loop" << endl;
        i++;
    }

    // print the sorted array
    print_sorted_array(numbers);
}

void print_sorted_array(vector<int> numbers)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}