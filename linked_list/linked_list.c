#include<stdio.h>
#include<stdlib.h>

//定义链表节点结构体
struct Node {
    int data;
    struct Node* next;
}

//创建节点
struct Node* create_new_node(int data){
   struct Node* new_node = (struct *Node)malloc(sizeof(struct Node*));
    new_node->data = data;
    new_node->next = NULL;
return new_node;
}

//插入节点
void append(struct Node** head,int data){
   //如果插入的链表头节点为空的话,那新建的节点就为头节点;
   struct Node* new_node = create_new_node(data);
   if(*head == NULL){
         *head = new_node;
         return;
   }
//如果不是头节点, 那么就从头节点遍历寻找链表的最后一个节点;
struct Node* current = *head;
  while(current->next != NULL;){
    current = current->next;
  }
current->next = new_node;
} 


//输出一个链表:


//简单链表实现
int main(){
 
   return 0;
}