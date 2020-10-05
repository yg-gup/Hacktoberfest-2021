#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string str;
int c1=0,c2=0,i;
cin>>str;
n=str.size();
 for(i=0;i<n;i++)
 {
     if(islower(str[i]))
     c1++;
     else if(isupper(str[i]))
     c2++;
     
 }

if(c1>=c2)
for(i=0;i<n;i++)
str[i]=tolower(str[i]);
else if(c1<c2)
for(i=0;i<n;i++)
str[i]=toupper(str[i]);
cout<<str;
return 0;
}