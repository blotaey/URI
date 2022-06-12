#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double s=0,divisor=1;
	
	for(int i=1; i<=39; i++){
		s += i/divisor; 
		i++;
		divisor *= 2;
	}
	
	cout << fixed;
	cout << setprecision(2) << s << endl;

	return 0;
}
