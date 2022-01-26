#include "tool1.h"
#include "tool2.h"
#include <stdint.h>
#include <stdio.h>

int main(){
		printf("This is %s\n",__FUNCTION__);
		mytool1();
		mytool2();
		printf("the end\n");
		return 0;
}
