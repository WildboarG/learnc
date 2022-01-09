#include <stdio.h>

#define STRSIZE 32
/*
 *int scanf (const char * format,地址表);
 * */
int main(){
		int i;
		char ch, str[STRSIZE];
		printf("please enter for:");
		//scanf("%d",&i);
		//printf("i= %d\n",i);
		scanf("%s",str);
		getchar();
		scanf("%c",&ch);
		printf("str = %s ch= %d\n",str,ch);
		return 0;

}
