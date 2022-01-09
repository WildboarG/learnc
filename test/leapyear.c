#include <stdio.h>
#include <stdlib.h>




void isloapyear(){
		int year,month;
		printf("Please enter [int] year:");
		scanf("%d",&year);
		printf("please enter [int] month:");
		scanf("%d",&month);
		if(year%4==0 && year%400==0 || year%100 != 0){
				switch(month){
						case 1:
						case 3:
						case 5:
						case 7:
						case 8:
						case 10:
						case 12:
								puts("this month have 31 day");
								break;
						case 2:
								puts("this month have 29 day");
								break;
						case 4:
						case 6:
						case 9:
						case 11:
								puts("this month have 30 day");
								break;
						default:
								puts("hi bor!you know how month in year");
								break;
				}
		}
		else
				switch(month){
						case 1:
						case 3:
						case 5:
						case 7:
						case 8:
						case 10:
						case 12:
								puts("this month have 31 day");
								break;
						case 2:
								puts("this month have 28 day");
								break;
						case 4:
						case 6:
						case 9:
						case 11:
								puts("this month have 30 day");
								break;
						default:
								puts("hi bor!you know how month in year");
								break;
	}
}
int main(){
		isloapyear();
		exit(0);

}
