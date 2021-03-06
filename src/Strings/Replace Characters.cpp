#include <cstdlib>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){

	char i;
	unordered_map<char, char> mp;			// or using char[] array
	for (i = 'a'; i <= 'z'; i++) mp[i] = i;

	string str = "aabbccdd";
	vector<pair<char, char>> queries;
	queries.push_back(make_pair('a', 'b'));
	queries.push_back(make_pair('c', 'd'));
	queries.push_back(make_pair('d', 'a'));

	char x, y;
	for (int j = 0; j < (int)queries.size(); j++) {
		x = queries[j].first;
		y = queries[j].second;

// 		for (i = 'a'; i <= 'z'; i++)   if (mp[i] == x) mp[i] = y, t = i;
// 		for (i = 'a'; i <= 'z'; i++)   if (mp[i] == y && i != t) mp[i] = x;
		for (i = 'a'; i <= 'z'; i++)   {
		    if (mp[i] == x)     { mp[i] = y; }
		    else if(mp[i] == y) { mp[i] = x; }
		}
	}

	for (int j = 0; j < (int)str.size(); ++j)
		cout << mp[str[j]];
	cout << endl;

	return 0;
}
