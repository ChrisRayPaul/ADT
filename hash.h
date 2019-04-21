/*
 * File      : hash.h
 * This file is part of evening practice
 * Change Logs:
 * Date             Author         	Notes
 * 20190322         ray       create file
 */ 

#ifndef UTILS_HASH_H_
#define UTILS_HASH_H_

#include "public.h"


struct HashNode
{
	void *data;
	struct HashNode *next;
};
struct HashTable
{
	struct HashNode *items;
	uint32_t length;
};
typedef struct HashTable* HashTable;
HashTable hash_create(uint32_t length);
uint32_t hash(char* s);
bool hash_add(HashTable ht,char* s);
void hash_show(HashTable ht);
#endif /* UTILS_HASH_H_ */
