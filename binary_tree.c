/*
 * File      : binary_tree.c
 * This file is part of evening practice
 * Change Logs:
 * Date             Author         	Notes
 * 20180921         ray       create file
 */ 

#include "binary_tree.h"

bool binary_tree_insert(const struct BinaryTree *bt, struct BinaryTree *in)
{

	return TRUE;
}

void binary_tree_preorder(struct BinaryTree *bt)
{
	if (bt != NULL)
	{
		//printf("jjj");
		printf("%d ", bt->data);
		binary_tree_preorder(bt->lchild);
		binary_tree_preorder(bt->rchild);
	}

}

