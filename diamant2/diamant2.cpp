// bez komplikace

/*#include<iostream>
using namespace std;

int main()
{
    int i, j, k, l, rows;
    cout << "Enter Diamond Number Pattern Row = ";
    cin >> rows;

    cout << "Diamond Number Pattern\n";

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (k = i; k >= 1; k--)
        {
            cout << k;
        }
        for (l = 2; l <= i; l++)
        {
            cout << l;
        }
        cout << "\n";
    }

    for (i = rows - 1; i > 0; i--)
    {
        for (j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (k = i; k >= 1; k--)
        {
            cout << k;
        }
        for (l = 2; l <= i; l++)
        {
            cout << l;
        }
        cout << "\n";
    }
    return 0;
}*/

// s komplikací
#include<stdio.h>

int main(void)
{
    int x=9;
   
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < x; j++) {
            printf(" ");
        }
        for (int k = i; k >= 1; k--) {
            printf("%d", k);
        }
        for (int k = 2; k <= i; k++) {
            printf("%d", k);
        }
        printf("\n");
        x--;
    }
    x = 0;
    for (int i = 9; i > 0; i--) {
        for (int j = 0; j < x; j++) {
            printf(" ");
        }
        for (int k = i; k >= 1; k--) {
            printf("%d", k);
        }
        for (int y = 2; y <= i; y++) {
            printf("%d", y);
        }
        printf("\n");
        x++;
    }
}