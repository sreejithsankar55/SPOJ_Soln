//Link to question : https://www.spoj.com/problems/ELEVTRBL/
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
void showq(auto gq) 
{ 
    auto g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.front().ff<<" "<<g.front().ss; 
        g.pop(); 
    } 
    cout << '\n'; 
} 
int main() {
	ll f,s,g,u,d;
	cin>>f>>s>>g>>u>>d;
	
	pair < ll , ll > temp;
	queue < pair < ll,ll > > q;
	
	q.push({s,0});

	bool vis[f+1]={false};

	while(!q.empty())
	{
	
		temp=q.front();
		
		if(temp.ff==g)
		{
			cout<<temp.ss;
			return 0;
		}
		q.pop();
		if( ((temp.ff+u)<=f) and (vis[temp.ff+u]==false))
		{
			vis[temp.ff+u]=true;
			q.push({temp.ff+u,temp.ss+1});
		}
		if( ((temp.ff-d)>=1) and (vis[temp.ff-d]==false))
		{
			vis[temp.ff-d]=true;
			q.push({temp.ff-d,temp.ss+1});
		}

	}	
	cout<<"use the stairs";
	
    return 0;
}
