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




void insert_tail(Node *&head, Node *&tail, int value) {

    Node *newNode = new Node(value);

    if (tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

bool isPalindrome(Node *head, Node *tail) {
    if (head == NULL) {
        return true;
    }

    while (head != tail && head->prev != tail) {
        if (head->value != tail->value) {
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }

    return true;
}


int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (true) {
        cin >> value;
        if (value == -1){
            break;
	    }
        insert_tail(head, tail, value);
    }

    value = isPalindrome(head, tail);
    
    if(value == 1) {
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}