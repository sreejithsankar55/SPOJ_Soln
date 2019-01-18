// Link to question : https://www.spoj.com/problems/PALIN/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define vsort(v) sort(v.begin(),v.end())
#define setpr fixed<<setprecision
#define gl(a) getline(cin,a)
#define ss second
#define ll long long
#define ld long double
#define ins insert
#define cf cout.flush()
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
	std::cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma, args...);
}
#define countd(n) (log10(n)+1)
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

int main() {

	ios;
	ll t;
	cin>>t;
	while(t--)
	{
		ll f=0,mid,c=1,r,co=0;
		string s,t="";
		cin>>s;
		ll n=(ll)s.size();
		mid=(n/2)-(!(n&1));
		ll mid1=(n/2)-1;
		for(ll i = 0 ; i <= mid1 ; i++)
		{
			if(s[i]<s[n-i-1])
			{
				co=1;
				f=1;
			}
			else if(s[i]>s[n-i-1])
			{
				co=1;
				f=0;
			}
			
		}
		
		if(co==0)
			f=1;
		//db(f);
		if((ll)s.size()==1)
			f=1;
		if(f==1)
		{
			for(ll i = mid ; i >= 0 ; i--)
			{
				//db(s[i]-'0',c);
				c=(s[i]-'0')+c;
				r=c%10;
				t+=(r+'0');
				c/=10;
			}
			if(c!=0)
			{
				f=0;
				t+=(c+'0');
			}
			n=(ll)t.size();
			ll ns=(ll)s.size();
			ll j=(f==0)+(ns&1);
			//cout<<j<<" "<<t<<endl;
			if((ll)s.size()==1)
			{
				if(s[0]=='9')
					cout<<"11";
				else
					cout<<(s[0]-'0')+1;
			}
			else
			{
			for(ll i = n-1 ; i >= j ; i--)
				cout<<t[i];
			cout<<t;
			}
		}
		else
		{
			n=(ll)s.size()/2;
			if((ll)s.size()%2==0)
				n--;
			if((ll)s.size()%2==0)
			{
			for(ll i = 0 ; i <= n; i++)
				cout<<s[i];
			if(mid==0)
				mid++;
			for(ll i = n ; i >= 0 ; i--)
				cout<<s[i];
			}
			else
			{
			for(ll i = 0 ; i <= n; i++)
				cout<<s[i];
			if(mid==0)
				mid++;
			for(ll i = n-1 ; i >= 0 ; i--)
				cout<<s[i];		
			}
		}
		cout<<endl;
	}
  return 0;
}
