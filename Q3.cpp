#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
    }
};

int main(){
    int size;
    cin >> size;

    Node *head = nullptr, *tail;
    for (int i=0; i<size; i++) {
        int num;
        cin >> num;

        if (head == nullptr) {
            head = new Node(num);
            tail = head;
        } else {
            tail->next = new Node(num);
            tail = tail->next;
        }
    }
    tail->next = head;

    int target;
    cin >> target;

    Node *temp = head;
    do {
        if (temp->data == target) {
            cout << "Value found in the list";
            return 0;
        }

        temp = temp->next;
    } while (temp != head);
    cout << "Value not found in the list";
}






