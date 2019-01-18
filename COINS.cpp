//Link to question  : https://www.spoj.com/problems/COINS/
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
map < ll,ll > m;
ll fir(ll n)
{
	if(n==0)
		return 0;
	else if(m.count(n))
		return m[n];
	m[n] = max((fir(n/2)+fir(n/3)+fir(n/4)),n);
	return m[n];
}
int main()
{
	ios;
	ll n;
	
	while(cin>>n)
	cout<<fir(n)<<endl;

	return 0;
}
