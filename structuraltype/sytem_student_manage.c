#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#define NAMESIZE 32
struct student_st{
	int id;
	char name[NAMESIZE];
	int math;
};

void func_set(struct student_st *dest,const struct student_st *src){
		*dest=*src; //类型相同的结构体是可以相互赋值的
		//dest->id = src->id;
		//strncpy(dest->name,(*src).name,NAMESIZE);
		//dest->math=(*src).math;
}
void func_show(struct student_st *dest){
	printf("%d | %s | %d\n",dest->id,dest->name,dest->math);
}
void func_changename(struct student_st *dest,const char *newname){
		strcpy(dest->name,newname);
}
void menu(void){
	printf("\n1 set\n2 change name\n3 show\n\n");
}
int main(){
		struct student_st std,tmp;
		char newname[NAMESIZE];
		int choice;
		int ret;
		do{
				menu();
				ret=scanf("%d",&choice);
				if (ret !=1 )
						break;
				switch (choice) {
				 case 1:
					printf("Please enter the std:{id,name[],math}: ");
					scanf("%d%s%d",&tmp.id,tmp.name,&tmp.math);
					func_set(&std,&tmp);
					break;
				case 2:
					printf("please change name: ");
					scanf("%s",newname);
					func_changename(&std,newname);
					break;
				case 3:
					func_show(&std);
					break;
				default:
					exit(1);
				}
		}while(1);
		exit(0);
}
