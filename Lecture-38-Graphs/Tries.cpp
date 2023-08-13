#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
	char ch;
	unordered_map<char, node*> h;
	bool isTerminal;
	node(char c) {
		ch = c;
		isTerminal = false;
	}
};

class Tries {
public:
	node* root;

	Tries() {
		root = new node('\0');
	}

	void addWord(string &word) {
		node* temp = root;

		for (int i = 0; i < word.size() ; i++) {
			char ch = word[i];
			if (temp->h.count(ch) == 1) {
				temp = temp->h[ch];
			}
			else {
				temp->h[ch] = new node(ch);
				temp  =  temp->h[ch];
			}
		}

		temp->isTerminal = true;
	}

	bool search(string& word) {
		node* temp = root;

		for (int i = 0; i < word.size(); i++) {
			char ch = word[i];
			// Agar ch exist krta hai temp ke hashmap mei, toh jaao uspr, otherwise word nhi h trie mei
			if (temp->h.count(ch) == 1) {
				temp = temp->h[ch];
			}
			else return false;
		}

		return temp->isTerminal;
	}
};

int main() {

	Tries t;

	string words[] =  {
		"Hello", "World", "Coding", "Coder", "Hacker"
	};

	for (int i = 0; i < 5; ++i)
	{
		t.addWord(words[i]);
	}

	while (1) {
		string x;
		cin >> x;

		if (t.search(x)) cout << "Present hai\n";
		else cout << "Nahi hai\n";
	}

	return 0;
}
















