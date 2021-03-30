#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;

ulli findN(ulli c){
    int d = (int) (log(c)/log(2))+1;
    ulli ul = (ulli) pow(2,d);
    ulli greatest = 0;
    ulli greatest_i=0;
    ulli greatest_j=0;
    for(ulli i=0;i<ul;i++){
        ulli j = (i^c);
        if(i<ul && j<ul && i*j>greatest){
            greatest = i*j;
            greatest_i = i;
            greatest_j = j;
        }
    }
    cout<<"Value of d: "<<d<<" Value of the 2^d: "<<ul<<endl;
    cout<<"The XOR Result: "<<greatest_i<<" XOR "<<greatest_j<<" = "<<(greatest_i^greatest_j)<<endl;
    cout<<"The Multiplication result "<<greatest_i<<" * "<<greatest_j<<" = "<<greatest<<endl;

    return greatest;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        ulli c;
        cin>>c;
        cout<<"The value entered is: "<<c<<endl;
        ulli v1= findN(c);
        cout<<v1<<endl;
        cout<<endl;
    }
}
