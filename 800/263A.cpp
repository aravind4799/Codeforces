// https://codeforces.com/contest/263/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){

    int x=0;
    int row=0;
    int col=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>x;
            if(x==1){
                row=i;
                col=j;
            }
        }
    }

    cout<<abs(row-2)+abs(col-2);
    return 0;
}