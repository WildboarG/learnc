#include <stdio.h>
#include <stdlib.h>

struct node_st{
		 int coef;
		 int exp;
		 struct node_st *next;
};


struct node_st *poly_create(int a[][2],int n){
		struct node_st *me,*newnode,*cur;
		int i;
		me = malloc(sizeof(*me));
		if(me == NULL){
				return NULL;
		}
		me->next =NULL;
		cur = me;
		for(i=0;i<n;i++){
			newnode = malloc(sizeof(*newnode));
			if(newnode==NULL){
					return NULL;
			}
			newnode->coef = a[i][0];
			newnode->exp = a[i][1];
			newnode->next =NULL;

			cur->next = newnode;
		   	cur = newnode;	
		}
		return me;
}
void poly_show(struct node_st *me){
		struct node_st *cur;
		for(cur=me->next;cur!=NULL;cur=cur->next){
				printf("(%d %d) ",cur->coef,cur->exp);
		}
		printf("\n");
}
		

int main(){
		int a[][2]={{5,0},{2,1},{8,8},{3,16}};
		int b[][2]={{6,1},{16,6},{-8,8}};
		struct node_st *p1,*p2;
		p1 = poly_create(a,4);
		if(p1==NULL){
				exit(1);
		}
		p2 = poly_create(b,3);
		if(p2==NULL){
				exit(1);
		}
		poly_show(p1);
		poly_show(p2);
		
		//poly_union();
		//poly_show();
		exit(0);
}
