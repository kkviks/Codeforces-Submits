#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()
#define pb(x) push_back(x)

void pattern(int n){
    switch (n)
    {
        case 0: cout << "O-|-OOOO"; break;
        case 1: cout << "O-|O-OOO"; break;
        case 2: cout << "O-|OO-OO"; break;
        case 3: cout << "O-|OOO-O"; break;
        case 4: cout << "O-|OOOO-"; break;
        case 5: cout << "-O|-OOOO"; break;
        case 6: cout << "-O|O-OOO"; break;
        case 7: cout << "-O|OO-OO"; break;
        case 8: cout << "-O|OOO-O"; break;
        case 9: cout << "-O|OOOO-"; break;
    }
    cout << endl;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
 
    do{
        pattern(n%10);
        n = n / 10;
    }while(n);
    

    cout.flush();
    return 0;
}