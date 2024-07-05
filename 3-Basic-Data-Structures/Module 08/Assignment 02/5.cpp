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

void insert_at_tail(Node *&head, Node *&tail, int val) {

    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }

}

void remove_duplicate(Node *&head) {
    if(head == NULL) {
        return;
    }

    for(Node *ipos = head; ipos != NULL; ipos = ipos->next) {
        Node *jpos = ipos;
        while(jpos->next != NULL) {
            if(ipos->value == jpos->next->value) {
                Node *delete_node = jpos->next;
                jpos->next = jpos->next->next;
                delete delete_node;
            }
            else{
                jpos = jpos->next;
            }
        }
    }

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
    Node *tail = NULL;
    int x;

    while (1) {
        cin >> x;
        if (x != -1) {
            insert_at_tail(head, tail, x);
        }
        else {
            break;
        }
    }

    remove_duplicate(head);


    print_linekd_list(head);

    return 0;

}