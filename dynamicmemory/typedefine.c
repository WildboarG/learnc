#include<stdio.h>
#include<stdlib.h>
/*
 *  typedef int INT;
 *  #define INT int;
 *  INT i; -->  int i;
 *
 *  #define IP int *
 *  typedef int *IP;
 *  IP p,q; --> int *p,q;
 *  IP p,q; --> int *p,*q;
 *
 *  typedef int ARR[6];
 *  ARR a;   --> int a[6];
 *
 *  typedef struct node_st NODE;
 *  NODE a;   --> struct node_st a;
 *
 *  typedef struct node_st *NODEP;
 *  NODEP p;   --> struct node_st *p;
 *
 *  typedef struct{
 *  	int i;
 *  	float f;
 *  }NODE,*NODEP;
 *
 *  typedef int FUNCTION(int);   -> int(int) FUNCTION;
 *  FUNCTION f; --> int f(int);
 *
 *  typedef int *FUNCTIONP(int);
 *  FUNCTIONP p; --> int *p(int);
 *
 *  typedef int *(*FUNCTIONP)(int);
 *  FUNCTIONP p ; int *(*p)(int);
 * */

// 类型改名字
typedef int INT;

int main(){

		INT i=100;
		printf("%d\n",i);
		exit(0);
}
