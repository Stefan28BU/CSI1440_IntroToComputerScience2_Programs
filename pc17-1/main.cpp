/*
 * author: Yufan Xu
 * assignment: pc17-3
 */

#include <iostream>

using namespace std;

struct ListNode {
    double data;
    ListNode *next;

    ListNode(ListNode *ptr = NULL, double val = NULL) {
        this->next = ptr;
        this->data = val;
    }
};

class LinkedList {
private:
    ListNode *head;
public:
    LinkedList() {
        this->head = NULL;
    }

    void add(double val) {
        head = new ListNode(head, val);
    }

    void printList() {
        ListNode *temp = this->head;

        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    bool isMember(double val) {
        ListNode *temp = this->head;

        while (temp != NULL) {
            if (val == temp->data) {
                return true;
            }
            temp = temp->next;

        }
        return false;
    }

    LinkedList(const LinkedList& that) {
        this->head = NULL;
        ListNode *newNode;
        ListNode *ptr;
        ListNode *temp;

        if (!that.head) {
            return;
        }
        ptr = that.head;
        head = new ListNode;
        head->data = ptr->data;
        head->next = NULL;
        ptr = ptr->next;
        temp = this->head;

        while (ptr != NULL) {
            newNode = new ListNode;
            newNode->data = ptr->data;
            newNode->next = NULL;
            temp->next = newNode;
            temp = newNode;
            ptr = ptr->next;
        }
    }
};

int main() {
    LinkedList list;
    list.add(12311);
    list.add(15);
    list.add(99121);
    list.add(1.12312);
    list.add(13);

    list.isMember(16);

    if (list.isMember(16)) {
        cout << "16 is a member" << endl;
    }
    else {
        cout << "16 is not a member" << endl;
    }

    if (list.isMember(15)) {
        cout << "15 is a member" << endl;
    }
    else {
        cout << "15 is not a member" << endl;
    }

    list.printList();

    return 0;
}