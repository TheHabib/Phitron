#include <bits/stdc++.h>
using namespace std;
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


string level_order(Node *root) {
    if (root == NULL) {
        return "YES";
    }
    queue<Node *> q;
    q.push(root);
    
    while (!q.empty()) {
        Node *f = q.front();
        q.pop();
        //hoy right left duipashei thakte hobe, naile konopashe thaka jabena
        if((f->left != NULL && f->right == NULL) || (f->left ==NULL && f->right != NULL)) {
            return "NO";
        }

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return "YES";
}


int main() {
    Node *root = input_tree();
    cout << level_order(root) << endl;
    return 0;
}