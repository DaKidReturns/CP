#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;

lli fib(int a, map<int,lli> &lt){
    if(a>2){
        if(lt.find(a)==lt.end()){
            lt.insert(pair<int,lli>(a,fib(a-1,lt)+fib(a-2,lt)));
            //lt[a] = (lli)(fib(a-1,lt) + fib(a-2,lt));
            return lt[a];
        }
        else{
            return lt[a];
        }
    }
    else{
        if(a==2) return 1;
        if (a==1) return 0;
        return 0;
    }
}

int main(){
    int n;
    map<int,lli> ft;
    ft[1] = 0;
    ft[2] = 1;
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        lli b = fib(n,ft);
        cout<<b<<endl;
    }
    
}
