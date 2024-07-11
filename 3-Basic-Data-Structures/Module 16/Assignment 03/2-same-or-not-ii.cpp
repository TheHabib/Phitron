#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


class myStack{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    
    void push(int val) {
        ++sz;
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop() {
        --sz;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL) {
            head = NULL;
        }
        else {
            tail->next = NULL;
        }

        delete deleteNode;
    }

    int top() {
        return tail->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        if (sz == 0) {
            return true;
        }    
        else{
            return false;
        }
    }
};


class myQueue{
public:

    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;


    void push(int val) {
        ++sz;
         
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop() {
        sz--;
         
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front() {
        return head->val;
    }
    int size() {
        return sz;
    }
    bool empty() {
        if (sz == 0) {
            return true;
        }    
        else{
            return false;
        }
    }
};

void check_same(myStack st, myQueue qu) {
    while(!qu.empty() && !st.empty()) {
        if(st.top() != qu.front()) {
            cout << "NO";
            return;
        }
        st.pop();
        qu.pop();
    }
    cout << "YES";
    return;
}

int main() {

    myStack st;
    myQueue qu;

    int n, m;
    cin >> n >> m;
    int nval=n, mval=m;
    int val;
    while(n--) {
        cin >> val;
        st.push(val);
    }
    while(m--) {
        cin >> val;
        qu.push(val);
    }

    if(nval != mval) {
        cout << "NO";
    }
    else{
        check_same(st, qu);
    }

    return 0;
}