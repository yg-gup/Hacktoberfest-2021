#include<iostream>
using namespace std;
int main(){
    int amt, r,backup;
    cout<<"Enter Income: ";
    cin>>amt;
    backup=amt;

    int tax=0,ch;
    if(amt>1000000)
        ch=1;
    else if(amt>500000)
        ch=2;
    else if(amt>250000)
        ch=3;

    switch(ch){
    case 1:tax=(amt-1000000)*0.3;
            amt=1000000;
    case 2:tax=tax+(amt-500000)*0.2;
            amt=500000;
    case 3:tax=tax+(amt-250000)*0.05;
    }

    if(backup>350000){
        r=0;
    }
    else{
        r=tax;
        tax=0;
    }

    cout<<"\tRebate : "<<r<<endl;;
    cout<<"\tTax without CESS = "<<tax;
    tax=tax+tax*0.04;
    if((tax%10)<5)
        tax=tax-tax%10;
    else
        tax=tax+(10-tax%10);

    cout<<"\tTax to be paid = "<<tax;

}
