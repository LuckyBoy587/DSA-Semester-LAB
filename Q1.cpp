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

    if (size % 2 == 0) size--;
    for (int i=0; i<size / 2; i++) head = head->next;
    cout << head->data;
}






