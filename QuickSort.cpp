//Sreevaths 106117074
#include <bits/stdc++.h>
using namespace std;

int qs(int a[],int l,int r)
{        if(r-l<=1)
	return 0;
	
	int p=a[l],b=l+1;int t;
	for(int i=l+1;i<r;i++)
	{
		if(p>a[i])
		{
			t=a[b];
			a[b]=a[i];
			a[i]=t;
			b++;
		}
	}
	t=a[l];
	a[l]=a[b-1];
	a[b-1]=t;
		
	qs(a,l,b-1);qs(a,b,r);
}
int main() {
	// your code goes here
	int a[100];int n;cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	qs(a,0,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
