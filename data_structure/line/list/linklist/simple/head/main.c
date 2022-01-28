#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main(){
		list *l;
		int i;
		datatype arr[]={12,23,34,45};
		l =list_create();
		if(l==NULL){
				exit(1);
		}
	//	printf("%d",__LINE__);
		for(i=0;i<sizeof(arr)/sizeof(*arr);i++){
			if(list_insert_at(l,0,&arr[i])){
					exit(1);
			}
		}
	//	printf("%d",__LINE__);
		list_display(l);
		list_destroy(l);


		exit(0);
}
