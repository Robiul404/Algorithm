#include <bits/stdc++.h>

using namespace std;

double Mfunc(double x){
    return x*x*x - x - 1;
}
	int main(){
		cout<<"Enter Number of Iteration: ";
		int n;
		cin>>n;
		cout<<"Enter X1: ";
		double a1;
		cin>>a1;
		cout<<"Enter X2: ";
		double b1;
		cin>>b1;
		double x1,x2,fx0;
		for(int i=0; i<n; i++) {
			cout<<"Iteration No: "<<(i+1)<<endl;
			x1=Mfunc(a1);
			x2=Mfunc(b1);
			double x0=((x2*a1)-(x1*b1))/(x2-x1);
			fx0=Mfunc(x0);
			cout<<"X0 is "<<x0<<endl;
			cout<<"f(x1) is "<<x1<<endl;
			cout<<"f(x2) is "<<x2<<endl;
			cout<<"f(x0) is "<<fx0<<endl<<endl;
			if(x0==0) {
				break;
			}
			else {
				a1=b1;
				b1=x0;
			}
		}
    return 0;
}
