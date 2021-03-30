#include<bits/stdc++.h>


using namespace std;

int main(){
    int N;

    cin>>N;
    int i=0;
    while(i<N){
        string s;
        cin>>s;
        //cout<<s<<endl;
        int groups=0;
        
        bool group_start=false;
        for(int x=0; s[x]!='\0' ;x++){
            if(s[x]=='1' && !group_start){
                group_start=true;
            }
            if(s[x]=='0'&& group_start){
                groups++;
                group_start=false;
            }
        }

        if(group_start){
            groups++;
        }
        cout<<groups<<endl;
        i++;
        s.clear();
    }
}
