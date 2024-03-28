class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };

    Node* head;

public:
    MyLinkedList() {
        head = nullptr;
    }

    int get(int index) {
        Node* curr = head;
        for (int i = 0; i < index && curr; ++i) {
            curr = curr->next; 
        }
        return curr ? curr->val : -1;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* curr = head;
        while (curr->next) {
            curr = curr->next;
        }
        curr->next = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* curr = head;
        for (int i = 0; i < index - 1 && curr; ++i) {
            curr = curr->next;
        }
        if (curr) {
            newNode->next = curr->next;
            curr->next = newNode;
        }
    }

    void deleteAtIndex(int index) {
        if (index == 0) {
            if (head) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
            return;
        }
        Node* curr = head;
        for (int i = 0; i < index - 1 && curr; ++i) {
            curr = curr->next;
        }
        if (curr && curr->next) {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
    }
};
