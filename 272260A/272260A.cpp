#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void){
	int t;
	vector<string>p;
	vector<int>res;
	res.clear();
	string temp;
	cin >> t;
	for(int i = 0; i<t;i++){
		cin >> temp;
		p.push_back(temp);
		int n=p[i].size();
		for(int j = n-1; j>=0;j--){
			int resTemp=1,flag=1;
			for(int k=j;k>=0;k--){
				if(p[i][k]!=p[i][j-k]){
					flag=0;
					break;
				}
			}
			if(flag){
				res.push_back(j+1);
				break;
			}
		}
		if(res[i]==0)res[i]=1;
	}
	for(int i = 0; i<t; i++){
		cout<<res[i]<<endl;
	}
	return 0;
}
