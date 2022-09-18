#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i=a; i<=b; ++i)

class Node{
public:
	int data;
	Node *prev;
	Node(int n){
		data = n;
		prev = NULL;
	}
};

void Multiply(Node *tail, int n){
	Node *temp = tail, *prevNode = tail;
	int carry = 0;
	while(temp != NULL){
		int data = temp->data * n + carry;
		temp->data = data % 10;
		carry = data / 10;
		prevNode = temp;
		temp = temp->prev;
	}
	while(carry != 0){
		prevNode->prev = new Node((int)(carry % 10));
		carry = carry / 10;
		prevNode = prevNode->prev;
	}
}

void print(Node *tail){
	if(tail == NULL) return;
	print(tail->prev);
	cout << tail->data;
}	

int main(){
	int n = 5;
	Node tail(1);
	rep(i, 2, n)
	Multiply(&tail, i);
	print(&tail);
	cout << endl;
	return 0;
}