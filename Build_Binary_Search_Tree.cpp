#include<iostream>
using namespace std;

struct node {

	int data;
	node* left;
	node* right;

	node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}

};


node* insertBST(node* root, int val) {
	if (root == NULL) {
		return new node(val);
	}
	if (root->data > val) {
		root->left = insertBST(root->left, val);
	}
	else if (root->data < val) {
		root->right =  insertBST(root->right, val);
	}

	return root;
}


void inorder_traversal(node* root) {
	if (root == NULL) {
		return;
	}

	inorder_traversal(root->left);
	cout << root->data << " ";
	inorder_traversal(root->right);
}

void preorder_traversal(node* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	preorder_traversal(root->left);
	preorder_traversal(root->right);
}

void postorder_traversal(node* root) {
	if (root == NULL) {
		return;
	}

	postorder_traversal(root->left);
	postorder_traversal(root->right);
	cout << root->data << " ";
}

int main() {

	node* root = NULL;
	root = insertBST(root, 5);
	insertBST(root, 1);
	insertBST(root, 3);
	insertBST(root, 2);
	insertBST(root, 4);
	insertBST(root, 7);

	cout << "In-order Traversal" << endl;
	inorder_traversal(root);
	cout << endl;


	cout << "Pre-order Traversal" << endl;
	preorder_traversal(root);
	cout << endl;

	cout << "Post-order Traversal" << endl;
	postorder_traversal(root);
	cout << endl;


	return 0;
}


// Output:
In-order Traversal
1 2 3 4 5 7
Pre-order Traversal
5 1 3 2 4 7
Post-order Traversal
2 4 3 1 7 5
