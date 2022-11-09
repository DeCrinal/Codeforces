#include<iostream>
#include<stdlib.h>
using namespace std;
int **res,*tempA,M=0;
int func(int n);
int main(void){
	int T,n;
	cin>>T;
	res=(int**)calloc(T,sizeof(int*));
	for(int i = 0; i<T;i++){
		cin>>n;
		tempA=(int*)calloc(n,sizeof(int));
		for(int j = 0; j<n;j++){
			cin>>tempA[j];
		}
		func(n);
		free(tempA);
	}
	for(int i = 0; i<T; i++){
		if(res[i][0]!=-1&&res[i][2]!=-1&&res[i][1]!=-1){
			cout<<"YES"<<endl;
			cout<<res[i][0]+1<<" ";
			cout<<res[i][1]+1<<" ";
			cout<<res[i][2]+1<<" "<<endl;
		}else cout<<"NO"<<endl;;
	}
	return 0;
}
int func(int n){
	res[M]=(int*)calloc(3,sizeof(int));
	int I=-1, J=-1, K=-1;
	for(int j=1;j<n-1;j++){
		if(tempA[j-1]<tempA[j]&&tempA[j+1]<tempA[j]){
			J=j;
			I=J-1;
			K=J+1;
			break;
		}
	}
	res[M][0]=I;
	res[M][1]=J;
	res[M][2]=K;
	M++;
	return 0;
}




