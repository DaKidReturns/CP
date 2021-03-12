// 11173, Submission: 26179569 verdict: AC
#include<iostream>

using namespace std;

int find_gc(int n, int k){
    int bitmask = 0;
    if(n==1) {//base case
        if(k==1)
            bitmask |= 1;
    }
    else{
        if(1<<n-1 <= k){ //if 2^n-1 > k then the element is in the bottom half
//            cout<<"in the one section of "<<n<<endl;
            bitmask |= (1<<n-1); //put 1 in the bitmask;
            bitmask |= find_gc(n-1,(1<<n)-k-1); //the grey code in the remaining part will be same as
        }
        else{
            bitmask |= find_gc(n-1,k);
        }
    }
    return bitmask;
}

int main(){
    int N;
    cin>>N;
    while(N--){
        int n,k;
        cin>>n>>k;
        int num = find_gc(n,k);
        cout<<num<<endl;
    }
}
