#include <bits/stdc++.h>
#include <vector>

using namespace std;

void header(string, char);
void printArray(int[], int);

void selection_sort(int, int[]);
void bubble_sort(int, int[]);
void insertion_sort(int, int[]);
void merge_sort(int n, int[]);
void quick_sort(int[], int, int);
void swap(int[], int, int);

int main()
{
    header("Sortings", '#');

    // variables
    int n = 10,
        numbers[n] = {2, 1, 4, 54, 10, 34, 23, 29, 9, 40};
    // numbers[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // selection_sort(n, numbers);
    // bubble_sort(n, numbers);
    // insertion_sort(n, numbers);
    // merge_sort(n, numbers);
    printArray(numbers, 10);
    quick_sort(numbers, 0, n - 1);
    // print the array
    printArray(numbers, 10);
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
    cout << "]" << endl;
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

void insertion_sort(int n, int numbers[])
{
    header("Insertion Sort", '*');

    // print the unsorted array
    printArray(numbers, n);

    // insertion sort
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (numbers[j] < numbers[j - 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j - 1];
                numbers[j - 1] = temp;
            }
            else
                break;
        }
    }

    // print the sorted array
    printArray(numbers, n);
}

void merge(int *numbers, int low, int mid, int high)
{
    // variables
    vector<int> tmp;
    // poiters
    int left = low, right = mid + 1;

    // merge the two halves
    while (left <= mid && right <= high)
    {
        if (numbers[left] < numbers[right])
        {
            tmp.push_back(numbers[left]);
            left++;
        }
        else
        {
            tmp.push_back(numbers[right]);
            right++;
        }
    }

    // add the remaining elements on the left
    while (left <= mid)
    {
        tmp.push_back(numbers[left]);
        left++;
    }

    // add the remaining elements on the right
    while (right <= high)
    {
        tmp.push_back(numbers[right]);
        right++;
    }

    // re-arrange the order on the original array
    for (int i = low; i <= high; i++)
    {
        numbers[i] = tmp[i];

        cout << "i is " << i << " ";
    }

    cout << endl;
}

// merge algo
void merge_algo(int *numbers, int low, int high)
{
    // base case
    if (low == high)
        return;

    // find the mid point
    int mid = (low + high) / 2;

    merge_algo(numbers, low, mid);
    merge_algo(numbers, mid + 1, high);

    // merge the two halves
    merge(numbers, low, mid, high);
}

void merge_sort(int n, int *numbers)
{
    // header
    header("Merge Sort", '*');

    // print the unsorted array
    printArray(numbers, n);

    merge_algo(numbers, 0, n - 1);

    // print the sorted array
    printArray(numbers, n);
}

// quick sort
void quick_sort(int *numbers, int low, int high)
{
    // base case
    if (low >= high)
    {
        return;
    }

    // find the mid point of the array
    int mid = (low + high) / 2;

    // choose the pivot element as a mid
    int pivot = numbers[mid];

    // move the pivot to the end
    swap(numbers, mid, high);

    int i = 0, j = 0;
    bool pause = false;

    while (i <= high)
    {
        if (numbers[i] < pivot)
        {
            if (pause)
            {
                swap(numbers, i, j);
                pause = false;
            }
            i++;
            j++;
        }
        else
        {
            pause = true;
            i++;
        }
    }

    // swap the pivot
    swap(numbers, j, high);

    quick_sort(numbers, low, j);
    quick_sort(numbers, j + 1, high);
}

void swap(int *array, int left, int right)
{
    // swap code
    int temp = array[left];
    array[left] = array[right];
    array[right] = temp;
}