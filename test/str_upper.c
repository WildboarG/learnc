#include <stdio.h>
#include <stdlib.h>
#define N 8


void func(char *ss){
		int i;
		for(i=0;i<N;i++){
				printf("%c",ss[i]);
		}
		for(i=0;ss[i]!='\0';i++){
				if(i%2==1 && ss[i]>='a'&&ss[i]<='z'){
						ss[i]=ss[i]-32;
						printf("%c\n",ss[i]);
				}
		}
		
}

int main(){
		char str[N]={"abc4Efg"};
		char *ss = str;
		func(ss);
		printf("%s\n",str);
		return 0;
}
