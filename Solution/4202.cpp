#include<bits/stdc++.h>
#define sf scanf
#define pf printf
//~ #define FOR(i,a,b) for(int i=(a); i<b; i++)

using namespace std;

int main()
{
		//~ freopen("in.txt","rt",stdin);
		//~ freopen("out.txt","wt",stdout);
	
	char times[200][50];
	
	int kase;
	sf("%d",&kase);
	
	for(int i=1; i<=kase; i++)
	{
		int a,b,c,d,e,f,g,h;
		sf("%d : %d %d : %d",&a,&b,&c,&d);
		sf("%d : %d %d : %d",&e,&f,&g,&h);
		
		times[0][0] = (a/10)+'0';
		times[0][1] = (a%10)+'0';
		times[0][2] = (b/10)+'0';
		times[0][3] = (b%10)+'0';
		
		times[1][0] = (c/10)+'0';
		times[1][1] = (c%10)+'0';
		times[1][2] = (d/10)+'0';
		times[1][3] = (d%10)+'0';
		
		times[2][0] = (e/10)+'0';
		times[2][1] = (e%10)+'0';
		times[2][2] = (f/10)+'0';
		times[2][3] = (f%10)+'0';
		
		times[3][0] = (g/10)+'0';
		times[3][1] = (g%10)+'0';
		times[3][2] = (h/10)+'0';
		times[3][3] = (h%10)+'0';
		
		
		long m = atol(times[0]); long n = atol(times[1]);
		long o = atol(times[2]); long p = atol(times[3]);
		
		if(m <= o)
		{
			if(n < o) 
			{
				pf("Case %d: Hits Meeting\n",i);
			}
			else
			{
				pf("Case %d: Mrs Meeting\n",i);
			}
		}
		else if(o < m)
		{
			if(p < m)
			{
				pf("Case %d: Hits Meeting\n",i);
			}
			else
			{
				pf("Case %d: Mrs Meeting\n",i);
			}
			
		}
		
		
		memset(times,'\0',sizeof(times));
	}
	
	return 0;
}
