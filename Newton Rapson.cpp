#include <bits/stdc++.h>

using namespace std;

double Mfunc(double x){
    return x*x - 5*x + 4;
}
double Dfunc(double x){
    return 2*x - 5;
}
	int main(){
	    double x0 = 0;
		cout<<"Enter Number of Iteration: ";
		int n;
		cin>>n;
		double x1,x2,fx0;
		for(int i=0; i<n; i++) {
			cout<<"\nIteration No: "<<(i+1)<<endl;
			x1=Mfunc(x0);
			x2=Dfunc(x0);
			fx0=x0-(x1/x2);
			cout<<"X"<<i<<" is "<<x0<<endl<<x1<<endl<<x2<<endl;
			if(x1==0){
				break;
			}
			else{
                x0=fx0;
			}
		}
    return 0;
}
