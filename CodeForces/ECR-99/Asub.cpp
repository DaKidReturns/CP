// This submission resulted in a compilation error due to _getchar_nolock()
#include<cstdio>
#include<iostream>


using namespace std;

int fastscan() 
{ 
    register char c; 
  
    int zeroes = 0;
    int numbers = 0;
    bool zero=true;
    c = _getchar_nolock();

    for (; (c>47 && c<58); c=_getchar_nolock()) 
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
    char c = _getchar_nolock();
    while(T--)
    {
        number = fastscan(); 
        printf("%d\n",number);
    }
    return 0; 
} 

