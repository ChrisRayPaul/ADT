/*
 * File      : linked_list.h
 * This file is part of evening practice
 * Change Logs:
 * Date             Author         	Notes
 * 20190312         ray       create file
 */ 

#ifndef UTILS_LINKED_LIST_H_
#define UTILS_LINKED_LIST_H_


#include "public.h"


typedef struct item{

    uint32_t data;
    
}Item;


typedef struct node{

    Item item;
    struct node *next; 
}Node;



typedef Node*  LinkedList_t;


Node* ListInit(void);

uint32_t ListInsertAfter(LinkedList_t list, Item item);

uint32_t ListDeleteAfter(LinkedList_t list);

uint32_t ListGetItem(LinkedList_t list, uint32_t index);

uint32_t ListGetSize(LinkedList_t list);

uint32_t ListIsEmpty(LinkedList_t head);

uint32_t ListClear(LinkedList_t head);

uint32_t ListPrint(LinkedList_t head);



#endif /* UTILS_LINKED_LIST_H_ */
