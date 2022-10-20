#include<stdio.h>
#include<stdlib.h>
int comp(const void *b, const void *a){
	return *(long*)a-*(long*)b;
}
int main(void){
	int n, k, temp, b[101];
	int max;
	int res = 0;
	scanf("%d%d", &n, &k);
	for(int i = 1; i<=100; i++)
		b[i]=0;
	for(int i = 0; i<n; i++){
		scanf("%d", &temp);
		b[temp]++;
	}
	qsort(b,101,sizeof(int),comp);
	if (b[1]%k==0)max=b[1];
	else max=((b[1]/k)+1)*k;
	for(int i = 1; i<=100; i++){
		if(b[i]!=0)
			res=res+max-b[i];
	}
	printf("%d", res);
}

