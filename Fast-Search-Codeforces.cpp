// Problem Name :Fast search
// Platform : Codeforces
// Problem Link :https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int k;
cin>>k;
sort(arr,arr+n);
while(k--)
{
 int l,r;
 cin>>l>>r;
 int low=lower_bound(arr,arr+n,l)-arr;
 int up=upper_bound(arr,arr+n,r)-arr;
 cout<<up-low<<endl;
 
}
 
return 0;
 
}
