// Problem statement : codeforces.com/problemset/problem/1455/C

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    int x,y;

    cin>>T;
    while(T>0)
    {
        cin>>x>>y;
        cout<<x-1<<" "<<y<<'\n';
        T--;
    }
}
