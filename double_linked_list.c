/*
 * File      : double_linked_list.c
 * This file is part of evening practice
 * Change Logs:
 * Date             Author         	Notes
 * 20190129         ray       create file
 */ 

#include "double_linked_list.h"

static struct DLinkedList * _find_node(const struct DLinkedList *ll, u32 index)
{
	struct DLinkedList *l = (struct DLinkedList *) ll;
	if (l == NULL)
	{
		return NULL;
	}
	while (l->pre != NULL)
	{
		l = l->pre;
	}
	for (u32 i = 0; i < index; i++)
	{
		l = l->next;
		if (l == NULL)
		{
			return NULL;
		}
	}
	return l;
}

bool double_linked_list_insert(const struct DLinkedList* ll, u32 index, struct DLinkedList* lsub)
{
	struct DLinkedList *l, *temp = NULL;
	l = _find_node(ll, index);
	if (l == NULL)
	{
		return FALSE;
	}
	if (index == 0)
	{
		lsub->next = l;
		l->pre = lsub;
		lsub->pre = NULL;
	}
	else
	{
		temp = l->pre;
		temp->next = lsub;
		lsub->next = l;
		lsub->pre = temp;
		l->pre = lsub;
	}
	return TRUE;
}

bool double_linked_list_delete(struct DLinkedList* ll, u32 index)
{
	struct DLinkedList *l, *temp = NULL;
	l = _find_node(ll, index);
	if (l != NULL)
	{
		if (l->next == NULL)
		{
			temp = l->pre;
			temp->next = NULL;
		}
		else if (l->pre == NULL)
		{
			temp = l->next;
			temp->pre = NULL;
			l->pre = temp;
			l->next = NULL;
		}
		else
		{
			l = l->pre;
			temp = l->next->next;
			temp->pre = l;
			l->next = temp;
		}
	}
	else
	{
		return FALSE;
	}
	return TRUE;
}

void double_linked_list_print(const struct DLinkedList *ll)
{
	struct DLinkedList *l = (struct DLinkedList *) ll;
	while (l->pre != NULL)
	{
		l = l->pre;
	}
	while (l != NULL)
	{
		printf("%c ", l->data);
		l = l->next;
	}
	puts("");
	fflush(stdout);
}
