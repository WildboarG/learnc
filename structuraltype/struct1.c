#include <stdio.h>
#include <stdlib.h>
#include <sys/cdefs.h>
#define NAMESIZE 32
struct simple_st{
	int i;
	float f;
	char ch;
};
// __attribute__((packed)) 不让结构体对齐={内存=内部成员所占内存大小的和}
struct birthday_st{
	int year;
	int month;
	int day;
};
struct student_st{
	int id;
	char name[NAMESIZE];
	struct birthday_st brith;
	int math;
	int chinese;
};

//结构体函数传参 分为值传参（值传参对内存地址开销大）和地址传参（传过来的是地址固定了大小一般为8，大大节省了内存开销（64位））
void func(struct simple_st *b){
		printf("%d\n",sizeof(b));
}

int main(){
// TYPE NAME = VALUE;
#if 0
		// 内存大小
		struct simple_st sime;
		struct simple_st *p = &sime;
		printf("%d\n",sizeof(sime));
		printf("%d\n",sizeof(p));
		//结构体值传参
		//func(sime);
		//结构体指针传参
		func(p);
		
#endif

/*
		struct simple_st a={123,456.789,'a'}; //初始化
		a.i = 112233;  //赋值
		printf("%d %f %c\n",a.i,a.f,a.ch);
*/
		//部分初始化
		//struct student_st stu={.math=98,.chinese=97}
		//全部初始化
		int i;
		struct student_st stu = {10011,"Alan",{2000,11,11},99,97};
		//结构体指针
		struct student_st *p =&stu;
		//结构体数组方式初始化
		struct student_st arr[2]={{10011,"Alan",{2000,11,11},99,97},{10012,"John",{2000,12,14},92,91}};
		p = &arr[0];
		
		printf("%d %s %d-%d-%d %d %d\n",stu.id,stu.name,stu.brith.year,stu.brith.month,stu.brith.day,stu.math,stu.chinese);
		printf("%d %s %d-%d-%d %d %d\n",(*p).id,p->name,p->brith.year,p->brith.month,(*p).brith.day,p->math,p->chinese);
		for(i=0;i<2;i++,p++){
			printf("%d %s %d-%d-%d %d %d\n",(*p).id,p->name,p->brith.year,p->brith.month,(*p).brith.day,p->math,p->chinese);
		}
		exit(0);
}
