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

    int diff;

    if (head == NULL || head->next == NULL) {
        diff = 0;
    }

    else{
        int maxVal = head->value;
        int minVal = tail->value;
        Node *pos = head;
        while(pos != NULL) {
            if(pos->value > maxVal) {
                maxVal = pos->value;
            }
            else if(pos->value < minVal) {
                minVal = pos->value;
            }
            pos = pos->next;
        }
        diff = maxVal - minVal;
    }

    cout << diff << endl;

    return 0;

}