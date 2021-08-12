// WA
#include<cstdio>

using namespace std;

int jollo(int a[5]){
    unsigned short bitmap_prince_deck[53];
    unsigned short bitmap_princess_deck[53];
    unsigned short bitmap_deck[53];
    unsigned int game=0; // 1 if prince wins and 0 if princess wins
    for (int i=0;i<53;i++){
        bitmap_deck[i] = 0;
        bitmap_prince_deck[i] = 0;
        bitmap_princess_deck[i] = 0;
    }

    for (int i=0;i<5;i++){
        if (i>=3) bitmap_prince_deck[a[i]] = 1;
        else bitmap_princess_deck[a[i]] = 1;
        bitmap_deck[a[i]] = 1;
    }

    for (int i=0;i<2;i++) { // Two games are played;
        int lowest_princess;
        int lowest_prince = a[3] > a[4] ? (bitmap_prince_deck[a[4]]==0 ? a[3] : a[4]) : (bitmap_prince_deck[a[3]] == 0 ? a[4] : a[3]);
        bitmap_prince_deck[lowest_prince] = 0;

        int k = lowest_prince;
        while(k<53 && bitmap_princess_deck[k] == 0) k++;
        if (k==53){
            k=0;
            while(k<lowest_prince && bitmap_princess_deck[k] == 0) k++;
        }
        lowest_princess = k; 

        bitmap_princess_deck[lowest_princess] = 0;
        game += lowest_princess < lowest_prince ? 1 : 0 ;
    }
    if(game==0){
        return -1;
    }
    else{
        int i;
        int j;
        for (i=52;i>=0 && bitmap_princess_deck[i]!=1 ;i--);
        for (j=i; j<53 && bitmap_deck[j]==1;j++);
        return j;
    }
    
}

int main(){
    int a[5];
    const static char format[]="%d %d %d %d %d";
    while( scanf(format,a,a+1,a+2,a+3,a+4) == 5 ){
        int flag=0;
        for (int i=0;i<5;i++) if (a[i] == 0) flag=1;
        if (flag) continue;
        printf("%d\n",jollo(a));
    }
}

// vim: set foldmethod=/*,*/
