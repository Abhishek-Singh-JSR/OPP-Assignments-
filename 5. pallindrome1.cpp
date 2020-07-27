//check whether a no is pallindrome or not.
#include<iostream>
#include<string>
using namespace std;
int main()
{
int digit,n,num,rev=0;
    cout<<"enter positive number";
    cin>>num;
    n=num;
    do
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    while(num !=0);
    cout<<"the reverse of the number is: "<< rev << endl;

    if(n==rev)
        cout<< "the number is pallindrome";
    else
        cout<< "the number is not pallindrome";
        return 0;
}
