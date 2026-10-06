#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n+1);
    arr[0] = 0;
    for(int i = 1;i<n+1;i++){
        cin>>arr[i];
    }
    int ans = INT_MAX;
    int a=1,b=2;
    for(int i = 1;i<n;i++){
        if(ans>abs(arr[i+1]-arr[i])){
            ans = abs(arr[i+1]-arr[i]);
            a = i+1;
            b=i;
        }
    }
    if(ans>abs(arr[n]-arr[1])){
        a = n;
        b = 1;
    }
    cout<<a<<" "<<b<<"\n";
}