#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int c,x;
	double y,a;
	cin >> c >> x >> y;
	a = x *y;
	int d,w;
	double z,b;
	cin >> d >> w >> z;
	b = w * z;
	
	cout << fixed;
	cout << setprecision(2) << "VALOR A PAGAR: R$ " << a + b << endl;


	return 0;
}
