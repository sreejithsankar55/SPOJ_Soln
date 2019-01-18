// Link to que : https://www.spoj.com/problems/NAKANJ/

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
		string st,en;
		cin>>st>>en;
		string c="",fi="";
		ll num;
		unordered_map < string , ll > ma1;
		queue < pair < string , ll > > q;
		q.push({st,0});
		pair < string , ll > temp;
		ma1[st]++;
		while(!q.empty())
		{
			char h;
			char g;
			temp=q.front();
			h=temp.ff[0];
			q.pop();
			g=temp.ff[1];
			if(temp.ff==en)
			{
				cout<<temp.ss;
				break;
			}
		num=(g-'0');
		if((num+2)<=8)
		{
			c=to_string(num+2);
			g=h;
			fi="";
			
			if((g+1)<='h')
			{
				fi+=(g+1);
				fi+=c;
				if(!ma1.count(fi))
				{
					ma1[fi]++;
					q.push({fi,temp.ss+1});
				}
			}
			
			if((g-1)>='a')
			{
				fi="";
				fi+=(g-1);
				fi+=c;
				if(!ma1.count(fi))
				{
					ma1[fi]++;
					q.push({fi,temp.ss+1});
				}				
			}
		}
		if((num+1)<=8)
		{
			c=to_string(num+1);
			g=h;
			fi="";
			if((g+2)<='h')
			{
				fi+=(g+2);
				fi+=c;
				if(!ma1.count(fi))
				{
					ma1[fi]++;
					q.push({fi,temp.ss+1});
				}
			}
			
			if((g-2)>='a')
			{
				fi="";
				fi+=(g-2);
				fi+=c;
				if(!ma1.count(fi))
				{
					ma1[fi]++;
					q.push({fi,temp.ss+1});
				}
			}
		}
		if((num-2)>=1)
		{
			c=to_string(num-2);
			g=h;
			fi="";
			if((g+1)<='h')
			{
				fi+=(g+1);
				fi+=c;
				if(!ma1.count(fi))
				{
					ma1[fi]++;
					q.push({fi,temp.ss+1});
				}				
			}
			if((g-1)>='a')
			{
				fi="";
				fi+=(g-1);
				fi+=c;	
				if(!ma1.count(fi))
				{
					ma1[fi]++;
					q.push({fi,temp.ss+1});
				}			
			}
		}
		if((num-1)>=1)
		{
			c=to_string(num-1);
			g=h;
			fi="";
			if((g+2)<='h')
			{
				fi+=(g+2);
				fi+=c;	
				if(!ma1.count(fi))
				{
					ma1[fi]++;
					q.push({fi,temp.ss+1});
				}
				
			}
			if((g-2)>='a')
			{
				fi="";
				fi+=(g-2);
				fi+=c;	
				if(!ma1.count(fi))
				{
					ma1[fi]++;
					q.push({fi,temp.ss+1});
				}					
			}
		}
		
		}
		
		
		cout<<endl;
	}
	
    return 0;
}
