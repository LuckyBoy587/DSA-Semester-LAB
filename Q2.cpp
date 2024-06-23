#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;

    Node(int data) {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};

int main(){
    int size;
    cin >> size;

    Node *head = nullptr, *tail = nullptr;
    for (int i=0; i<size; i++) {
        int num;
        cin >> num;

        Node *currNode = new Node(num);
        if (head == nullptr) {
            head = currNode;
            tail = currNode;
        } else {
            currNode->next = head;
            head->prev = currNode;
            head = currNode;
        }

        cout << "Node inserted at the beginning successfully!\n";
    }

    cout << "Elements in the list: ";
    while (head != nullptr) {
        cout << head->data << ' ';
        head = head->next;
    }
}






