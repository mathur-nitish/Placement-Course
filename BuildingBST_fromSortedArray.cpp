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


void inorder_traversal(node* root) {
	if (root == NULL) {
		return;
	}

	inorder_traversal(root->left);
	cout << root->data << " ";
	inorder_traversal(root->right);
}

node* sortedArrayToBST(int arr[], int s, int e) {
	// base condition -> if start exceeds end, array ends
	if (s > e) {
		return NULL;
	}

	// maintaining mid to get the root
	int mid = (s + e) / 2;

	// creating node for root (value)
	node* root = new node(arr[mid]);

	// calling recursive funtions for left and right subtree
	root->left = sortedArrayToBST(arr, s, mid - 1);
	root->right = sortedArrayToBST(arr, mid + 1, e);

	return root;

}


int main() {
	node* root = NULL;
	int arr[5] = { 1,2,3,4,5 };
	root = sortedArrayToBST(arr, 0, 4);

	// printing inorder
	cout << "Inorder Traversal : ";
	inorder_traversal(root);


	return 0;
}