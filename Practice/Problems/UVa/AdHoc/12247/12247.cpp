// WA
#include<cstdio>

using namespace std;

void print_bitmap(unsigned short* v, int n){
    for (int i=0;i<n;i++){
        printf("%d ",v[i]);
    }
    printf("\n");

}

int jollo(int a[5]){
    unsigned short bitmap_dealed[53];
    unsigned short bitmap_prince_deck[53];
    unsigned short bitmap_princess_deck[53];
    unsigned short bitmap_deck[53];
    unsigned int game=0; // 1 if prince wins and 0 if princess wins
    for (int i=0;i<53;i++){
        bitmap_deck[i] = 0;
        bitmap_prince_deck[i] = 0;
        bitmap_princess_deck[i] = 0;
        bitmap_dealed[i] = 0;
    }

    for (int i=0;i<5;i++){
        if (i>=3){
            bitmap_prince_deck[a[i]] = 1;
            printf("%d added to prince\n",a[i]);
        }
        else{
            bitmap_princess_deck[a[i]] = 1;
            printf("%d added to princess\n",a[i]);
        }
        bitmap_deck[a[i]] = 1;
    }

    for (int i=0;i<2;i++) { // Two games are played;
        printf("Game: %d\n", i+1);
        print_bitmap(bitmap_prince_deck,53);
        print_bitmap(bitmap_princess_deck,53);
        int lowest_princess;
        int lowest_prince = a[3] > a[4] ? (bitmap_dealed[a[4]]==1 ? a[3] : a[4]) : (bitmap_dealed[a[3]] == 1 ? a[4] : a[3]);
        bitmap_dealed[lowest_prince] = 1;
        bitmap_prince_deck[lowest_prince] = 0;

        //for (int j=0;j<3;j++){
        int k = lowest_prince;
        while(k<53 && bitmap_princess_deck[k] == 0) {
            /*if (bitmap_princess_deck[k] == 1){
                break;
            }*/
            k++;
        }
        if (k==53){
            k=0;
            while(k<lowest_prince && bitmap_princess_deck[k] == 0){ 
                k++;
            }
        }
        lowest_princess = k; 
        //}

        bitmap_dealed[lowest_princess] = 1;
        bitmap_princess_deck[lowest_princess] = 0;
        printf("Prince will deal: %d\n",lowest_prince);
        printf("Princess will deal: %d\n",lowest_princess);

        game += lowest_princess < lowest_prince ? 1 : 0 ;
    }
    printf("Total score: %d\n",game);
    if(game==0){
        return -1;
    }
    else{
        int i;
        int j;
        for (i=52;i>=0 && bitmap_princess_deck[i]!=1 ;i--);
        printf("Card with highest rank: %d\n",i);
        for (j=i; j<53;j++){
            if(bitmap_deck[j]!=1){
              break;  
            }
        }
        return j;
    }
    
}

int main(){
    int a[5];
    const static char format[]="%d %d %d %d %d";
    while( scanf(format,a,a+1,a+2,a+3,a+4) == 5 ){
        printf("%d\n",jollo(a));
        printf("\n");
        
    }
}

// vim: set foldmethod=/*,*/
