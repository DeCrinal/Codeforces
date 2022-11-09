#include<stdio.h>
#include<stdlib.h>
int main(void){
	long t,n,m;
	long *a=(long*)calloc(t,sizeof(long));
	scanf("%ld",&t);
	for(long i = 0; i<t; i++){
		scanf("%ld%ld",&n,&m);
		if(n==1)a[i]=0;
		else if(n==2)a[i]=m;
		else a[i]=m*2;
	}
	for(int i = 0; i<t; i++)
		printf("%ld\n",a[i]);
	free(a);
	return 0;
}
	
