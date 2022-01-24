#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
/*
//结构体嵌套共用体
struct {     // 24
	int i;
	float f;
	double d;
	union {
		int j;
		double k;
	}un;
}a;

//共用体嵌套结构体
union {    // 8
	int i;
	double k;
	struct {
		int l;   //4
		u_int32_t m; //4 
	}stt;
}nu;

*/


union {
		struct{
			u_int16_t h;
			u_int16_t l;
		}x;
		u_int32_t y;
}nu;
int main(){

    //struct a ;
	//printf("%d\n",sizeof(a));	 
	//union un;
	//printf("%d\n",sizeof(nu));
	
	// 要求一个32位数的高十六位与低十六位的和
	  u_int32_t t=0x11223344;
	  printf("%x\n",(t >> 16) + t & 0xFFFF);
	//利用共用体与结构体嵌套特性来实现
	 nu.y=0X11223344;
	  printf("%x\n",nu.x.h+nu.x.l);  
	   
	  exit(0);
}
