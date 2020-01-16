#include <iostream>

using namespace std;

struct ListNode {
public:
    string data;
    ListNode *next;
};

ListNode *insert(ListNode *ptr, string val) {
    ListNode *temp = new ListNode;
    temp->next = ptr;
    temp->data = val;
    ptr = temp;
    return ptr;
}

void insert(ListNode **ptr, string val) {
    ListNode *temp = new ListNode;
    temp->next = *ptr;
    temp->data = val;
    *ptr = temp;
}

ListNode *remove(ListNode *ptr) {
    ListNode *temp = ptr->next;
    ptr->next = NULL;
    ptr = temp;
    return ptr;
}

void remove(ListNode **ptr) {
    ListNode *temp = *ptr;
    (*ptr)->next = NULL;
    *ptr = temp;
}

void printForward(ostream& out, ListNode *ptr) {
    if (ptr != NULL) {
        out << ptr->data << " ";
        printForward(out, ptr->next);
    }
}

void printReverse(ostream& out, ListNode *ptr) {
    if (ptr != NULL) {
        printReverse(out, ptr->next);
        out << ptr->data << " ";
    }
}

int main() {
    ListNode *head = new ListNode;
    head->next = NULL;
    head = insert(head, "hi");
    insert(&head, "hello");
    printForward(cout, head);
    printReverse(cout, head);

    return 0;
}