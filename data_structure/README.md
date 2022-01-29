# 数据结构

---



### - 顺序表存储



![](https://s3.bmp.ovh/imgs/2022/01/a7d435423dda8baa.png)

- 顺序表（数组类型）的大小是先给定的

- 线性表包括定容的`数组存储区` 以及`计数器`两部分组成

- 线性表数据存放一定是`连续`的

- ```c
  typedef int datatype;  //类型别名
  typedef struct node_st{
      datatype data[1024]; //数组存储区
      int last;   //计数器
      
  }sqlist;
  void sqlist_cteate(sqlist **ptr){
      *ptr =malloc(sizeof(**ptr));
      if (*ptr == NULL){
          return ;
      }
      (*ptr)->last = -1;     //刚创建的表 计数器置为-1
      return ;
  }
  //插入内容sqlist 返回状态
  int sqlist_insert(sqlist *list,int i,datatype *data){
      int j;
      if(list->last==1023){  //防止表溢出
          return -1;
      }
      if(i<0 || i>list->last+1){ // 防止插入位置不对
          return -2;
      }
      // 假如表中原有三个数 要插入在第二个位置，j=3  2<3  j-- 将3中的数据往后挪一次，直到把第2个位置空出来，填入新的数据 ，计数器记得+1 
      for(j=list->last;i<=j;j--){
          list->data[j+1]=list->data[j];
      }
      list->data[i] = *data;
      list->last++;
      return 0;
  }
  
  int main(){
      sqlist *list; // 创定义一个指针
      sqlist_create(&list);
      if(list==NULL){    //创建失败就返回
          fprintf(stderr,"sqlist_create() falied！\n");
          exit(1);
      }
  }
  ```

- 





### - 带头的单向链表

![](https://s3.bmp.ovh/imgs/2022/01/75f9a794c77ea903.png)

- 通过抓住`头的指针`来控制链表

- 头并不参与计数，只是作为该链表的起始位置

- 对链表操作一般都是通过头部指针来移动位置找到要操作的位置进行操作

- 包含 `数据段`和`下一节点的地址` 

- 头节点`不存出数据 `      |     尾节点的指向置`NULL`

- ```c
  //该链表的的数据结构
  struct node_st{
       datatype data;
       struct node_st *next;  //next 指向一下的节点的地址
  };
  //创建一个链表
  struct node_St *list_create(){
      	struct node_st *me;
      	me = malloc(sizeof(*me));
      	if(me== NULL){
              return -1;
          }
      	me->next = NULL;
      	return me;
  }
  int list_insert_at(struct node_st *list,int i,datatype *data){
      int j=0;
      struct node_st *node=list,*newnode;
      if(i<0){
          return -1;
      }
      while(node != NULL && j<i){  //通过指针的移动找到要插入的位置
          node=node->next;
          j++;
      }
      if(node!=NULL){
          newnode = malloc(sizeof(*newnode));
          if(newnode==NULL){
              return -2;
          }
          newnode->data= *data;
          //newnode->next=NULL;
          
          newnode->next = node->next;
          node->next = newnode;
          return 0;
      }
      else{
          return -3
      }
      
  }
  int main(){
      //创建一个操作指针来指向该链表的表头
      struct node_st *list;
      //创建无头链表 返回头部位置
      list = list_create();
      //插入链表
      int i=2;  //要插入的位置
      int data = 15; //要插入的数据
      list_insert_at(list,int i，datatype *data);
      
  }
  ```

- 







### - 无头的单向链表

![](https://s3.bmp.ovh/imgs/2022/01/e0b49f0cf25c346a.png)

- 无头节点的链表要注意时刻要拿到`第一个节点的指针`

- 无头链表**不需要创建头** ，随时插入

- 包含`被插入的数据`以及节点指向`下一个节点的位置`两部分构成的节点

- ```c
  struct score_st{
    	int id;
      char name[32];
      int math;
      int chinese;
  };
  struct node_st{
     str### - 顺序表存储
  
  
  
  ![](https://s3.bmp.ovh/imgs/2022/01/a7d435423dda8baa.png)
  
  - 顺序表（数组类型）的大小是先给定的
  
  - 线性表包括定容的数组存储区 以及计数器两部分组成
  
  - 线性表数据存放一定是连续的
  
  - ```c
    typedef int datatype;  //类型别名
    typedef struct node_st{
        datatype data[1024]; //数组存储区
        int last;   //计数器
        
    }sqlist;
    void sqlist_cteate(sqlist **ptr){
        *ptr =malloc(sizeof(**ptr));
        if (*ptr == NULL){
            return ;
        }
        (*ptr)->last = -1;     //刚创建的表 计数器置为-1
        return ;
    }
    //插入内容sqlist 返回状态
    int sqlist_insert(sqlist *list,int i,datatype *data){
        int j;
        if(list->last==1023){  //防止表溢出
            return -1;
        }
        if(i<0 || i>list->last+1){ // 防止插入位置不对
            return -2;
        }
        // 假如表中原有三个数 要插入在第二个位置，j=3  2<3  j-- 将3中的数据往后挪一次，直到把第2个位置空出来，填入新的数据 ，计数器记得+1 
        for(j=list->last;i<=j;j--){
            list->data[j+1]=list->data[j];
        }
        list->data[i] = *data;
        list->last++;
        return 0;
    }
    
    int main(){
        sqlist *list; // 创定义一个指针
        sqlist_create(&list);
        if(list==NULL){    //创建失败就返回
            fprintf(stderr,"sqlist_create() falied！\n");
            exit(1);
        }
    }
    ```
  
  - uct score_St data;
     struct node_st *next;
  };
  
  int list_insert(struct node_st **list,struct socre_st *data){
      struct node_st *new;
      new = malloc(sizeof(*new));  //创建一个节点，申请空间存放值与地址
      if(new==NULL){
          return -1;
      }
      new->data = *data;     //值存放
      new->next =*list;      //将指针存放到新节点中
      *list = new;  //将新插入节点的地址回填给操作它的指针;
      return 0;     //成功返回状态
      
      
  }
  
  //显示链表  参数为表的指针，该指针指向地址个节点
  void list_show(struct node_st *list){
  		struct node_st *cur;
      	for(cur=list;cur!=NULL;cur=cur->next){
              printf("%d|%s|%d|%d\n",cur->data.id,cur->data.name,cur->data.math,cur->data.chinese);
          }
  }
  
  int main(){
      struct node_st *list=NULL;   //创建一个指针
      struct score_st tmp={1001,"elax",98,90};
      ret = list_insert(&list,&tmp); //链表插入{将数据插入到所创建指针指向的那块地址，传入的是指针的地址(二级指针)，新地址直接回添到一级指针}
      if(ret != 0){
          exit(0);
      }
      list_show(list);
  }
  ```

- 





