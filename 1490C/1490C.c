#include<iostream>
#include<cmath>
using namespace std;
int main(void){
	int t;
	cin >> t;
	while (t--){
		long long x;
		bool flag = false;
		cin >> x;
		double sqr = pow(x, 1 / 3.0);
		long long a, b;
		for (a = 1; a <= sqr; a++){
			b = (long long)pow(x - (a*a*a), 1 / 3.0);
			if (b*b*b + a*a*a == x && a>0&&b>0)flag = true;
			if ((b + 1)*(b + 1)*(b + 1) + a*a*a == x&&a > 0 && (b + 1) > 0)flag = true;
			if ((b + 2)*(b + 2)*(b + 2) + a*a*a == x&&a > 0 && (b + 2) > 0)flag = true;
			if ((b + 3)*(b + 3)*(b + 3) + a*a*a == x&&a > 0 && (b + 3) > 0)flag = true;
			if ((b - 1)*(b - 1)*(b - 1) + a*a*a == x&&a > 0 && (b - 1) > 0)flag = true;
			if ((b - 2)*(b - 2)*(b - 2) + a*a*a == x&&a > 0 && (b - 2) > 0)flag = true;
			if ((b - 3)*(b - 3)*(b - 3) + a*a*a == x&&a > 0 && (b - 3) > 0)flag = true;
			if (flag)break;
		}
		if (flag){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
