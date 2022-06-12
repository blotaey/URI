#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string temp;
	int d1,d2,h1,h2,m1,m2,s1,s2;
	
	cin >> temp >> d1;
	cin >> h1 >> temp >> m1 >> temp >> s1;
	cin >> temp >> d2;
	cin >> h2 >> temp >> m2 >> temp >> s2;
	
	s1 = s2 - s1;
	m1 = m2 - m1;
	h1 = h2 - h1;
	d1 = d2 - d1;
	
	if(s1<0){
		s1+=60;
		m1--;
	}
	if(m1<0){
		m1+=60;
		h1--;
	}
	if(h1<0){
		h1+=24;
		d1--;
	}
	
	cout << d1 << " dia(s)" << endl;
	cout << h1 << " hora(s)" << endl;
	cout << m1 << " minuto(s)" << endl;
	cout << s1 << " segundo(s)" << endl;

	return 0;
}
