// Hacky but recived AC: 26704857
// Check out 10038_acc.cpp for a better solution
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v;
    vector<int> diff;

    int n;
    while(scanf("%d",&n)==1){
        int i = n;
        while(i--){
            int a;
            scanf("%d",&a);
            v.push_back(a);
        }
        for(i=0;i<n-1;i++){
            int a = v[i] - v[i+1];
            a = a>0 ? a: -a;
            diff.push_back(a);
        }
        sort(diff.begin(),diff.end());
        int j = 0;
        for(auto p=diff.begin();p!=diff.end();++p){
            if ((*p)>j)
                if ((*p)==j+1 || (*p)==j){
                    j++;
                }
        }
        if(j==n-1){
            cout<<"Jolly\n";
        }else{
            cout<<"Not jolly\n";
        }
        v.clear();
        diff.clear();

    }
    return 0;
}
