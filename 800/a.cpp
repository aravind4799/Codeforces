#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    int copy=0;
    cin>>n;
    copy=n;

    //if digit > 4 replace it with 9-digit
    long long ans=0;
    int count=0;
    long long mul=1;
    while(n>0){
        int digit = n%10;
        int copydigit=digit;
        if(digit > 4 ) digit = 9-digit;
        //meaning this is the first digit and i dont want to be zero
        if(n/10<=0 && digit==0) digit = copydigit; 
        ans+= digit * mul;
        mul*=10;
        n=n/10;
        count++;
    }
    

    cout<<ans;
    return 0;
}