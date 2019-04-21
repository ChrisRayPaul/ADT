/*
 * File      : hash.c
 * This file is part of evening practice
 * Change Logs:
 * Date             Author         	Notes
 * 20190322         ray       create file
 */ 

#include "hash.h"

HashTable hash_create(u32 length)
{
	HashTable ht = malloc(sizeof(struct HashTable));
	ht->items = malloc(sizeof(struct HashNode) * length);
	memset(ht->items,0,sizeof(struct HashNode) * length);
	ht->length=length;
	return ht;
}

u32 hash(char* s)
{
	u32 r = 0;
	while (*s)
	{
		r = r * 31 + (*s);
		s++;
	}
	return r;
}

bool hash_add(HashTable ht, char* s)
{
	u32 h=hash(s);
	u32 id=h%ht->length;
	if(ht->items[id].data==NULL)
	{
		ht->items[id].data = malloc(strlen(s)+1);
		memcpy(ht->items[id].data,s,strlen(s)+1);
		return TRUE;
	}
	else
	{
		struct HashNode *p=&ht->items[id];
		while(TRUE)
		{
			if(strcmp(p->data,s)==0)
			{
				return FALSE;
			}
			if(p->next==NULL)
			{
				break;
			}
			p=p->next;
		}
		p->next=malloc(sizeof(struct HashNode));
		p->next->data=malloc(sizeof(strlen(s)+1));
		memcpy(p->next->data,s,strlen(s)+1);
		p->next->next=NULL;
	}
	return TRUE;
}

void hash_show(HashTable ht)
{
	u32 sum=0;
	for(int i=0;i<ht->length;i++)
	{
		printf("%03d :",i);
		struct HashNode *p=&ht->items[i];
		while(p!=NULL)
		{
			if(p->data!=NULL)
			{
				printf("%s->",(char*)p->data);
				sum++;
			}
			p=p->next;
		}
		puts("NULL");
	}
	printf("count:%u\n",sum);
}
