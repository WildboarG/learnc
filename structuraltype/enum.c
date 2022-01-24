#include <stdio.h>
#include <stdlib.h>

//枚举 
//理解一连串的宏使用
//可以在定义时候自行设定值，往后顺次增加
enum day{
		MON,  //0
		TUS,  //1
		THS,  //2
		WES,  //3
		FRI=2,  //2
		SAT,  //3
		SUN   //4
};
int main(){
		enum day a=SUN;
		printf("%d\n",a);
		exit(0);
}
