/*
 * File      : double_linked_list.h
 * This file is part of evening practice
 * Change Logs:
 * Date             Author         	Notes
 * 20190129         ray       create file
 */ 

#ifndef UTILS_DOUBLE_LINKED_LIST_H_
#define UTILS_DOUBLE_LINKED_LIST_H_

#include "public.h"

struct DLinkedList
{
	char data;
	struct DLinkedList* next;
	struct DLinkedList* pre;
};

bool double_linked_list_insert(const struct DLinkedList* ll, u32 index, struct DLinkedList* lsub);
bool double_linked_list_delete(struct DLinkedList* ll, u32 index);
void double_linked_list_print(const struct DLinkedList* ll);

#endif /* UTILS_DOUBLE_LINKED_LIST_H_ */
