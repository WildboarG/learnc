#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main(){
		int count =0;
		FILE *fp=NULL;
		while (1) {


			fp = fopen("tmp","r");
			if(fp==NULL){
				perror("fopen() failed!");
				break;
			}
			count++;
		}
		printf("count=%d\n",count);
		exit(0);
}
