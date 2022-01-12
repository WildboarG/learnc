#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*strlen  &  sizeof
 * strcpy  & strncpy
 * strcat  & strncat
 * strcmp  &strncmp
 * */

#define N 32

void cmp(){
		char str1[N] = "hello";
		char str2[N] = "world";
		//strcmp 比较字字符的第一个字符ascii值，加入第一个相同依次往后比较，直到不相等或者完全相等结束
		//不相等返回字符串1 与 字符串2 的差值
		//完全相等返回0
		printf("%d\n",strcmp(str1,str2));
		//strncmp 会指定比较到第几位就停止
		printf("%d\n",strncmp(str1,str2,4));

}
int main(){
		int i;
		char str[N]="hello\0adb";  //str是以尾零为单位结束的
		// 字符数组的拷贝，不检查，可能存在数组越界
		printf("strcpy:\n");
		strcpy(str,"abcdef");
		puts(str);
		//防止数组越界使用strncopy拷贝，有效的检查实际存储容量
		printf("use strncpy run copy\n");
		printf("we try strncpy len(12).str : abcdefghijkl ");
		strncpy(str,"abcdefghijkl",N); //str实际容量为(N-1)9 
		//拼接后会存储在源串上  
		puts(str);
#if 0
		//字符串拼接（追加） 不检查，源字符数组的实际容量
		strcat(str, " ");
		strcat(str,"world !");
		puts(str);
#endif
		//防止数组越界的字符串拼接(追加)
		strncat(str,"a",N);
		strncat(str,"hello world",N); //
		puts(str);
		//printf("%d\n",strlen(str));//不计算尾零（以尾零作为结束标记）
		//printf("%d\n",sizeof(str));//计算尾零 （串在内存中真正占用内存）
		

		//检查
		for(i=0;i<sizeof(str);i++){
				printf("%c",str[i]);
		}
		printf("\n");
		cmp();
		exit(0);
}
