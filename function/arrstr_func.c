#include <stdio.h>
#include <stdlib.h>


char* func_mystrcpy(char *dest,const char *src){
		char * ret = dest;
		if (dest !=NULL && src !=NULL){  //防止逗我完
			while ((*dest++ = *src++) != '\0') {
			}
		}
		return ret;

}
//仿照strncpy
char * func_mystrncpy(char *dest,char *src,int n,int m){
		int i;
		printf("P=%d\n",sizeof(dest));
		for(i=0;i<n && i<m;i++){
				dest[i]=src[i];
		}  //src长于n
		for(;i<n || i<m;i++){						//防止src短于n,因为传入的是指针无法计算string2的真实长度，建议在传入时候计算string2的长度一并传入参数做判断。
			dest[i]='\0';
		}
		return dest;

}

int main(){
		//字符数组与函数
		//做一个字符数组拷贝的函数，不借用标准库
		char string[]="helloworld";
		char string2[3];
		int n=5;
		int j;
		//func_mystrcpy(string2,string);
		
		
		//strncpy用函数实现
		//防止溢出，传参传入目的数组的容量并判断
		func_mystrncpy(string2,string,n,sizeof(string2)); 
		puts(string2);
	   /*假入传入的n长度大于string2 那么会发生溢出，但并不会报错
		printf("string2 for len = %d",sizeof(string2));
		for(j=0;j<n;j++){
				printf("string[%p]---> %c\n",&string2[j],string2[j]);
		}
		*/
		exit(0);
}
