#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	// long long int a;
	// long long int b;
	// a=n;
	// b=0;
	// long long int j=0;
	// for (long long int i = n-1; i>0; i-=2)
	// {
	// 	if (j%2==0)
	// 	{
	// 		b=b+i+(i-1);

	// 	}else {a=a+i+(i-1);
	// 		}
	// 		j++;
	// 	}
	// 	cout<<abs(a-b);
	if ((n%4==0)||((n+1)%4==0))
	{
		cout<<0;
	}else cout<<1;
		return 0;
}