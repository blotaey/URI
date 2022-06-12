#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double a,b,c,MEDIA;
	cin >> a >> b >> c;
	
	a = a * 2.0;
	b = b * 3.0;
	c = c * 5.0;
	
	MEDIA = (a+b+c)/(2.0+3.0+5.0);	
	
	cout << fixed;
	cout << setprecision(1) << "MEDIA = " << MEDIA << endl;
	
	

	return 0;
}
