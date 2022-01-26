OBJFILE = main.o tool1.o tool2.o
CC = gcc
CFLAGS+= -c -Wall -g  
##附加编译选项
main:$(OBJFILE)
	gcc $^ -o main  
##$^ 是上一句的依赖文件
##main.o:main.c
##	$(CC) main.c $(CFLAGS) -o main.o
##tool1.o:tool1.c
##	$(CC) tool1.c $(CFLAGS) -o $@ 
## %@是上一句的目标文件
##tool2.o:tool2.c
##	$(CC) $^  $(CFLAGS) -o $@


## 公式提取
%.o:%.c
	$(CC) $^  $(CFLAGS) -o $@
clean:
	$(RM) -r *.o main 	
