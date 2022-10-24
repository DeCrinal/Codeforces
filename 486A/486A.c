#include<stdio.h>
int main(void){
	long long n;
	scanf("%lld",&n);
	if(n%2==1){
		n++;
		printf("-%lld",n/2);
	}else{
		printf("%lld",n/2);
	}
	return 0;
}
