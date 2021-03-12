#include<algorithm>
#include<vector>
#include<cstdio>

using namespace std;

int main(){
    if(freopen("input/ex1.2.3_3_input.txt","r",stdin)){
        int N; //Number of digits
        vector<int> a(1<<10);int i=0;
        scanf("%d\n",&N);
        while(scanf("%d",&a[i++])==1 && --N);
        a.resize(i);
        sort(a.begin(),a.end());
        for(auto p = a.begin();p!=a.end();++p) printf("%d ",*p);
    }
    return 0;
}
