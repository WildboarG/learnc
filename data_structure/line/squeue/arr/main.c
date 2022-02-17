#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


int main(){
		queue *sq;
		int i;
		datatype arr[]={2,3,4,6};
		sq = qu_create();
		if(sq ==NULL){
				exit(1);
		}
		for(i=0;i<sizeof(arr)/sizeof(*arr);i++){
			qu_en(sq, &arr[i]);
		}
		qu_travel(sq);
#if 0	
		datatype tmp =100;
		int ret;
		ret=qu_en(sq,&tmp);
		if(ret == -1){
				printf("squeeue fail\n");
		}
		else {
			qu_travel(sq);
		}
#endif
		datatype tmp;
		qu_dequeue(sq, &tmp);
		printf("DEQUEUE : %d\n",tmp);
		qu_travel(sq);
		qu_destory(sq);
		exit(0);
}
