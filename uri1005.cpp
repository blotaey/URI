#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double a,b,MEDIA;
	cin >> a >> b;
	
	a = a * 3.5;
	b = b * 7.5;
	
	MEDIA = (a+b)/(3.5+7.5);
	
	cout << fixed;
	cout << setprecision(5) << "MEDIA = " << MEDIA << endl;
	

	return 0;
}
