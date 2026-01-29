#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100 

typedef int ElemType;

typedef struct {
  //数据域数组
    ElemType data[MAXSIZE];
    int length;
} SeqList;

void initList(SeqList *list){
   list->length = 0;
}

int main(){
  SeqList list;
  initList(&list);

  printf("list's length-> %d\n", list.length);
  printf("list's size %zu",sizeof(list.data));

  return 0;
}