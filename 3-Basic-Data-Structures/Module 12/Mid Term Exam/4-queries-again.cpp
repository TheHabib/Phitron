#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value) {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size(Node *head) {
    Node *temp = head;
    int count = 0;
    while (temp != NULL) {
        ++count;
        temp = temp->next;
    }
    return count;
}

void print_normal(Node *head) {
    Node *temp = head;

    cout << "L -> ";

    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reversed(Node *tail) {
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_head(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;

    newNode->prev = tail;
    tail = tail->next;
}

void insert_at_position(Node *head, int pos, int val) {

    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    
    int q;
    cin >> q;
    while(q--) {
        int x, v;
        cin >> x >> v;
        if(x>size(head)) {
            cout << "Invalid" << endl;
        }
        else{
            if(x==0) {
                insert_head(head, tail, v);
                print_normal(head);
                print_reversed(tail);
            }
            else if(x==size(head)) {
                insert_tail(head, tail, v);
                print_normal(head);
                print_reversed(tail);
            }
            else{
                insert_at_position(head, x, v);
                print_normal(head);
                print_reversed(tail);
            }
        }
    }

    return 0;
}