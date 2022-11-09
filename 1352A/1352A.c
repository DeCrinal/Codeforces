#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void){
	long t, n, k;
	long **a;
	scanf("%ld",&t);
	a=(long**)calloc(t,sizeof(long*));
	for(int i = 0; i<t; i++){
		a[i]=(long*)calloc(5,sizeof(long));
		int razNum=1, CifNum=1;
		scanf("%ld",&n);
		while(n/10!=0){
			if(n%10!=0){
				a[i][CifNum]=(n%10)*pow(10,razNum-1);
				CifNum++;
			}
			n=n/10;
			razNum++;
		}
		a[i][CifNum]=(n%10)*pow(10,razNum-1);
		a[i][0]=CifNum;
	}
	for(int i = 0; i<t; i++){
		printf("%ld\n",a[i][0]);
		for(int j=a[i][0];j>=1;j--){
			printf("%ld ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
