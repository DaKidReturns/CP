// Accepted : 26706685
#include<cstdio>
#include<vector>

using namespace std;

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n,p,i,j;
        int lost = 0;
        scanf("%d\n%d",&n,&p);
        vector<int> days;
        days.insert(days.begin(),n+1,0);
        vector<int> h;
        for(i=0;i<p;i++){
            int t;
            scanf("%d",&t);
            for(j = t;j<=n ;j+=t){
                if(j%7 == 0 || j%7 == 6) continue;
                days[j]+=1;
            }
        }
        for(i=1;i<=n;i++)
            if(days[i]) lost++;
        printf("%d\n",lost);
        days.clear();
        h.clear();
    }
}
