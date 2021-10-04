#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,a1=0,a2=0,a3=0,i,s[100][3],j;
 cin>>n;
 for( i=0;i<n;i++)
 for(j=0;j<3;j++)
{
    cin>>s[i][j];
}  
for(i=0;i<n;i++)
{
    a1+=s[i][0];
    a2+=s[i][1];
    a3+=s[i][2];
}
if(a1==0&&a2==0&&a3==0)
cout<<"YES";
else
cout<<"NO";
return 0;
}