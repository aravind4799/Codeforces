#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<string> v;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(auto s: v){
        if(s.size()>10){
            cout<< s[0]+ to_string(s.size()-2)+s[s.size()-1];
        }
        else{
            cout<<s;
        }
        cout<<endl;
    }

    return 0;
}