#include <bits/stdc++.h>

using namespace std;

double Mfunc(double x){
    return x*x - 4*x - 10;
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
			double x0=(a1+b1)/2;
			fx0=Mfunc(x0);
			cout<<"x1 is "<<a1<<endl;
			cout<<"x2 is "<<b1<<endl;
			cout<<"X0 is "<<x0<<endl;
			cout<<"f(x1) is "<<x1<<endl;
			cout<<"f(x2) is "<<x2<<endl;
			cout<<"f(x0) is "<<fx0<<endl<<endl;
			if((x1*fx0)<0) {
				b1=x0;
			}
			else if((x1*fx0)>0) {
				a1=x0;
			}
			else if((x1*fx0)==0){
				break;
			}
		}
    return 0;
}
