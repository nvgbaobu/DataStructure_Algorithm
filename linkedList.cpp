#include <iostream>
#include <stdio.h>
using namespace std;

struct Node {
	double data;
	Node* next;
};

Node* createNode(double value) {
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = nullptr;
	return newNode;
}

Node* insertNode(Node* head, double value) {
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = head;
	return newNode;
}

Node* deleteNode(Node* head, double value) {
	if (head == nullptr) return head;
	if (head->data == value) {
		Node* temp = head;
		head = head->next;
		delete temp;
		return head;
	}
	Node* current = head;
	while (current->next != nullptr && current->next->data != value) {
		current = current->next;
	}
	if (current->next != nullptr) {
		Node* temp = current->next;
		current->next = current->next->next;
		delete temp;
	}
	return head;
}