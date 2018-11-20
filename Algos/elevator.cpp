#include<bits/stdc++.h>
using namespace std;
int bsearch(int a[],int l,int r,int key)
{
	int mid=(l+r)/2;
	if(a[mid]==key)
	return mid;
	else if(a[mid]<key)
	{	
		bsearch(a,mid,r,key);
	}
	else if(a[mid]>key)
	{
		bsearch(a,l,mid,key);
	}
}
int main()
{
	int ini;
	cin>>ini;
	int a[100];
	a[0]=ini;
	int i=1;
	while(cin>>a[i])
	{
		i++;
	}
	sort(a,a+i);
	int index_a =bsearch(a,0,i,ini);	
	int j,k;
	cout<<"Possibility 1(elevator going up)"<<endl;
	for( j=index_a;j<i;j++)
	cout<<a[j]<<" ";
	for( k=index_a-1;k>=0;k--)
	cout<<a[k]<<" ";
	cout<<endl;
	int dist=(a[j-1]-ini)*2+(ini-a[k+1]);
	cout<<"Possibility 2(elevator going down)"<<endl;
	for( k=index_a;k>=0;k--)
	cout<<a[k]<<" ";
	for( j=index_a+1;j<i;j++)
	cout<<a[j]<<" ";
	cout<<endl;
	cout<<"Distance travelled = "<<dist;
return 0;
}
