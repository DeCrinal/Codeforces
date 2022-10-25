#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(void){
	int t, *a;
	int w1, l1, w2, l2,c;
	scanf("%d",&t);
	a=(int*)calloc(t,sizeof(int));
	for(int i = 0; i<t; i++){
		scanf("%d%d%d%d",&w1,&l1,&w2,&l2);
		if(w1>l1){
			c=w1;
			w1=l1;
			l1=c;
		}
		if(w2>l2){
			c=w2;
			w2=l2;
			l2=c;
		}
		if((w2+w1==l1)&&(l1==l2))a[i]=1;
		else a[i]=0;
	}
	for(int i = 0; i<t; i++){
		if(a[i]==1)printf("Yes\n");
		else printf("No\n");
	}
	free(a);
}
