// AC 26679728
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
    char prev[50];
    char ch;

    int i=0;
    while( (ch = getchar()) != '#'){
        if (ch == '\n'){
            //next_permutation
            if (next_permutation(prev, prev+i)){
                prev[i] = '\0';
                printf("%s\n",prev);
            }
            else{
                printf("No Successor\n");
            }
            i=0;
        }
        else{
            prev[i++] = ch;
        }
    }
    return 0;
}
