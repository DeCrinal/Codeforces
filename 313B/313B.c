#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	long *B,*C, n, m;
	char s[100000];
	long l, r, tempCount=0;
	scanf("%s",&s);
	scanf("%ld",&m);
	n=strlen(s);
	B = (long*)calloc(n,sizeof(long));
	C = (long*)calloc(m,sizeof(long));
	for(int i = 0; i<n; i++){
		B[i]=0;
	}
	for(int i = n-2; i>=0;i--){
		if(s[i]==s[i+1])B[i]++;
		B[i]+=B[i+1];
	}
	for(int i = 0; i<m;i++){
		scanf("%ld%ld",&l,&r);
		C[i]=B[l-1]-B[r-1];
		
	}
	for(int i = 0; i<m; i++){
		printf("%ld\n",C[i]);
	}
	
	free(B);
	free(C);
	return 0; 
}
