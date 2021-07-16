

// https://www.hackerrank.com/challenges/hackerland-radio-transmitters/problem

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
}
