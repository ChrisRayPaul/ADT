/*
 * File      : linked_list.c
 * This file is part of evening practice
 * Change Logs:
 * Date             Author         	Notes
 * 20190312         ray       create file
 */ 

#include "linked_list.h"
#include "debug_log.h"


Node* ListInit(void)
{
    Node* head = (Node*)malloc(sizeof(Node));
    
    if(NULL == head)
    {
        return NULL;
    }
    
    head->next = NULL;
    return head;
}


uint32_t ListInsertAfter(LinkedList_t head, Item item)
{
    if(NULL == head)
    {
        return 0;
    }
    
    Node* tmp = head;
    
    while(tmp->next)
    {
        tmp = tmp->next;
    }
    
    Node* add = (Node*)malloc(sizeof(Node));
    if(NULL == add)
    {
        return 0;
    }
    
    add->item = item;
    add->next = NULL;
    
    tmp->next = add;
    
    return 1;
}


uint32_t ListDeleteAfter(LinkedList_t head)
{
    if(NULL == head)
    {
        return 0;
    }
    
    if(NULL == head->next)
    {
        return 0;
    }
    
    Node* find = head;
    Node* p = find;
    
    while(find->next)
    {
        p = find;
        find = find->next;
    }
    
    free(find);
    
    p->next = NULL;
    
    return 1;
    
}

uint32_t ListGetItem(LinkedList_t list, uint32_t index);

uint32_t ListGetSize(LinkedList_t list)
{
    uint32_t size = 0;
    
    if(NULL == list)
    {
        return 0;
    }
    
    if(NULL == list->next)
    {
        return 0;
    }
    
    
    Node* p = list;
    Node* q = p;
    
    while(p->next)
    {
        p = p->next;
        size++;
    }
    
    return size;
    
}

uint32_t ListIsEmpty(LinkedList_t head)
{
    if(NULL == head)
    {
        return 0;
    }
    
    if(NULL == head->next)
    {
        return 0;
    }
    
    return 1;
}

uint32_t ListClear(LinkedList_t head);

uint32_t ListPrint(LinkedList_t head)
{
    if(NULL == head)
    {
        return 0;
    }
    
    if(NULL == head->next)
    {
        DEBG_INFO("list empty\r\n");
        return 0;
    }
    
    
    while(head->next)
    {
        head = head->next;
        DEBG_INFO("data: %d\r\n", head->item.data);
        
    }
    
    return 1;
    
}


