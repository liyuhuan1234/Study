﻿#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include"Queue.h"

typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;



void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}


	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}


void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	InOrder(root->left);
	printf("%c ", root->data);
	InOrder(root->right);
}




void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->data);
}


//1.int size = 0;
//void TreeSize(BTNode* root)
//{
//	if (root == 0)
//	{
//		return;
//	}
//	else
//	{
//		++size;
//	}
//
//	TreeSize(root->left);
//	TreeSize(root->right);
//}



//2.void TreeSize(BTNode* root,int* psize)
//{
//	if (root == 0)
//	{
//		return;
//	}
//	else
//	{
//		++(*psize);
//	}
//
//	TreeSize(root->left,psize);
//	TreeSize(root->right,psize);
//}


int TreeSize(BTNode* root)
{
	return root== NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}

int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}

void LealOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front->data);

		if (front->left)
		{
			QueuePush(&q, front->left);
		}
		if (front->right)
		{
			QueuePush(&q, front->right);
		}
	}

	printf("\n");
	QueueDestroy(&q);
}


int main()
{
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	A->data = 'A';
	A->left = NULL;
	A->right = NULL;


	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 'B';
	B->left = NULL;
	B->right = NULL;

	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 'C';
	C->left = NULL;
	C->right = NULL;

	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';
	D->left = NULL;
	D->right = NULL;

	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';
	E->left = NULL;
	E->right = NULL;

	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;

	PrevOrder(A);
	printf("\n");

	InOrder(A);
	printf("\n");

	PostOrder(A);
	printf("\n");

	//1.TreeSize(A);
	//printf("TreeSize:%d\n", size);

	//size = 0;
	//TreeSize(B);
	//printf("TreeSize:%d\n", size);

	//2.int Asize = 0;
	//TreeSize(A,&Asize);
	//printf("TreeSize:%d\n", Asize);

	//int Bsize = 0;
	//TreeSize(B,&Bsize);
	//printf("TreeSize:%d\n", Bsize);


	printf("TreeSize:%d\n", TreeSize(A));
	printf("TreeSize:%d\n", TreeSize(B));

	printf("TreeLeafSize:%d\n", TreeLeafSize(A));


	LealOrder(A);




	return 0;
}