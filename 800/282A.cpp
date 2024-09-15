#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    int ans=0;
    for(auto it: v){
        if(it.find('-')!=string::npos) ans--;
        else ans++;
    }
    cout<<ans;
    return 0;
}