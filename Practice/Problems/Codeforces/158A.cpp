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

int main(int argc, char **argsv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<int> parti(n,0);
    int pass = 0;
    for(int i=0;i<n;i++)
    {
        cin>>parti[i];
    }
    int val = parti[k-1];
    for(int i=0;i<n;i++)
    {
        if(parti[i]>0&&parti[i]>=val)
        {
            //cout<<parti[i]<<">="<<k<<'\n';
            pass++;
        }
    }
    cout<<pass<<"\n";
    return 0 ;
}
