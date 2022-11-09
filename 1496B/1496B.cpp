#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int mex(set<int>&s){
	int j = 0;
	for (auto i : s){
		if (i != j){
			return j;
		}
		j++;
	}
	return s.size();
}
int main(void){
	int t,res;
	cin >> t;
	while (t--){
		bool flag = false;
		double preNew;
		int n, k, newOne, res = 0;
		set<int>s;
		cin >> n >> k;
		for (int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			s.insert(temp);
		}
		res += s.size();
		if (k == 0){
			cout << endl << res << endl;
			continue;
		}
		auto search = s.find(s.size()-1);  //проверяем, не один ли отрезок
		if (search != s.end()){
			if (*search == *s.rbegin()){
				res += k;
				cout << endl << res << endl;
				flag = true;
			}
		}
		if (flag) continue;
		preNew = ((double)mex(s) + (double)(*(s.rbegin()))) / 2.0;
		newOne = preNew;
		if (preNew>(double)newOne)newOne++;
		search = s.find(newOne);
		if (search != s.end()){
			cout << endl << res << endl;
			continue;
		}
		else{
			res++;
		}
		cout << endl << res << endl;
	}
	return 0;
}
