#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);

    int max = arr[3];
    int a = max - arr[0];
    int b = max - arr[1];
    int c = max - arr[2];

    cout << a << " " << b << " " << c;
}