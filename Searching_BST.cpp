#include<iostream>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int val) {
		this->data = val;
		this->left = NULL;
		this->right = NULL;
	}
};

node* search_BST(node* root, int key) {
	if (root == NULL) {
		// no such node with key exists!
		return NULL;
	}
	if (root->data == key) {
		cout << "Key Found!" << endl;
		return root;
	}
	if (root->data < key) {
		search_BST(root->right, key);
	}
	else {
		search_BST(root->left, key);
	}
}

node* insertBST(node* root, int val) {
	if (root == NULL) {
		return new node(val);
	}
	if (root->data > val) {
		root->left = insertBST(root->left, val);
	}
	else if (root->data < val) {
		root->right = insertBST(root->right, val);
	}

	return root;
}


int main() {

	node* root = NULL;
	root = insertBST(root, 5);
	insertBST(root, 1);
	insertBST(root, 3);
	insertBST(root, 2);
	insertBST(root, 4);
	insertBST(root, 7);

	if (!search_BST(root, 2)) {
		cout << "Key not found!" << endl;
	}


	return 0;
}