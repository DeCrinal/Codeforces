#include<iostream>
using namespace std;
int main(void){
	int t;
	cin >> t;
	while (t--){
		int n, res = 0;
		cin >> n;
		int a0 = 0, a1 = 0, a2 = 0;
		for (int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			if (temp % 3 == 0)a0++;
			else if (temp % 3 == 1)a1++;
			else a2++;
		}
		while (a0 != n / 3 || a1 != n / 3 || a2 != n / 3){
			if (a0 > n / 3){
				res += a0 - (n / 3);
				a1 += a0 - (n / 3);
				a0 = n / 3;
			}
			if (a1 > n / 3){
				res += a1 - (n / 3);
				a2 += a1 - (n / 3);
				a1 = n / 3;
			}
			if (a2 > n / 3){
				res += a2 - (n / 3);
				a0 += a2 - (n / 3);
				a2 = n / 3;
			}
		}
		cout << res << endl << endl;
	}
	return 0;
}
