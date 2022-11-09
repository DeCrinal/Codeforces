#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main(void){
	long long t, *res;
	string s;
	cin >> t;
	res = (long long*)calloc(t,sizeof(long long));
	for(long long j = 0; j<t; j++){
		long long len, *a, absMin=0,prevAm,prevMin=0,sum=0;
		cin >> s;
		len = s.length();
		a = (long long*)calloc(len,sizeof(long long));
		if(s[0]=='+')a[0]=1;
		else{
			a[0]=-1;
			absMin=-1;
		}
		for(long long i = 1; i<len;i++){
			if(s[i]=='+')a[i]=a[i-1]+1;
			else a[i]=a[i-1]-1;
			if (a[i]<absMin) absMin=a[i];
		}
		prevAm=(-1)*absMin+1;
		for(long long i = 0; i<len;i++){
			sum+=prevAm;
			if(a[i]<prevMin){
				prevMin--;
				prevAm--;
			}
		}
		res[j]=sum;
		free(a);
	}
	for(long long i = 0; i<t; i++)cout<<res[i]<<endl;
	free(res);
	return 0;
}
