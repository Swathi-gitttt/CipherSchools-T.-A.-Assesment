#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
	return(a>b)? a:b;
}

int knap(int w,int we[],int v[],int n)
{
	if(n==0||w==0)
		return 0;
	if(we[n-1]>w)
		return knap(w,we,v,n-1);
	else
		return max(v[n-1]+knap(w-we[n-1],we,v,n-1),knap(w,we,v,n-1));
}

int main()
{
	int v[]={12,10,21,15};
	int we[]={2,1,3,2};
	int w=7;
	int n=sizeof(v)/sizeof(v[0]);
	cout<<knap(w,we,v,n);
	return 0;
}
			