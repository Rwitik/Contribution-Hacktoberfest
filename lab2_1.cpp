#include <bits/stdc++.h>
using namespace std;
void reverse(int n)
{
    if (n < 10)
    {
        cout << n;
        return;
    }
    else
    {
        cout << n % 10;
        reverse(n / 10);
    }
}

int main()
{
    int n;
    cout << "Enter The number: ";
    cin >> n;
    cout << "The revrse number is:";
    if (n >= 0)
        reverse(n);
    else
    {
        int x = n * (-1);
        cout << "-";
        reverse(x);
    }

    return 0;
}