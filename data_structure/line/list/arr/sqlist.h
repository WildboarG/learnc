#ifndef SQLIST_H__
#define SQLIST_H__

#define DATASIZE 1024

typedef int datatype;

typedef struct node_st{
	datatype data[DATASIZE]; //顺序表数组
	int last;  //计数器
}sqlist;

sqlist *sqlist_create(); //创建表 返回表指针
void sqlist_create1();
int sqlist_insert(sqlist *,int i,datatype *);  //增加数据，特定位置，要插入数据的变量地址  ，返回值指针
int sqlist_delete(sqlist *,int i);  //删除数据
int sqlist_find(sqlist *,datatype *);//查找数据 ，返回下标

int sqlist_isempty(sqlist *); //线性表是否为空 返回状态
int sqlist_setempty(sqlist *); // 线性表设置为空
int sqlist_getnum(sqlist *); //线性表一共有多少元素
void sqlist_display(sqlist *); //遍历
int sqlist_destory(sqlist *);  //销毁表 返回状态
int sqlist_union(sqlist *,sqlist *); //合并线性表

#endif
