//RESULTED IN A COMPILATION ERROR
#include<cstdio>
#include<iostream>

using namespace std;

int fastscan() 
{ 
    register char c; 
  
    int zeroes = 0;
    int numbers = 0;
    bool zero=true;
    c = getchar_unlocked();

    for (; (c>47 && c<58); c=getchar_unlocked()) 
    {
//        printf("%c",c);
        if(c == 48){
            zero = true;
            zeroes++;
        }
        else
        {
            if(zero)
            {
                numbers+=zeroes;
                zero = false;
            }
            numbers++;
        }
    }
    return numbers;
} 
  
// Function Call 
int main() 
{ 
    /*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    */
    int number; 
    int T;
    scanf("%d",&T);
    char c = getchar_unlocked();
    while(T--)
    {
        number = fastscan(); 
        printf("%d\n",number);
    }
    return 0; 
} 

