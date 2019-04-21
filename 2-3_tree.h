/*
 * File      : 2-3_tree.h
 * This file is part of evening practice
 * Change Logs:
 * Date             Author         	Notes
 * 20190301         ray       create file
 */ 

#ifndef UTILS_2_3_TREE_H_
#define UTILS_2_3_TREE_H_

#include "public.h"


struct TTNode
{
	char data2;
	char data3;
	uint8_t node_type;
	struct TTNode* lchild;
	struct TTNode* mchild;
	struct TTNode* rchild;
};

#endif /* UTILS_2_3_TREE_H_ */
