#include <bits/stdc++.h>
using namespace std;
vector<int> left_tree;
vector<int> right_tree;
class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


Node *input_tree() {
    int val;
    cin >> val;
    Node *root;  
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    
    queue<Node *> q;
    

    if (root) 
        q.push(root);
    while (!q.empty()) {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;

        Node *myLeft; 
        Node *myRight;
        
        
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}


void leftorder(Node *root) {
    if (root == NULL) {
        return;
    }

    left_tree.push_back(root->val);

    leftorder(root->left);

    if (root->left == NULL) {
        leftorder(root->right);
    }
}

void rightorder(Node *root) {
    if (root == NULL) {
        return;
    }
    right_tree.push_back(root->val);
    rightorder(root->right);
    if (root->right == NULL) {
        rightorder(root->left);
    }
}


int main() {
    Node *root = input_tree();

    leftorder(root->left);
    rightorder(root->right);
    reverse(left_tree.begin(), left_tree.end());
    vector<int> outer_tree;
    outer_tree.insert(outer_tree.end(), left_tree.begin(), left_tree.end());
    outer_tree.push_back(root->val);
    outer_tree.insert(outer_tree.end(), right_tree.begin(), right_tree.end());
    for(auto i:outer_tree) {
        cout << i << " ";
    }

    return 0;
}