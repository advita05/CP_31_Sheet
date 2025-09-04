#include<bits/stdc++.h>
using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int T;
	cin>>T;
	while(T--) {
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b<=d&&c<=a+d-b) {
			cout<<(d-b)+(a+d-b-c)<<"\n";
		} else {
			cout<<"-1\n";
		}
	}
}