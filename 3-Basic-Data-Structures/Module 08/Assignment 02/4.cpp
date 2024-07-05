#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node *next;
    Node(int val) {
        this->value = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, int value) {
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}


void insert_at_tail(Node *&head, int val) {

    Node *newNode = new Node(val);
    
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void delete_head(Node *&head) {
    Node* delete_node = head;
    head = head->next;
    delete delete_node;
}

void delete_at_position(Node *&head, int position) {

    if(head == NULL) return;
    
    if(position == 0) {
        delete_head(head);
        return;
    }

    Node *temp = head;

    for (int i = 0; temp != NULL && i < position-1; i++) {
        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL) return;

    Node* delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
}


void print_linekd_list(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;

    int t, x, v;
    cin >> t;
    while(t--) {
        cin >> x >> v;

        if(x==0) {
            insert_at_head(head, v);
        }
        else if(x==1) {
            insert_at_tail(head, v);
        }
        else if(x==2) {
            delete_at_position(head, v);
        }

        print_linekd_list(head);

    }

    return 0;

}