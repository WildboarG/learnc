## linux_c 系统开发笔记

- I/O :input & output, 是一切实现的基础
	`stdio`标准I/O[优先使用]
    `sysio`系统I/O（文件I/O）

stdio: FILE类型贯穿始终  //man 3
	
fopen("filepath","mode");
	打开一个文件，(参数1为文件路径，参数2为打开的模式) 返回值在堆上,
	若没有成功将会报错整型变量到一个私有化的全局变量中errno 
	char *strerr(errno);  strerr函数会解读报错的变量并返回message
	void perror(const char *s); perror函数接受一个描述的串并在串后输出错误类型的message



fclose(FILE *stream);

​		 关闭流

fgetc(FILE *stream);

​			从流中读取下一个字符，返回一个int (uchar) ，出错返回EOF

fputc(c,FILE *stream);

​			写入一个字符到流中;  成功返回int (uchar);  出错返回EOF;

fgets();
fputs();
fread();
fwrite();

printf();
scanf();

fseek();
stell();
rewind();

fflush();


sysio:

