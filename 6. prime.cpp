//check whether a number is prime.
#include<iostream>
using namespace std;
int main()
{
    int i,n,flag=1;
    cout<<"enter a positive number";
    cin>>n;
    for(i=2;i<=(n/2
                );++i)
    {
        if(n%i==0)
            flag=0;
    }
    if(flag==1)
        cout<<n<<"is a prime number";
    else
        cout<<n<<"is not a prime number";
    return 0;

}
