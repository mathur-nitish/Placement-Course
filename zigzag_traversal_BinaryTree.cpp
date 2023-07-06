#include<iostream>
#include<stack>
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

void zigzagTraversal(node* root) {

    // base condition
    if (root == NULL) {
        return;
    }

    // creating required stacks
    stack<node*> currlvl;
    stack<node*> nxtlvl;
    
    // pushing nodes into current traversing level
    currlvl.push(root);

    // to get the direction for traversal
    bool LeftToRight = true;

    while (!currlvl.empty()) {

        node* temp = currlvl.top();
        currlvl.pop();

        // if top of currlvl is valid (temp is valid)
        if (temp) {
            cout << temp->data << " ";


            // traversing in left to right direction
            if (LeftToRight) {
                if (temp->left) {
                    nxtlvl.push(temp->left);
                }
                if (temp->right) {
                    nxtlvl.push(temp->right);
                }

            }

            else {

                if (temp->right) {
                    nxtlvl.push(temp->right);
                }
                
                if (temp->left) {
                    nxtlvl.push(temp->left);
                }


            }

        }
        if (currlvl.empty()) {
            LeftToRight = !LeftToRight;
            swap(currlvl, nxtlvl);
        }

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

void preorder_traversal(node* root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

int main() {

    node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 2);
    insertBST(root, 4);
    insertBST(root, 7);

    
    preorder_traversal(root);
    cout << endl;
    zigzagTraversal(root);

    return 0;
}
