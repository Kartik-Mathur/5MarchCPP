#include <iostream>
using namespace std;

class node {
public:
	string key;
	int val;
	node* next;
	node(string s, int k) {
		key = s;
		val = k;
		next = NULL;
	}
};

class hashmap {
	node** a;
	int cs;
	int ts;

	int hashFunction(string key) {
		int ans = 0 ;
		int mul = 1;
		for (int i = 0; i < key.size(); ++i)
		{
			ans += (key[i] % ts) * (mul % ts);
			ans %= ts;
			mul *= 17;
			mul %= ts;
		}

		return ans % ts;
	}

	void rehashing() {
		node** olda = a;
		int oldts = ts;

		a = new node*[2 * ts];
		ts *= 2;
		cs = 0;
		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}

		for (int i = 0; i < oldts; ++i)
		{
			node* head = olda[i];
			while (head) {
				insert(head->key, head->val);

				head = head->next;
			}
		}

		delete[]olda;
		olda = NULL;
	}


public:

	hashmap(int s = 7) {
		cs = 0;
		ts = s;

		a = new node*[ts];
		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}
	}

	void insert(string key, int val) {
		int i = hashFunction(key);

		node* x = new node(key, val);
		x->next = a[i];
		a[i] = x;
		cs++;

		float loadFactor = cs / (ts * 1.0);
		if (loadFactor > 0.6) {
			rehashing();
		}
	}

	void print() {
		for (int i = 0; i < ts; ++i)
		{
			node* head = a[i];
			cout << i << "-->";
			while (head) {
				cout << "(" << head->key << "," << head->val << ") ";
				head = head->next;
			}
			cout << endl;
		}
	}
};

int main() {

	hashmap h;

	h.insert("Mango", 100);
	h.insert("Apple", 120);
	h.insert("kiwi", 50);
	h.insert("Pineapple", 140);
	h.insert("banana", 60);
	h.insert("Orange", 160);
	h.insert("Anaar", 110);
	h.insert("Grapes", 30);
	h.insert("Aadu", 300);

	h.print();



	return 0;
}
















