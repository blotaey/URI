#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, max = 0, input = 0;
	
	for(int i = 1; i<=100; i++){
		cin >> n;
		if(n>max){
			max = n;
			input = i;
		}
	}
	
	cout << max << endl;
	cout << input << endl;
	
	return 0;
}
