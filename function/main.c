#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[]){   //argc 计数器 argv[]列表 保存穿参
		int i;
		printf("hello!\n");
		printf("argc=%d\n",argc);
	//	for(i=0;i<argc;i++){
		for(i=0;argv[i]!=NULL;i++){
				printf("argv[%d]=%s\n",i,argv[i]);
		}

	//	return 0;
		exit(0);//最后一条返回值的长度或值作为进程的返回值
}
