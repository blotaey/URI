#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double a,b,c;
	cin >> a >> b >> c;
	
	double t, r, tra,sq,rec;
	
	
	t = (a * c)/2;
	r = 3.14159 * c * c;
	tra = (a+b)*c/2;
	sq = b * b;
	rec = a*b;
	
	cout << fixed;
	cout << setprecision(3) << "TRIANGULO: " << t << endl;
	cout << setprecision(3) << "CIRCULO: " << r << endl;
	cout << setprecision(3) << "TRAPEZIO: " << tra << endl;
	cout << setprecision(3) << "QUADRADO: " << sq << endl;
	cout << setprecision(3) << "RETANGULO: " << rec << endl;
	
	
	return 0;
}
