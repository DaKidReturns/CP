#include <iostream>
using namespace std;
//This is wrong need correction
int main() {
        int* reps;
        int* arr;
        int t,n,a,i,flag;
        scanf("%d",&t);
        while(t-->0){
            flag=0;
            reps = (int*)calloc(7,sizeof(int));
            scanf("%d",&n);
            arr=(int*)malloc(n*sizeof(int));
        
            for(i=0;i<n;i++){
                scanf("%d%*c",&a);
                if(a>7){printf("no\n");flag=1;}
                reps[a-1]++;
                arr[i]=a;
            }
            if(flag!=1){
                for(i=0;i<6;i++){
                    if(reps[i]&1||reps[i]==0){ 
                        printf("no\n");
                        flag=1;
                        break;
                    }
                }
            }
        
            if(flag==0){
                if(n%2==0){
                    if(reps[6]%2==0){
                        if(reps[6]==0)printf("no\n");
                        else printf("yes\n");
                    }
                    
                    else{
                        printf("no\n");
                    }
                }
                
                else{
                    if(reps[6]%2!=0){
                    printf("yes\n");
                }
                
                else{
                    printf("no\n");
                    }
                }
            }   
        
            free(reps);
            free(arr);
       }
       return 0;
}
        
