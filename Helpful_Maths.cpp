#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int temp,i,j,n;
    string s;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i+=2)
    {
        for(j=i+2;j<n;j+=2)
        if(s[i]>s[j])
        {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
    }
    }
    
    cout<<s;
  return 0;
    
}
