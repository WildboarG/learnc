#include <stdio.h>
#include <stdlib.h>


int main(){

		char str[128];
		int i,count=0,flag=0;
		gets(str);          //接受字符串
		for(i=0;str[i]!='\0';i++){    //以尾零作为结束符
				if(str[i]==' '||str[i]=='\t')   //如果遇到空格或tab 将flag=0
						flag=0;
				else  //str[i] is a char
					if(flag == 0){        //遇到标记就将count记录一次 改变标志位
							count++;
							flag=1;
					}
		}
		printf("count = %d\n",count);



		exit(0);
}
