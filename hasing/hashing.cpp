#include <bits/stdc++.h>

using namespace std;

// function declaration
void hash_map();
void printArray(int[], int);
void hash_map_string();
void hash_map_string_2();
void map_numbers();
void map_string();

int main()
{
    cout << "Hashing..." << endl;

    // hash_map();
    // hash_map_string();
    // hash_map_string_2();
    // map_numbers();
    map_string();
}

void hash_map()
{
    // title
    cout << "Hash Map using array" << endl;

    // variables
    int n, hashMap[12] = {0};

    // get array values from user
    cout << "Enter the array size:" << endl;
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    // precomputing
    for (int i = 0; i < n; i++)
        hashMap[numbers[i]]++;

    // query
    cout << 2 << " is " << hashMap[2] << "times" << endl;
    cout << 5 << " is " << hashMap[5] << "times" << endl;
    cout << 8 << " is " << hashMap[8] << "times" << endl;

    printArray(numbers, n);
}

void printArray(int array[], int size)
{
    cout << "The array elements are:" << endl;

    cout << "[";
    for (int i = 0; i < size; i++)
        cout << array[i] << ((i != size - 1) ? ", " : "");
    cout << "]";
}

// method 1
void hash_map_string()
{
    // title
    cout << "Hash Map for strings using array method 1" << endl;

    // variables
    int hashMap[26] = {0};
    string str = "say hellow world in c++"; // all small chars

    // precomputing
    for (char it : str)
        hashMap[it - 'a']++;

    // query
    cout << 'o' << " is " << hashMap['o' - 'a'] << "times" << endl;
    cout << 'l' << " is " << hashMap['l' - 'a'] << "times" << endl;
    cout << 'h' << " is " << hashMap['h' - 'a'] << "times" << endl;
    cout << 'a' << " is " << hashMap['a' - 'a'] << "times" << endl;
}

// method 2
void hash_map_string_2()
{
    // title
    cout << "Hash Map for strings using array" << endl;

    // variables
    int hashMap[256] = {0};
    string str = "hellow world";

    // precomputing
    for (char it : str)
        hashMap[it]++;

    // query
    cout << 'o' << " is " << hashMap['o'] << "times" << endl;
    cout << 'l' << " is " << hashMap['l'] << "times" << endl;
    cout << 'h' << " is " << hashMap['h'] << "times" << endl;
}

// hashmap
void map_numbers()
{
    // title of the program
    cout << "Hash Map for numbers using map" << endl;

    // variables
    unordered_map<int, int> hashMap;
    int numbers[] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 2, 3, 4};

    // iterate over the numbers
    for (int i : numbers)
        hashMap[i]++;

    // iterate the hash map
    for (auto it : hashMap)
        cout << it.first << " is " << it.second << "times" << endl;
}

// hash map for string using map
void map_string()
{
    // title of the program
    cout << "Hash Map for string using map" << endl;

    // variables
    string s = "Hello guys, we are happy today!";
    unordered_map<char, int> mpp;

    // iterate over the string
    for (char it : s)
        mpp[it]++;

    // iterate the hash map
    // for (auto it : mpp)
    //     cout << it.first << " is " << it.second << "times" << endl;

    // query the hash map
    cout << "space is " << mpp[' '] << " times" << endl;
    cout << "p is " << mpp['h'] << " times" << endl;
}