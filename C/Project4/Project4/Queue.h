#pragma once

#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>

struct BinaryTreeNode;
typedef struct BinaryTreeNode* QDataType;

typedef struct QueueNode
{
    struct QueueNode* next;
    QDataType data;
}QueueNode;

typedef struct Queue
{
    QueueNode* head;
    QueueNode* tail;
    //size_t _size;
}Queue; 


//void QueueInit(QueueNode** pphead, QueueNode** pptail);
void QueueInit(Queue* pq);
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq, QDataType x);
void QueuePop(Queue* pq);
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);