#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double s=0;
	
	for(int i=1;i<=100;i++){
		s += 1/(double)i;
	}
	
	cout << fixed;
	cout << setprecision(2) << s << endl;



	return 0;
}
