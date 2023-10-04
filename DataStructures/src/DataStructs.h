#pragma once

namespace DataStructures {
	struct Node {
		int data;
		Node* prev;
		Node* next;

		Node(int data) : data(data), prev(nullptr), next(nullptr) {}

		void set(Node* next, Node* prev) {
			this->prev = prev;
			this->next = next;
		}
	};

	class DoublyLinkedList {
	public:
		DoublyLinkedList();
		~DoublyLinkedList();

	private:
		Node* head;
		Node* tail;
	};
}