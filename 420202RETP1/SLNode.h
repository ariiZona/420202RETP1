#pragma once

template <typename T>
class SLNode {
public:
	T date;
	SLNode<T>* next;

	SLNode(T data, SLNode<T>* next) {
		this->data = data;
		this->next = next;
	}
};