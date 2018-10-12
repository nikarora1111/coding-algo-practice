#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,n;
    cin>>x>>n;
    bool arr[n+1];
    long long int i,j;
    arr[0]=false;
    arr[1]=false;
    for(i=2;i<=n;i++)
    arr[i]=true;
    for(j=2;j*j<=n;j++)//limit changed
    {
        if(arr[j]==true)
        {
        for(i=j+j;i<=n;i=i+j)
        {
            arr[i]=false;
        }
        }
    }
    for(i=x;i<n+1;i++)
    {if(arr[i]==true)
    cout<<i<<endl;}
	cout<<endl;
	return 0;
}
