hello.c:

编译器gcc:
	-E 预处理
	gcc -E hello.c > hello.i
	-S 编译为汇编程序
	gcc -S hello.i    # 生成hello.s
	-c 汇编   
	gcc -c hello.s 	#生成hello.o
	链接
	gcc hello.o -o hello #生成可执行文件
	./hello

c源文件 -- 预处理 -- 编译-- 汇编--链接 --可执行文件

make : make 直接调用gcc hello.c -o hello
  make hello
