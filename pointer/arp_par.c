#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
		//指针数组  ，本质就是数组，其类型是存放的char *
		char *name[5] = {"Cat","Dog","Air","Bug","Donkey"};
		char *tmp;
		int i,j,k;
		for(i=0;i<5-1;i++){
				k=i;
				for(j=i+1;j<5;j++){
						if(strcmp(name[k],name[j])>0)
								k=j;
				}
				if(k!=i){
						tmp=name[i];
						name[i]=name[k];
						name[k]=tmp;
				}
		}
		
		for(i=0;i<5;i++){
				puts(name[i]);
		}



		exit(0);
}
