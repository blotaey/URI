#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i,count=0,value;
	
	for(i=1;i<=5;i++){
		cin >> value;
		if(value%2==0){
			count++;
		}
	}
	
	cout << count << " valores pares";
	
	return 0;
}
