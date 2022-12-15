#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e;
    cout<<"Enter X: ";
    cin>>a;
    //x=4 ans is 5.5
    double position[4]={1,2,3,5};
    double Height[4]={3,4.5,5,6};
    for(int i=0; i<4;i++)
    {
        if(position[i]<a  && position[i+1]>a)
        {
            b=position[i];
            c=position[i+1];
            d=Height[i];
            e=Height[i+1];
        }
    }
    cout<<"x1: "<<b<<endl;
    cout<<"y1: "<<c<<endl;
    cout<<"x2: "<<d<<endl;
    cout<<"y2: "<<e<<endl;
    double x=d+((a-b)*((e-d)/(c-b)));
    cout<<"y: "<<x;

    return 0;
}
