
using namespace std;
int main()
 {
	//code
	 int n,t;
	 cin>>t;
	 while(t--)
	 {
	     cin>>n;
	     int a[n+2],dp[n+5];
	     int mx=-1;
	     for(int i=1;i<=n;i++)
	     {
	         cin>>a[i];
	     }
	      for(int i=0;i<=n;i++)
	     {
	         dp[i]=0;
	     }
	    
	     for(int i=1;i<=n;i++)
	     {
         //  yhii hai main logic
	         dp[a[i]]=dp[a[i]-1]+1;
	         mx=max(mx,dp[a[i]]);
	     }
	     cout<<n-mx<<endl;
	 }
	 
	return 0;
}
