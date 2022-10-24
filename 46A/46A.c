#include<stdio.h>
int main(void){
	int n, gap=0,pl=1;
	scanf("%d",&n);
	for(int i = 1; i<n;i++){
		pl=pl+gap+1;
		if(pl>n)
			pl=pl%n;
		printf("%d ",pl);
		gap++;
	} 
	return 0;
}
