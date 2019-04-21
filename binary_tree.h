/*
 * File      : binary_tree.h
 * This file is part of evening practice
 * Change Logs:
 * Date             Author         	Notes
 * 20180921         ray       create file
 */ 

#ifndef UTILS_BINARY_TREE_H_
#define UTILS_BINARY_TREE_H_

#include "public.h"

struct BinaryTree
{
	uint32_t data;
	struct BinaryTree *lchild,*rchild;
};

bool binary_tree_insert(const struct BinaryTree *bt,struct BinaryTree *in);
void binary_tree_preorder(struct BinaryTree *bt);


#endif /* UTILS_BINARY_TREE_H_ */
