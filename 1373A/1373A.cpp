#include<iostream>
#include<vector>
using namespace std;
int main(void){
	long long t, a, b, c, res;
	vector<long long>res1;
	vector<long long>res2;
	cin >> t;
	for(int i = 0; i<t; i++){
		cin >> a >> b >> c;
		if(a<c)res=1;
		else res = -1;
		res1.push_back(res);
		if(c<a*b)res=b;
		else res = -1;
		res2.push_back(res);
	}
	for(int i = 0; i<t; i++){
		cout << res1.at(i) << " " <<res2.at(i) <<endl;
	}
	return 0;
}
