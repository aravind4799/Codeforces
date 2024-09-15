#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = (k*l)/nl;
    int lime = c*d;
    int salt = p/np;
    // cout<<drink<<endl<<lime<<endl<<salt<<endl;
    int limiting = min(min(drink,lime),salt);
    cout<<(limiting/n);
    return 0;
}