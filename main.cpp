#include <bits/stdc++.h>
using namespace std;
int n;
map<string, int> cnt;

int main(int argc, char *argv[]) {
	cin>>n;
	cin.ignore();
	for(int i = 0; i<n; i++){
		string line;
		getline(cin, line);
		stringstream ss(line);
		string country;
		getline(ss, country, ' ');
		cnt[country]++;
	}
	for(auto it : cnt)
		cout<<it.first<<" "<<it.second<<endl;
    return 0;
}
