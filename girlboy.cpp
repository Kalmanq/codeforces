#include<iostream>
#include<set>
using namespace std;

int main(){
	string s; cin >> s;
	set<char>c(s.begin() , s.end());//set container
	cout << (c.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
	
}
