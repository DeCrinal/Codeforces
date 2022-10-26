#include<stdio.h>
#include<string.h>
int main(void){
	char p[101];
	long res=0;
	scanf("%s",&p);
	int n = strlen(p);
	for(int i = 0; i<n; i++){
		res*=16;
		res%=1000003;
		if(p[i]=='>')res+=8;
		else if(p[i]=='<')res+=9;
		else if(p[i]=='+')res+=10;
		else if(p[i]=='-')res+=11;
		else if(p[i]=='.')res+=12;
		else if(p[i]==',')res+=13;
		else if(p[i]=='[')res+=14;
		else if(p[i]==']')res+=15;
	}
	printf("%ld",res);
	return 0;
}
