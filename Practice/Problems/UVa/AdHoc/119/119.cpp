/*
 * Greedy Gift Givers
 * Sample Input:
 * 3
 * dave amr laura 
 * dave 200 2 amr laura
 * amr 0 0
 * laura 300 1 dave
 *
 * Sample Output
 * dave 100
 * amr 100
 * laura -200
 * */

#include<iostream>
#include<cstdio>
#include<unordered_map>
#include<string>
#include<vector>

using namespace std;

void printmap(unordered_map<string, int>& m, vector<string> name_list){
    /*
    for(auto& [key, value]: m){
        cout<<key<<" "<<value<<endl; 
    }
    */
    for(auto p : name_list){
        cout<<p<<" " <<m[p]<<endl;
    }
}

int main(){

    int n;
    unordered_map<string, int> guests;
    vector<string> guest_names;
    bool f = 0;

    while(scanf("%d",&n)==1){
        if(f == 0){f=1;}
        else{cout<<endl;}
        int i=0;
        string gname;
        while(i<n){
            cin >> gname;
            guests.insert({gname,0});
            guest_names.push_back(gname);
            i++;
        }
        i=0;
        while(i<n){
            int cash,given_n;
            cin >> gname;
            cin >> cash >> given_n;
            int cash_given = given_n<=0?0:(int)(cash/given_n);
            int cash_lost = cash_given * given_n;
            guests[gname] -= cash_lost;
            int j=0;
            while(j<given_n){
                string recived;
                cin>>recived;
                guests[recived] += cash_given;
                j++;
            }
            i++;
        }
        printmap(guests,guest_names);
        //cout<<endl;
        guests.clear();
        guest_names.clear();
    }
}
