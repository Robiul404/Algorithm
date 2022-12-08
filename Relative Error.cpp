#include <bits/stdc++.h>
using namespace std;
int main(){
    double Xr,Xa,Ea,Er;
    cout<<"Enter Real Value: ";
    cin>>Xr;
    cout<<"Enter Approximate Value: ";
    cin>>Xa;
    Ea=abs(Xr-Xa);
    Er=abs(Ea/Xr);
    cout<<"Absolute Error is: "<<setprecision(3)<< Ea<<endl;
    cout<<"Relative Error is: "<<setprecision(3)<<Er<<endl;
}
