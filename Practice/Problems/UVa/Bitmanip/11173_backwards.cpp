#include<iostream>

using namespace std;

int find_pos( int k){
    int n=0;
    for(;k>0;k=k>>1){
        n ^=k;
    }
    return n;
}

int main(){
    int N;
    cin>>N;
    while(N--){
        int k;
        cin>>k;
        int num = find_pos(k);
        cout<<num<<endl;
    }
}
