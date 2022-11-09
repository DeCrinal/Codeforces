#include<iostream>
using namespace std;
int main(void){
	int t;
	cin >> t;
	while (t--){
		int n;
		int res = 0;
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		for (int i = 1; i < n; i++){
			if (a[i - 1] * 2 < a[i]){
				while (a[i - 1] * 2 < a[i]){
					res++;
					a[i - 1] *= 2;
				}
			}
			else if (a[i - 1] > 2 * a[i]){
				int mem = a[i];
				while (a[i - 1] > 2 * a[i]){
					res++;
					a[i] *= 2;
				}
				a[i] = mem;
			}
		}
		delete []a;
		cout << endl << res<<endl;
	}
	return 0;
}
