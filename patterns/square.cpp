#include <iostream>
#include <algorithm>

using namespace std;

void printPattern1(int);
void printPattern2(int);
void printPattern3(int);
void printPattern4(int);
void printPattern5(int);
void printPattern6(int);
void printPattern7(int);
void printPattern8(int);
void printPattern9(int);
void printPattern10(int);
void printPattern11(int);
void printPattern12(int);
void printPattern13(int);
void printPattern14(int);
void printPattern15(int);
void printPattern16(int);
void printPattern17(int);
void printPattern18(int);
void printPattern19(int);
void printPattern20(int);
void printPattern21(int);
void printPattern22(int);

int main()
{
    // printing the 4 row and 4 columns patterns
    // ****
    // ****
    // ****
    // ****

    int t;

    cout << "Enter the Test Times: " << endl;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n;

        cout << "Enter pattern to print: " << endl;
        cin >> n;
        printPattern1(n);
        cout << endl;
        printPattern2(n);
        cout << endl;
        printPattern3(n);
        cout << endl;
        printPattern4(n);
        cout << endl;
        printPattern5(n);
        cout << endl;
        printPattern6(n);
        cout << endl;
        printPattern7(n);
        cout << endl;
        printPattern8(n);
        cout << endl;
        printPattern9(n);
        cout << endl;
        printPattern10(n);
        cout << endl;
        printPattern11(n);
        cout << endl;
        printPattern12(n);
        cout << endl;
        printPattern13(n);
        cout << endl;
        printPattern14(n);
        cout << endl;
        printPattern15(n);
        cout << endl;
        printPattern16(n);
        cout << endl;
        printPattern17(n);
        cout << endl;
        printPattern18(n);
        cout << endl;
        printPattern19(n);
        cout << endl;
        printPattern20(n);
        cout << endl;
        printPattern21(n);
        cout << endl;
        printPattern22(n);
    }
}

void printPattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }
}

void printPattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }
}

void printPattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
}

void printPattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << "  ";
        }
        cout << endl;
    }
}

void printPattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }
}

void printPattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
}

void printPattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }

        for (int k = 0; k < (i * 2) + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < (n * 2) - 1 - (i * 2); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern9(int n)
{
    // top
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }

        // Star
        for (int j = 0; j < (i * 2) + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // bottom
    for (int i = 0; i < n; i++)
    {
        // Spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void printPattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;

        if (i > n)
            stars = 2 * n - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void printPattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int startsWith = (i % 2 == 0) ? 0 : 1;
        for (int j = 1; j <= i; j++)
        {

            cout << startsWith;

            startsWith = 1 - startsWith;
        }

        cout << endl;
    }
}

void printPattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // print numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // print space
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }

        // print numbers
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}

void printPattern13(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << "  ";
            count++;
        }
        cout << endl;
    }
}

void printPattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j <= 'A' + i - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void printPattern15(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + (n - i); j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

void printPattern16(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}

void printPattern17(int n)
{
    // My Version

    // for (int i = 0; i < n; i++)
    // {
    //     // Spaces
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }

    //     int lts = 2 * i + 1;

    //     // Letters
    //     for (int j = 0; j < lts; j++)
    //     {
    //         char ch = 'A' + j;

    //         if (j > i)
    //         {
    //             ch = 'A' + (lts - j) - 1;
    //         }
    //         cout << ch;
    //     }

    //     cout << endl;
    // }

    // Take you forward
    for (int i = 0; i < n; i++)
    {
        // Spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        char ch = 'A';

        int breakpoint = (2 * i + 1) / 2;

        // Letters
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j < breakpoint)
                ch++;
            else
                ch--;
        }

        cout << endl;
    }
}

void printPattern18(int n)
{
    // My Version
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n - (i+1); j < n; j++)
    //     {
    //         char ch = 'A' + j;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch;
        }

        cout << endl;
    }
}

void printPattern19(int n)
{
    // for (int i = 0; i < n * 2; i++)
    // {

    //     if (i < n)
    //     {
    //         // Stars
    //         for (int j = 0; j < n - i; j++)
    //         {
    //             cout << "* ";
    //         }

    //         // Spaces
    //         for (int j = 0; j < i * 2; j++)
    //         {
    //             cout << "  ";
    //         }

    //         // Stars
    //         for (int j = 0; j < n - i; j++)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     else
    //     {
    //         // Stars
    //         for (int j = 0; j < i % n + 1; j++)
    //         {
    //             cout << "* ";
    //         }

    //         // Spaces
    //         for (int j = 0; j < n * 2 - (i % n + 1) * 2; j++)
    //         {
    //             cout << "  ";
    //         }

    //         // Stars
    //         for (int j = 0; j < i % n + 1; j++)
    //         {
    //             cout << "* ";
    //         }
    //     }

    //     cout << endl;
    // }

    int stars, spaces;
    for (int i = 0; i < n * 2; i++)
    {
        if (i < n)
        {
            stars = n - i;
            spaces = i * 2;
        }
        else
        {
            stars = i - n + 1;
            spaces = n * 2 - ((i - n + 1) * 2);
        }

        // stars
        for (int j = 0; j < stars; j++)
        {
            cout << "* ";
        }

        // spaces
        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }
        // stars
        for (int j = 0; j < stars; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void printPattern20(int n)
{
    int stars = 1, spaces = 2 * (n - 1);
    for (int i = 0; i < (n * 2) - 1; i++)
    {
        // stars
        for (int j = 0; j < stars; j++)
        {
            cout << j << " ";
        }

        // spaces
        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }

        // stars
        for (int j = 0; j < stars; j++)
        {
            cout << j << " ";
        }

        if (i < n - 1)
        {
            spaces -= 2;
            stars++;
        }
        else
        {
            spaces += 2;
            stars--;
        }

        cout << endl;
    }
}

void printPattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
}

void printPattern22(int n)
{
    int top, left, bottom, right, output;

    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < n * 2 - 1; j++)
        {
            top = i;
            bottom = n * 2 - 2 - i;
            left = j;
            right = n * 2 - 2 - j;

            output = n - min(min(top, bottom), min(left, right));

            cout << output;
        }

        cout << endl;
    }
}