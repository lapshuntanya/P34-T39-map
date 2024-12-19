#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int> words;
	string text;

	do {
		cout << "Input text: ";
		cin >> text;

		if (words.find(text) == words.end()) {
			//words.insert(pair<string, int>(text, 1));
			words[text] = 1;
		}
		else {
			words[text]++;
		}
	} while (text != "stop");
	cout << "----------------------------------------------\n";

	words.erase("stop");
	for (auto item = words.begin(); item != words.end(); item++) {
		cout << item->first << " " << item->second << endl;
	}
}
