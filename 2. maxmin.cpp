//To find 2nd max and 2nd min number from an integer array.
#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j,tmp;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    cout<<"2nd max number is"<< a[1];
    cout<<"\n2nd min number is"<< a[n-2];
    return 0;
}
