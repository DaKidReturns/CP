// 96A - Football
#include<iostream>

using namespace std;

int main(){
    char c;
    int one = 0;
    int zero = 0;
    int flag = 0;
    while(scanf("%c",&c)==1){
        c = c - '0';
        if(c==0){
            one = 0;
            zero++;
        }
        else if(c == 1){
            one++;
            zero=0;
        }

        if(one == 7 || zero == 7){
            flag =1;
            break;
        }
    }
    if(flag){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
