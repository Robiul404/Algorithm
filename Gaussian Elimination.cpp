#include<bits/stdc++.h>

using namespace std;
/*
x1 x2 x3 v
1  1 -2  3
4 -2  1  5
3 -1  3  8

1 1 -2 3
4 -2 1 5
3 -1 3 8


Solution is:
x1 = 2.44444
x2 = 3
x3 = 1.22222
*/
int main()
{
     double a[5][5],sum[5];
     float factor=0.0;
	 int n=3;
	 cout<<"Matrix is : "<< endl;
	 //double a[3][4]={{1, 1, -2, 3},{4, -2, 1, 5},{3, -1, 3, 8}};
	 for(int i=1;i<=n;i++)
	 {
		  for(int j=1;j<=n+1;j++)
		  {
			   cin>>a[i][j];
		  }
	 }
	 for(int i=1;i<=n-1;i++)
	 {
		  for(int j=i+1;j<=n;j++)
		  {
			   factor = a[j][i]/a[i][i];
			   for(int k=1;k<=n+1;k++)
			   {
			  		a[j][k] = a[j][k] - factor*a[i][k];
			   }
		  }
	 }
	 sum[n] = a[n][n+1]/a[n][n];

	 for(int i=n-1;i>=1;i--)
	 {
		  sum[i]=a[i][n+1];
		  for(int j=i+1;j<=n;j++)
		  {
		  		sum[i]=sum[i]-a[i][j]*sum[j];
		  }
		  sum[i] = sum[i]/a[i][i];
	 }

	 cout<< endl<<"Solution is: "<< endl;
	 for(int i=1;i<=n;i++)
	 {
	  	cout<<"x"<< i<<" = "<< sum[i]<< endl;
	 }
}
