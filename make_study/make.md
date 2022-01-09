## 编写一个makefile
简化makefile 写法
1. 一般形态
```shell
	mytool:main.o tool1.o tool2.o
		gcc main.o tool1.o tool2.o -o mytool
	main.o:main.c
		gcc main.c -c -Wall -g -o main.o
	tool1.o:tool1.c
		gcc tool1.c -c -Wall -g -o tool1.o
	tool2.o:tool2.c
		gcc tool2.c -c -Wall -g -o tool2.o
	clean:
		rm -rf *.o 
```
2. 变量替换
```shell
	ALLFILE = main.o tool2.o tool1.o
	CC = gcc
	
	mytool:$(ALLFILE)
		$(CC) $(ALLFILE) -o mytool
	main.o:main.c
          gcc main.c -c -Wall -g -o main.o
    tool1.o:tool1.c
          gcc tool1.c -c -Wall -g -o tool1.o
    tool2.o:tool2.c
          gcc tool2.c -c -Wall -g -o tool2.o
    clean:
          $(RM) -r *.o

	
```
3. 编译选项CFLAGS+=

```shell
	ALLFILE = main.o tool2.o tool1.o
	CC = gcc
	CFLAGS += -c -Wall -g	
	mytool:$(ALLFILE)
		$(CC) $(ALLFILE) -o mytool
	main.o:main.c
          gcc main.c $(CFLAGS) -o main.o
    tool1.o:tool1.c
          gcc tool1.c $(CFLAGS) -o tool1.o
    tool2.o:tool2.c
          gcc tool2.c $(CFLAGS) -o tool2.o
    clean:
          $(RM) -r *.o
```
4. 向上对齐$^ 以及取弃后缀的变量$@

```shell
	ALLFILE = main.o tool2.o tool1.o
	CC = gcc
	CFLAGS += -c -Wall -g	
	mytool:$(ALLFILE)
		$(CC) $^ -o $@
	main.o:main.c
        $(CC) main.c $^ -o $@
    tool1.o:tool1.c
        $(CC) tool1.c $^ -o $@
    tool2.o:tool2.c
        $(CC) tool2.c $^ -o $@
    clean:
          $(RM) -r *.o
```
5.公式提取出来
```shell
	ALLFILE = main.o tool2.o tool1.o
	CC = gcc
	CFLAGS += -c -Wall -g	
	mytool:$(ALLFILE)
		$(CC) $^ -o $@
    %.o:%.c
		$(CC) $^ $(CFLAGS) -o $@
	clean:
          $(RM) -r *.o
```
