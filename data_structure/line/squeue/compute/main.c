#include <stdio.h>
#include <stdlib.h>
#include "sqstack.h"


static void compute(sqstack *snum,int op){
		datatype n1,n2;
		st_pop(snum, &n2);
		st_pop(snum, &n1);
		switch (op) {
				case '+':
						n = n1+n2;
						break;
				case '-':
						n = n1-n2;
						break;
				case '*':
						n = n1*n2;
						break;
				case '/':
						n = n1/n2;
						break;
				default:
						exit(1);
		}
		st_pop(sop,&old_op);
}
 deal_bracket(sqstack *snum, sqstack *op){
		datatype old_op;
		st_top(sop,&old_op);
		while(old_op != '('){
				st_pop(sop,&old_op);
				compute(snum,&old_op);
				st_op(sop,&old_op);
		}	
		st_pop(sop,&old_op);
}


deal_op(ssqstack *sqstack){

}
int main(){
		int i;
		char str[]="(11+3)*2-5";
		sqstack *snum,*sop;
		int flag=0;
		int value=0;
		snum = st_create();
		if(snum ==NULL){
				exit(1);
		}
		sop = st_create();
		if(sop==NULL){
				exit(1);
		}
		while (str[i] != '\0') {
				if(str[i]>'0' && str[i]<'9'){  //is a number
						value = value * 10+(str[i] - '0');
				}
				else{  // is o op
					if(flag){
							st_push(snum,&value);
							flag = 0;
							value=0;
					}
					if(str[i]==')'){
							deal_bracket(snum,sop);
					}
					else{  //is +-*/
							deal_op(snum,sop,str[i]);
					}
				}
				i++;
		}
		st_destory(snum);
		st_destory(sop);
		exit(0);
}
