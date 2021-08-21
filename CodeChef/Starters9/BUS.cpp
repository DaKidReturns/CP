#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        int n,m,q;
        int flag =0;
        int np = 0; // Num of passenger
        scanf("%d %d %d\n",&n,&m,&q);
        int queue[n];
        for(int j=0;j<n;j++) queue[j] = 0;

        while(q--){
            int i;
            char c;
            scanf("%c %d\n",&c,&i);
            switch (c){
                case '+': np+=1;
                          if(np > m) flag = 1;
                          queue[i-1] += 1; 
                          if(queue[i-1] > 1) flag =1;
                          break;
                case '-': np-=1;
                          if(np < 0) flag = 1;
                          queue[i-1] -= 1; 
                          if(queue[i-1] < 0) flag =1;
                          break;
            }

        }
            if(flag){
                printf("Inconsistent\n");
            }else{
                printf("Consistent\n");
            }
    }
    return 0;
}
