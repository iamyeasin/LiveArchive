#include<bits/stdc++.h>
#define sf scanf
#define inf -5
#define pf printf

using namespace std;

int digits[10];

int main()
{
	int kase;
	sf("%d",&kase);
	
	while(kase--)
	{
		int num;
		sf("%d",&num);
		
		for(int i=1; i<=num; i++)
		{
			if(i<=9)
			{
				digits[i] += 1;
			}
			else if(i>9)
			{
				int n=i;
				//~ cout << n << endl;
				while(n>0)
				{
					int x = n%10;
					digits[x] += 1;
					n /= 10;
				}
				//~ if(n==0)digits[n] += 1;
				
			}
		}
		
		for(int i=0; i<10; i++)
		{
			pf("%d",digits[i]);
			if(i>=0 && i<9)
			{
				pf(" ");
			}
		}
		pf("\n");
		
		
		
		memset(digits,0,sizeof(digits));
	}
	
	

    return 0;
}
