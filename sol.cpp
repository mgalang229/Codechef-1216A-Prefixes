#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=2*1e5;
char a[mxN];

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int cnt=0;
	for(int i=0; i<n; i+=2) {
		if(!((a[i]=='a'&&a[i+1]=='b')||(a[i]=='b'&&a[i+1]=='a')))  {
			if(a[i]=='a')
				a[i]='b';
			else
				a[i]='a';
			cnt++;
		}
	}
	cout << cnt << "\n";
	for(int i=0; i<n; ++i)
		cout << a[i];
	cout << "\n";
}
