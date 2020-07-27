//To find greatest of three numbers


#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers\n";
    cin>> a >>b >>c;
    int max=0;
    if(a>b&&a>c)
        cout<<"the largest numbers is "<<a;
    else if(b>a&&b>c)
        cout<<"the largest numbers is "<<b;
    else
        cout<<"the largest numbers is "<<c;
    cout<<endl;
    return 0;

}
