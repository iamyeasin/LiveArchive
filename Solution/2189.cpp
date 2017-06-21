#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

char final_out[1024];

void gOut(char *zero, char *cur){

	memset(final_out,'\0',sizeof(final_out));

	long len1 = strlen(zero); long len2 = strlen(cur);
	long k=0;

	if(len1 == len2)
	{
		while(zero[k] == cur[k]) { k++; }// How many digits are same
		strcpy(final_out,zero);
		final_out[len1] = '-';

		// saving the last unmatched digits
		long cats = len1+len2-k;
		for(int i=len1+1; i<=cats; i++,k++) // i = starting from the last lenght of output value + 1 ;
												//will loop for required time
		{
			final_out[i] = cur[k]; // adding digits to the output
		}

		final_out[len1+len2] = '\0';
	}

}

bool isDiff(char *st, char *st1) // check if the difference is one
{
	long long x = atoll(st);
	long long y = atoll(st1);

	if((y-x) != 1) return false;
	else return true;

}


int main()
{

//	freopen("in.txt","rt",stdin);
//	freopen("out.txt","wt",stdout);

	char zero[1024],cur[1024],prev[1024];
	long kase,T=0,noPrint;

	while(sf("%ld",&kase))
	{
		noPrint = 0;

		if(!kase) break;
		pf("Case %ld:\n",++T);

		if(kase == 1) // Not so sure about that condition
		{
			sf("%s",zero);
			pf("%s\n\n",zero);
			continue;
		}
		else if(kase >= 2)
		{

			sf("%s",zero);  //First input will store at previous value
			strcpy(prev,zero);
			strcpy(cur,zero);
			long opt=1;

			for(int i=1; i<kase; i++)
			{
				sf("%s",cur);

				if(isDiff(prev,cur)) // for the case if numbers are consecutive
				{
					strcpy(prev,cur);
					continue; opt++;
				}
				else if(!isDiff(prev,cur) && (strcmp(prev,zero))) // is current number is not consecutive. print the previous limit
				{
					gOut(zero,prev);
					pf("%s\n",final_out);
					strcpy(zero,cur); noPrint = 1; // once printed
					strcpy(prev,cur); opt++;
				}
				else if(!isDiff(prev,cur) && (!strcmp(prev,zero))) // is current number is not consecutive. print just the previous number
				{
					pf("%s\n",zero);
					strcpy(zero,cur); noPrint = 1; // once printed
					strcpy(prev,cur); opt++;
				}

			}

			if(!noPrint) // nver printed means all number inputed are consecutive.
			{
				gOut(zero,prev);
				pf("%s\n",final_out);
			}
			else if((kase-opt) > 0 || (strcmp(prev,zero) || (!strcmp(prev,zero))))  // means there is numbers at last which was not printed
			{
				if(!isDiff(prev,cur) && (strcmp(prev,zero)))
				{
					gOut(zero,prev);
					pf("%s\n",final_out);
				}
				else if(!isDiff(prev,cur) && (!strcmp(prev,zero)))
				{
					pf("%s\n",zero);
				}
			}


		}
		if(T>0)puts(""); // blank line between two set input

	}



	return 0;
}
