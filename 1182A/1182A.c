#include<stdio.h>
long long power(int a){
	int res = 1;
	for(int i = 0; i<a; i++)
		res*=2;
	return res;
}
int main(void){
	int n;
	scanf("%d",&n);
	if(n%2==1){
		printf("0");
		return 0;
	}
	printf("%lld",power(n/2));
	return 0;
}
