#include <bits/stdc++.h>
#include<iostream>
using namespace std;

long long power(int i){
    long long x;
    x=1;
    while(i--){
        x*=2;
    }
    return x;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    long long r,c,x,y;

    while(t--){
        cin>>r>>c>>x>>y;
        r--;
        c--;
        if(r-x > x)
            x=r-x;
        if(c-y > y)
            y=c-y;

        cout<<x+y<<endl;
    }

}
