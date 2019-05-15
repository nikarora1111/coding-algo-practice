#include<iostream>
#include<vector>
using  namespace std;
vector< vector<long long> > z {{0,0},{0,0}};
vector< vector<long long> > out {{0},{0}};
long long mod=1000000007;
void mul(vector< vector<long long> > &x,vector< vector<long long> > &y,vector< vector<long long> > &res)
{
    long long r1,r2,c1,c2;
    r1=x.size();
    r2=y.size();
    c1=x[0].size();
    c2=y[0].size();
    //cout<<"x,y,mul"<<endl;
    long long m=r1,n=c2;
    long long i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        	res[i][j]=0;
            for(k=0;k<c1;k++)
            {
                res[i][j]+=(x[i][k]*y[k][j]);
                res[i][j]%=mod;
                //cout<<x[i][k]<<"*"<<y[k][j]<<"+";
            }
            //cout<<res[i][j]<<endl;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    		z[i][j]=res[i][j]%mod;
    }
}
void power(vector< vector<long long> > &x,long long n,vector< vector<long long> > &res)
{
	long long i,j;
	if(n==1)
	res=x;
	else if(n==2)
	{
		mul(x,x,res);
		//cout<<"x*x"<<endl;
	}
	else if(n%2==0)
	{
		power(x,n/2,res);
		//cout<<"x halved"<<endl;
		mul(z,z,res);

	}
	else
	{
		power(x,n-1,res);
	 	mul(z,x,res);
	}

}
int main()
{
	long long t;
	cin>>t;
	for(;t>0;t--)
	{
		long long n;
		cin>>n;
		if(n==1)
		cout<<"2"<<endl;
		else if(n==2)
		cout<<"3"<<endl;
		else
		{
			long long i,j;
		    vector< vector<long long> > x {{1,1},{1,0}};
		    vector< vector<long long> > y {{0,0},{0,0}};
		    vector< vector<long long> > res{{0,0},{0,0}};
		    power(x,n-1,res);
		   r<long long> > m {{1},{1}};
		    mul(z,m,out);
		    cout<<(z[0][0]+z[1][0])%mod<<endl;
	    }
    }
    return 0;
}
