#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void){
	int t, temp;
	vector<int>res;
	cin >> t;
	string s;
	for(int i = 0; i<t; i++){
		int am1=0, am0=0;
		cin>>s;
		for(int j = 0; j<s.size();j++){
			if(s[j]=='0')am0++;
			else am1++;
		}
		if (am0<=am1){
			if(am0%2==1)res.push_back(1);
			else res.push_back(0);
		}else if(am1<am0){
			if(am1%2==1)res.push_back(1);
			else res.push_back(0);
		}
	}
	for(int i = 0; i<t; i++){
		if(res.at(i)==1)cout<<"DA"<<endl;
		else cout<<"NET"<<endl;
	}
	return 0;
}
