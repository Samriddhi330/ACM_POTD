#include <bits/stdc++.h>
using namespace std;
string helper(string s){
    string ans = "";
    for(int i = 0;i<s.length();i++){
        if(s[i]=='.'){
            ans += "0";
        }
        else if(s[i]=='-' && i!=s.length()-1){
            if(s[i+1]=='.'){
                ans += "1";
                i++;
            }
            else if(s[i+1]=='-'){
                ans += "2";
                i++;
            }
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s; 
    
    cout << helper(s) << "\n"; 
    
    return 0;
}