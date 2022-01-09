FILE = main.o tool1.o tool2.o
CC = gcc
CFLAGS+= -c -Wall -g
main:$(FILE)
	gcc $^ -o main
main.o:main.c
	$(CC) main.c $(CFLAGS) -o main.o
tool1.o:tool1.c
	$(CC) tool1.c $(CFLAGS) -o $@
tool2.o:tool2.c
	$(CC) $^  $(CFLAGS) -o $@
clean:
	$(RM) -r *.o main 	
