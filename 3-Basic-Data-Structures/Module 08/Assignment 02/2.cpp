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


int find_val(Node* head, int x) {
    int index = 0;

    Node *pos = head;

    while(pos != NULL) {
        if(pos->value == x) {
            return index;
        }
        pos = pos->next;
        ++index;
    }
    return -1;
}


int main() {
    int t;
    int tmpval;
    cin >> t;

    while(t--) {
        Node *head = NULL;
        Node *tail = NULL;
        while (1) {
            cin >> tmpval;
            if (tmpval != -1) {
                insert_at_tail(head, tail, tmpval);
            }
            else {
                break;
            }
        }
        int x;
        cin >> x;

        cout << find_val(head, x) << endl;

    }


    return 0;

}