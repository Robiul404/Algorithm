#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n=8,a;
    int count=pow(2,n);
    int arr[n]={9,4,4,5,9,4,9,10};
    for(int i=0;i<count; i++ )
    {
        for(int j=0; j<n; j++)
        {
            if((i & (1<<j))!=0)
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
