#include<stdio.h>
#include<stdlib.h>
int main(void){
	int t;
	long *a,n,m;
	scanf("%d",&t);
	a=(long*)calloc(t,sizeof(long));
	for(int i=0; i<t; i++){
		scanf("%ld%ld",&n,&m);
		if(m==1||n==1)a[i]=1;
		else if(m==2&&n==2)a[i]=1;
		else a[i]=0;
	}
	for(int i = 0; i<t; i++){
		if(a[i]==1)printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
