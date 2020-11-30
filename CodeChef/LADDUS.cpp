#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

 int main(){
    int T;
    int A;
    int laddus;
    int rank;
    int severity;
    int i;
    string str;
    string nation;
    string activity;

    cin>>T;
    while(T-->0){
        cin>>A;
        cin>>nation;
        fflush(stdin);
        laddus = 0;
        while(A-->0){
            cin>>activity;
            fflush(stdin);
            if(!activity.compare("TOP_CONTRIBUTER"))
                laddus+=300;
            else{
                if(!activity.compare("CONTEST_HOSTED"))
                    laddus+=50;
                else{
                    if(!activity.substr(0,11).compare("CONTEST_WON")){
                        laddus+=300;
                        rank = activity[12]-'0';
                        if(rank<20){
                            laddus+=20-rank;
                        }
                    }
                    else{
                        severity =0;
                        str = activity.substr(10,activity.size());
                        for(i=0;i<str.size();i++){
                            severity+=10*(str[i]-'0');
                        }
                        laddus+=severity;
                    }
                }
            }
        }
    if(!nation.compare("INDIAN"))
        cout<<laddus/200;
    else
        cout<<laddus/400;
    }

}
