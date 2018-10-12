#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,x;
	cin>>n>>x;
	long long int arr[n],mid;
	for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int low=0,hi=n-1;
    mid=(low+hi)/2;
    while(low<=hi)
    {
        if(arr[mid]<x)
            low=mid+1;
        else if(x==arr[mid])
        {
            cout<<"found";
            break;
        }
        else
            hi=mid-1;
    mid=(hi+low)/2;
    }
    if(low>hi)
        cout<<"NO";
    return 0;
}
