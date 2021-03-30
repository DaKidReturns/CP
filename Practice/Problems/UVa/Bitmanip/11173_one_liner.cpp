// 11173, Submission: 26179636 verdict: AC
#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    while(N--){
        int n,k;
        cin>>n>>k;
        cout<<k ^(k>>1)<<endl;
    }
}
