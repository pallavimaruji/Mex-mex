#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    unsigned long int i,n,k;
 	cin>>t;
 	while(t--)
	{
	    cin>>n>>k;
	    int b[n+k],a[n+k];
        for(i=0;i<n+k;i++)
        {
            b[i]=0;
        }
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]=1;
        }
        for(i=0;i<n+k;i++)
        {
            if(k==0)
            {
                if(b[i]==0)
                {
                    cout<<i<<endl;
                    break;
                }
            }
            if(k>0)
            {
                if(b[i]==0)
                {
                    b[i]=1;
                    k--;
                }
            }
        }
    }
    return 0;
 }

