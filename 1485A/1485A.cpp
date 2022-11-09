#include<iostream>
#include<cmath>
using namespace std;
int intlog(int a, int b){
	double preRes = (log((double)a) / log((double)b));
	int res = preRes;
	if ((int)(preRes+0.000000000000001)>(int)(preRes))res++;
	return res+1;
}
int main(void){
	int a, b, binc, t, res;
	cin >> t;
	while (t--){
		res = 0;
		binc = 0;
		cin >> a >> b;
		if (b == 1){
			b++;
			binc++;
		}
		res = intlog(a, b) + binc;
		for (; intlog(a, b) + binc <= res; b++, binc++){
			res = intlog(a, b) + binc;
		}
		cout <<endl<< res<<endl;
	}
	return 0;
}
