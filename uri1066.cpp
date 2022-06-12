#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int value,count1=0,count2=0,count3=0,count4=0;
	
	for(int i=1;i<=5;i++){
		cin>>value;
		if(abs(value)%2==0){
			count1++;
			if(value>0){
				count3++;
			}
			else if (value < 0){
				count4++;
			}
		}
		else{
			count2++;
			if(value>0){
				count3++;
			}
			else if (value < 0){
				count4++;
			}
		}
	}
	cout << count1 << " valor(es) par(es)" << endl;
	cout << count2 << " valor(es) impar(es)" << endl;
	cout << count3 << " valor(es) positivo(s)" << endl;
	cout << count4 << " valor(es) negativo(s)" << endl;

	return 0;
}
