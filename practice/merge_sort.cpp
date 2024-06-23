#include <bits/stdc++.h>
#include <vector>

using namespace std;

void playground(int *, int);
void merge_sort(int *, int, int);
void merge(int *, int, int, int);
void printArray(int *, int);

int main()
{

    int n = 7, numbers[] = {8, 7, 6, 5, 4, 3, 2};
    playground(numbers, 7);
}

void playground(int *numbers, int n)
{
    cout << "playground" << endl;

    // print numbers
    printArray(numbers, n);

    merge_sort(numbers, 0, n - 1);

    // print numbers
    printArray(numbers, n);
}

void merge_sort(int *numbers, int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    merge_sort(numbers, low, mid);
    merge_sort(numbers, mid + 1, high);
    merge(numbers, low, mid, high);
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
        if (numbers[left] <= numbers[right])
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
        numbers[i] = tmp[i - low];
    }

}

// Function to print the array.
void printArray(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}