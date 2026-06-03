#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int m;
	cin>>m; 
	if ((m/2)%2==0)
	{
		cout<<(m/4)-1;
	}else{
		cout<<((m/2)-1)/2;
	}
	return 0;
}