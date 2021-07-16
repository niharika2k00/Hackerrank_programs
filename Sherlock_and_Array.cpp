
// https://www.hackerrank.com/challenges/sherlock-and-array/problem

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define loop1(n) for (ll i = 0; i < (n); i++)
#define loop2(n) for (ll i = 1; i <= (n); i++)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int arr [] = {5,6,8,11};
    vector<int> arr = {5, 6, 8, 11};
    int i, sum = 0, x = 0, flag = 0;

    sum = accumulate(arr.begin(), arr.end(), 0);
    cout << sum << endl;

    // LOGIC
    // x + y + x = sum;
    // 2x = sum - y;

    for (i = 0; i < arr.size(); i++)
    {
        if (2 * x == sum - arr[i])
        {
            cout << "YES";
            flag = 1;
        }
        x = x + arr[i];
    }
    if (flag = 0)
        cout << "NO";

    return 0;
}
char s[1000];
char map[10];
scanf("%s", &s);
int len = strlen(s);

for (int i = 0; i < 10; i++)
    map[i] = 0;

for (int i = 0; i < len; i++)
{
    int x = s[i] - '0';
    if (x >= 0 && x <= 9)
        map[x]++;
}

for (int i = 0; i < 10; i++)
    printf("%d ", map[i]);
return 0;

char a[1000];
int c, num[10] = {0};
scanf("%s", a);
for (int i = 0; i <= strlen(a); i++)
{
    if (isdigit(a[i]) > 0)
    {
        c = (a[i]) - '0';
        num[c] += 1;
    }
}
for (int i = 0; i < 10; i++)
{
    printf("%d ", num[i]);
}
return 0;