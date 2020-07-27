#include<iostream>
using namespace std;
int main()
{
    char a[30];
    int i,l,j,flag=0;
    cout<<"enter string";
    cin>>a;
    for(l=0;a[l]!='\0';++l);
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        if(a[i]==a[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<a<<"is pallindrome";
    else
        cout<<a<<" is not pallindrome";
    return 0;

}
