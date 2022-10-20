#include<stdio.h>
int main(void){
	int order=0, n;
	int res=0, temp;
	scanf("%d", &n);
	for (int i = 0; i<n;i++){
		scanf("%d", &temp);
		if (temp==5||temp==4){
			order++;
			if(order==3){
				res++;
				order=0;}
		}else order=0;
	}
	printf("%d", res);
}
