#include<stdio.h>
#include<stdlib.h>
/*
 *约瑟夫算法
 * */
#define NUMBER 8

struct node_st{
		int data;
		struct node_st *next;
};

struct node_st *jose_create(int n){
		struct node_st *p,*node,*cur;
		int i=1;
		p = malloc(sizeof(*p));
		if(p == NULL){
				return NULL;
		}
		p->data = i;
		p->next = p;
		i++;
		cur =p;
		for(;i<=n;i++){
				node = malloc(sizeof(*node));
				if(node== NULL){
						return NULL;
				}
				node->data =i;
				node->next = p;
				cur->next = node;
				cur = node;
		}
		return p;
}
void jose_show(struct node_st *me){
		struct node_st *list;
		for(list =me ;list->next !=me;list=list->next){
				printf("%d ",list->data);
		}
		printf("%d\n",list->data);

}
void jose_kill(struct node_st **me,int n){
		int i=1;
		struct node_st *cur =*me,*node;
		while(cur !=cur->next){
			while(i<n){
				node= cur;
				cur = cur->next;
				i++;
				
			}
			printf("%d",cur->data);
			node->next = cur->next;
			free(cur);
			cur = node->next;
			i=1;
		}
		*me = cur;
		printf("\n");
}

int main(){
		struct node_st *list;
		int n=3;
		list = jose_create(NUMBER);
		if(list==NULL){
				exit(1);
		}
		jose_show(list);
		
		jose_kill(&list,3);
		jose_show(list);		


		exit(0);
}
