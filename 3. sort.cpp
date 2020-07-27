//Sort an array of integers using insertion sort.
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,temp,a[30];
    cout<<"enter limit";
    cin>>n;
    cout<<"\n enter elements of array\n";
    for(i=0;i<n;i++)
        cin>>a[i];
        for(i=1;i<=n-1;i++)
        {
            temp=a[i];
            j=i-1;

            while((temp<a[j])&&(j>=0))
            {
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=temp;
        }
        cout<<"\n sorted number is as follows\n";
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        return 0;
}
