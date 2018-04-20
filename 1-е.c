//Ошибка в функции push_test(). В ней создается список, который называется head,потом он передается в функцию push(). Но функция push не принимает аргумент типа List,она должна принимать только указатель на первый элемент этого списка.

#include <stdio.h>
#include <stdlib.h>

void push(struct node* head, int data) {
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = NULL;//исправление
	head = newNode;
}
void push_test() {
	List head = build();
	push(head, 1);
}