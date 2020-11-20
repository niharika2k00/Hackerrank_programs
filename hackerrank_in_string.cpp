
// LINKS : https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem?h_r=next-challenge&h_v=zen

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, hacker = "hackerrank";
    int ele = 0, j;
    cin >> s;

// jst checking whether a single element is present or not..
    for (j = 0; j < s.length(); j++)
    {
        if (hacker[ele] == s[j])
            ele++;
    }
    if (ele == hacker.length())
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
}



//  original code in ---- C

/* int  ele = 0 ,j ;
    char  hacker[] = "hackerrank";  
   
        for ( j = 0; j < strlen(s); j++)
        {
            if( hacker[ele] == s[j])
               ele ++ ;                         
        }
        if (ele == strlen(hacker))        
             return "YES";             
                
    return "NO";   */


