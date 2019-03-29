#include <bits/stdc++.h>
using namespace std;
int n;
map<string, int> cnt;

void process_line(string &);

int main(int argc, char *argv[]) {
	cin>>n;
	cin.ignore();
	string line;
	for(int i = 0; i<n; i++){
		getline(cin, line);
		process_line(line);
	}
	for(auto it : cnt)
		cout<<it.first<<" "<<it.second<<endl;
    return 0;
}

void process_line(string &str){
	stringstream ss(str);
	string country;
	ss>>country;
	cnt[country]++;
}
