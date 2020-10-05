
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int i,n,total;
    total=0;
    float fr;
    cin>>n;
    int p[n];
    for(i=0;i<n;i++)
    cin>>p[i];
    for(i=0;i<n;i++)
    {
        total=total+p[i];
    }
    fr=float(total)/n;
    cout<<fr;
  return 0;
    
}
