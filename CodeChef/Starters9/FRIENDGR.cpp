#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main(){

    int t;
    vector<int> line;
    scanf("%d\n",&t);

    while(t--){
        int n,k,i,y;
        char tmp;
        scanf("%d %d\n",&n,&k);
        //line.insert(group.begin(),n,0);
        int start = -1;
        int group = 0;
        for(y=0;y<n;y++){
            scanf("%c",&tmp);
            line.push_back((int)tmp-'0');
            if(start == -1 && line[y] == 1) start = y;
        }
        scanf("%*c");
        int last = start;
        if(start != -1) group += 1; 

        for (i = start+1 ; i<n; ){
             if(line[i]==1){
                 if(last != -1){
                     if( i - last <= k + 1){
                        last = i-last <= k ? i : i+k;
                        i = i+k;
                     }else{
                        group +=1;
                        last = -1;
                        i++;
                     }
                 }else{
                    group += 1;
                    last=i;
                    i++;
                 }
             }
             else 
                 i++;
//             printf("Last: %d Line[i]: %d\n",last,line[i]);
        }
        printf("%d\n",group);
        line.clear();
    }
    return 0;
}
