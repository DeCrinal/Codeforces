#include<stdio.h>
int main(void){
	long n,t;
	long temp;
	scanf("%ld", &n);
	scanf("%ld", &t);
	for (long i = 0;i<n;i++){
		scanf("%ld",&temp);
		if (t-(86400-temp)<=0){
			printf("%ld", i+1);
			return 0;
		}
		t-=(86400-temp);
	}
}

