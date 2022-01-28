#ifndef LIST_H__
#define LIST_H__
typedef int datatype;

typedef struct node_st{
		datatype data;   //4
		struct node_st *next; //8  由于自动对齐 = 16
}list;

list *list_create();                         //创建有头的单项链表
int list_insert_at(list *,int i, datatype *);//按 序号插入链表
int list_order_insert(list *,datatype *);    // 按值的排序插入链表

int list_delete_at(list *,int i,datatype *); //按序号删除链表的值
int list_delete(list *,datatype *);          //删除链表的值

int list_find(list *,int i);                 //按序号查找链表的值

int list_isempty(list *);                   //判断链表是否为空
void list_display(list *);                  //显示链表的值
void list_destroy(list *);                  //释放内存

#endif
