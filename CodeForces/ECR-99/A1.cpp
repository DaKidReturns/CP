// Problem statement : codeforces.com/problemset/problem/158/A

#include<bits/stdc++.h>

using namespace std;

typedef unsigned int  ui;
typedef long long int lli;
typedef unsigned long long int ulli;
typedef pair<int ,int> ii;
typedef vector<ii>     vii;
typedef vector<int>    vi;

#define INF 1000000000
#define MOD 1000000007

int main(int argc, char **argsv)
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    char c;
    int T, number=0;
    cin>>T;
    c = getc(stdin);

    while(T--)
    {
        c = getc(stdin);
        while(c!='\n')
        {
            number++;
            c = getc(stdin);
//            cout<<c;
        }
        cout<<number<<'\n';
        number = 0;
    }

    return 0;
}
