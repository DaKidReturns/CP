#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'arrangeStudents' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

string arrangeStudents(vector<int> a, vector<int> b) {
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    vector<int>::iterator ita = a.begin();
    vector<int>::iterator itb = b.begin();
    int prev_girl =-1;
    while(ita !=a.end()&&itb!=b.end()){
        if (prev_girl==-1){          //Initial condition
            if(*ita>*itb){              
                prev_girl = 0;
                ++itb;
                continue;
            }
            if(*ita<*itb){
                ++ita;
                prev_girl = 1;
                continue;         
            }
            else{                  //If both are equal then add the girl first
               ++ita;
                prev_girl = 1;
                continue;
                }
        }
        else{                             //Initial conditon has passed
                if(prev_girl==1&&*ita<*itb){     //If the previous one was a girl and the height of the current girl
                    return "NO";                  //Is less than that of the boy
                } 
                else{
                    if(prev_girl==1){            //If the above condition was false there is still chance that the 
                        itb++;                   //previous one was a girl
                        prev_girl=0;
                        continue;
                    }
                    else{                        //OK now the previous one was a boy
                        if(*ita>*itb){
                            return "NO";
                        }
                        else{
                            ita++;
                            prev_girl=1;
                            continue;
                        }
                    }
                }
            
            
        }
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string a_temp_temp;
        getline(cin, a_temp_temp);

        vector<string> a_temp = split(rtrim(a_temp_temp));

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            int a_item = stoi(a_temp[i]);

            a[i] = a_item;
        }

        string b_temp_temp;
        getline(cin, b_temp_temp);

        vector<string> b_temp = split(rtrim(b_temp_temp));

        vector<int> b(n);

        for (int i = 0; i < n; i++) {
            int b_item = stoi(b_temp[i]);

            b[i] = b_item;
        }

        string result = arrangeStudents(a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

