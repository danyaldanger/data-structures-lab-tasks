#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class Node {
public:
    std::string ip;
    Node* prev;
    Node* next;
    
    Node(const std::string& ipAddr) : ip(ipAddr), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insert(const std::string& ip) {
        Node* newNode = new Node(ip);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayForward() {
        std::cout << "Forward traversal:\n";
        Node* current = head;
        while (current) {
            std::cout << current->ip;
            if (current->next) std::cout << " -> ";
            current = current->next;
        }
        std::cout << "\n\n";
    }

    void displayBackward() {
        std::cout << "Backward traversal:\n";
        Node* current = tail;
        while (current) {
            std::cout << current->ip;
            if (current->prev) std::cout << " -> ";
            current = current->prev;
        }
        std::cout << "\n\n";
    }

    ~DoublyLinkedList() {
        Node* current = head;
        while (current) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    DoublyLinkedList list;
    std::ifstream file("ips.txt");
    
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open ips.txt\n";
        return 1;
    }

    std::string line;
    if (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string ip;
        while (std::getline(ss, ip, ',')) {
            ip.erase(0, ip.find_first_not_of(" \t\r\n"));
            ip.erase(ip.find_last_not_of(" \t\r\n") + 1);
            list.insert(ip);
        }
    }

    list.displayForward();
    list.displayBackward();

    file.close();
    return 0;
}
