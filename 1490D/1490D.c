#include<iostream>
#include<cmath>
using namespace std;
int n, *a, *res;
void solve(int from, int to, int deep){
	int max = from;
	if (from > to)return;
	for (int i = from; i <= to; i++){
		if (a[max] < a[i])max = i;
	}
	res[max] = deep;
	solve(from, max - 1, deep + 1);
	solve(max + 1, to, deep + 1);
}
int main(void){
	int t; 
	cin >> t;
	while (t--){
		cin >> n;
		a = new int[n];
		res = new int[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
			res[i] = 0;
		}
		solve(0, n - 1, 0);
		for (int i = 0; i < n; i++){
			cout << res[i] << " ";
		}
		cout << endl;
		delete[]a;
		delete[]res;
	}
	return 0;
}
