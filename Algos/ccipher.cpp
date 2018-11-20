#include<bits/stdc++.h>
#include<cctype>
using namespace std;
void encrypt(string str,int k)
{
	for(int i=0;str[i]!='\0';i++)
		{
			if(isupper(str[i]))
			{
				str[i]+=k;
				if(str[i]>90)
				{
					str[i]-=26;
				}
			}
			if(islower(str[i]))
			{
				str[i]+=k;
				if(str[i]>122)
				{
					str[i]-=26;
				}
			}
		}
		for(int j=0;str[j]!='\0';j++)
		cout<<str[j];
		cout<<endl;
}
void decrypt(string str,int k)
{
	for(int i=0;str[i]!='\0';i++)
		{
			if(isupper(str[i]))
			{
				str[i]-=k;
				if(str[i]<65)
				{
					str[i]+=26;
				}
			}
			if(islower(str[i]))
			{
				str[i]-=k;
				if(str[i]<97)
				{
					str[i]+=26;
				}
			}
		}
		for(int j=0;str[j]!='\0';j++)
		cout<<str[j];
		cout<<endl;
}
int main()
{
	int n,k; string str;
	cin>>n>>k;
	int t=n;
	while(t--)
	{
		getline(cin,str);
		encrypt(str,k);
	}
	while(n--)
	{
		getline(cin,str);
		decrypt(str,k);	
	}
	return 0;
}
