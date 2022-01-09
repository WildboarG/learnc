#include <stdio.h>
#include <stdlib.h>

#include "proj.h"
// 声明型的 声明存在这个变量，但不在这个包里定义
extern int i;

void func(void){
		printf("[%s]:i=%d\n",__FUNCTION__,i);
		exit(0);
}
