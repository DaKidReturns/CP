#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;

ulli findN(ulli c){
    int d = (int) (log(c)/log(2))+1;
    ulli ul = (ulli) pow(2,d);
    ulli greatest = 0;
    for(ulli i=1;i<ul/2;i++){
        ulli j = (i^c);
        if(i<ul && j<ul && i*j>greatest){
            greatest = i*j;
        }
    }
    return greatest;
}

int main(){
    unsigned long int n;
    unordered_map<ulli,ulli> m;
    cin>>n;
    while(n--){
        ulli c;
        cin>>c;
        if(m[c]==0){
            ulli v1= findN(c);
            m[c] = v1;
            cout<<v1<<endl;
        }
        else{
            cout<<m[c]<<endl;
        }
    }
}
