// 11173, Submission: 26179636 verdict: AC
#include<iostream>

using namespace std;

int find_gc(int k){
    return k ^ (k>>1);
}

int main(){
    int N;
    cin>>N;
    while(N--){
        int n,k;
        cin>>n>>k;
        int num = find_gc(k);
        cout<<num<<endl;
    }
}
