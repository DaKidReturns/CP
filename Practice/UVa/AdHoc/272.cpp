#include<cstring>
#include<cstdio>

int main(){
    int flag = 0,i,j; //0 if no " is matched 1 if it is not
    int s;

    while((s=fgetc(stdin))!=EOF){
        if(s=='\"'){
            if(flag){
                putc('\'',stdout);
                putc('\'',stdout);
                flag =0;
            }
            else{
                putc('`',stdout);
                putc('`',stdout);
                flag =1;
            }
        }
        else{
            putc(s,stdout);
        }
    }
    return 0;

}
