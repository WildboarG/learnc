#include <stdio.h>
#include <stdlib.h>

void array(){
		int ch;
		ch = getchar();
		switch (ch)
		{
			case 'a':
			case 'A':
					printf("Ant:a small insect that lives ub group\n");
					break;
			case 'B':
			case 'b':
					printf("BUtterfly: A flying insect with a long body\n");
					break;
			case 'c':
			case 'C':
					printf("Cobra:A highty dangerous snake!\n");
					break;

			case 'D':
			case 'd':
					printf("Donkey:A animal with short leg a big ears\n");
					break;
			default:
					printf("input error!!\n");
					break;
		}
}

int main(){
#if 0
		int score;
		printf("please enter:");
		scanf ("%d",&score);

		if (score<0 || score>100)
		{
				fprintf(stderr, "EINVAL \n");
				exit(1);
		}
		switch(score/10)
		{
				case 10:
				case 9:
						puts("A");
						break;
				case 8:
						puts("B");
						break;
				case 7:
						puts("C");
						break;
				case 6:
						puts("D");
						break;
				case 5:
				case 4:
				case 3:
				case 2:
				case 1:
				case 0:
						puts("E");
						break;
				default:
						break;

		}
#endif
		array();
}
