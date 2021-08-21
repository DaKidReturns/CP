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
        diff.insert(diff.begin(), 3000, 0);
        for(i=0;i<n-1;i++){
            int a = v[i] - v[i+1];
            a = a>0 ? a: -a;
            diff[a] = 1;
        }

        int j;
        for(j=1;j<n;j++){
            if (diff[j] == 0){
                break;
            }
        }

        if(j==n){
            cout<<"Jolly\n";
        }else{
            cout<<"Not jolly\n";
        }
        v.clear();
        diff.clear();

    }
    return 0;
}
