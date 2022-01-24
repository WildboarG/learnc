#include <stdio.h>
#include <stdlib.h>
union {
		    struct{
					        char a:1;//1bit
						    char b:2;//2bit
		                    char c:1;//1bit
                  }st;
            char y;    //1  8bit
}w;
int main(){
            w.y=1;    // 0 0 0 0 0 0 0 1
			w.st.c=1; // 0 0 0 0 1 0 0 1 =9
            printf("%d ->%d\n",sizeof(w),w);  //1字节
            exit(0);
}
