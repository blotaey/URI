#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int i=1;
	for(int j = 60; j >= 0; j--){
		cout << "I=" << i << " J=" << j << endl;
		i+=3;
		j-=4;
	}
	
	return 0;
}
