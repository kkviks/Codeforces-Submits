#include <bits/stdc++.h>
using namespace std;

void solveType1(string s)
{

    string row = "", col = "";
    int i = 1;
    while (s[i] >= '0' and s[i] <= '9')
    {
        row += s[i];
        i++;
    }

    i++;

    while (i < s.size())
    {
        col += s[i];
        i++;
    }

    int colNum = stoi(col);
    string ans = "";

    while (colNum>0)
    {
        int power = (int)(log10(colNum) / log10(26));
        if (power >= 1)
        {
            int val = colNum / (int)pow(26, power);
            ans += (char)(val + 'A' - 1);
        }
        else
        {
            ans += (char)(colNum + 'A' - 1);
        }
        colNum %= (int)pow(26, power);
    }

    cout << ans << row << endl;
}

int findColNum(string s)
{
    int ans = 0;

    if (s.size() <= 1)
    {
        ans = s[0] - 'A' + 1;
        return ans;
    }
    ans = (s[0] - 'A' + 1) * (int)pow(26, s.size() - 1);
    ans += findColNum(s.substr(1));

    return ans;
}

void solveType2(string s)
{
    string col = "", row = "", ans = "";
    int i = 0;
    while (s[i] >= 'A' and s[i] <= 'Z')
    {
        col += s[i];
        i++;
    }

    while (i < s.size())
    {
        row += s[i];
        i++;
    }

    ans += "R" + row;
    ans += "C";
    ans += to_string(findColNum(col));

    cout << ans << endl;
}

void solve(string s)
{

    auto match = regex_match(s, regex("R[0-9]+C[0-9]+"));
    //auto match = regex_match(s, regex("[A-Z]+[0-9]+"));
    if (match)
    {
        solveType1(s);
    }
    else
    {
        solveType2(s);
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        solve(s);
    }
}