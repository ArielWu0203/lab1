#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int n;
	cin>>n;
	printf("%d", n);
	while(n!=1) {
		if(n%2==1)
			n=3*n+1;
		else
			n/=2;
		printf(" %d", n);
	}
	return 0;
}
