#include <iostream>

class Node {
public:
    int val;
    Node* next;

    // constructor
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == nullptr) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

void print_linkedlist(Node* head) {
    Node* tmp = head;
    while (tmp != nullptr) {
        std::cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void reverselist(Node*& head, Node* cur) {
    if (cur->next == nullptr) {
        head = cur;
        return;
    }
    reverselist(head, cur->next);
    cur->next->next = cur;
    cur->next = nullptr;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int val;

    while (true) {
        std::cin >> val;
        if (val == -1) {
            break;
        }
        insert_tail(head, tail, val);
    }

    Node* newHead = nullptr;
    Node* newTail = nullptr;
    Node* tmp = head;
    while (tmp != nullptr) {
        insert_tail(newHead, newTail, tmp->val);
        tmp = tmp->next;
    }

    reverselist(newHead, newHead);

    tmp = head;
    Node* tmp2 = newHead;
    int flag = 1;

    while (tmp != nullptr) {
        if (tmp->val != tmp2->val) {
            flag = 0;
            break;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }

    if (flag == 1) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    // // Free the memory
    // Node* current = head;
    // while (current != nullptr) {
    //     Node* next = current->next;
    //     delete current;
    //     current = next;
    // }

    return 0;
}
