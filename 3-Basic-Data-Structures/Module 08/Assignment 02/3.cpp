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

void insert_at_tail(Node *&head, Node *&tail, int val)
{

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


bool list_compare(Node* head1, Node* head2) {
    Node* pos1 = head1;
    Node* pos2 = head2;
    while(pos1 != NULL && pos2 != NULL) {
        if(pos1->value != pos2->value) return false;
        pos1 = pos1->next;
        pos2 = pos2->next;
    }
    return pos1 == NULL && pos2 == NULL;
}


int main() {
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int x;

    while (1) {
        cin >> x;
        if (x != -1) {
            insert_at_tail(head1, tail1, x);
        }
        else {
            break;
        }
    }

    while (1) {
        cin >> x;
        if (x != -1) {
            insert_at_tail(head2, tail2, x);
        }
        else {
            break;
        }
    }
    
    if(list_compare(head1, head2) == false) {
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    return 0;

}