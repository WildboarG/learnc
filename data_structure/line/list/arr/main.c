#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"

int main(){
		sqlist *list,*list1;
		datatype arr[]={12,23,34,54,65};
		datatype arr1[]={89,90,23,45,65};
		int i,err;
		//list = sqlist_create();
		sqlist_create1(&list);
		if (list==NULL){
				fprintf(stderr,"sqlist_create() falied!\n");
				exit(1);
		}
		list1 = sqlist_create();
		if(list1 ==NULL){
				fprintf(stderr,"sqlist_create() falied\n");
				exit(1);
		}
	//	printf("%d",__LINE__);
		for(i=0;i<sizeof(arr)/sizeof(*arr);i++){
			if((err = sqlist_insert(list,0,&arr[i])) != 0){
					if(err == -1){
						fprintf(stderr,"The arr is full\n");
					}
					else if(err ==-2){
						fprintf(stderr,"the pos you want to insert is wrong\n");
					}
					else{
						fprintf(stderr,"ERROR\n");
					}
					
			}
		}
		printf("list:");
		sqlist_display(list);

		for(i=0;i<sizeof(arr1)/sizeof(*arr1);i++){
				sqlist_insert(list1, 0, &arr1[i]);
		}
		printf("list1：");
		sqlist_display(list1);
		//删除表一的 1
		printf("删除表一的1后：");
		sqlist_delete(list,1);
		sqlist_display(list);
		
		sqlist_union(list,list1);
		printf("合并后：");
		sqlist_display(list);
		
		
		sqlist_destory(list);
		sqlist_destory(list1);
		exit(0);
}
