$(CC) = gcc

HelloWorld: 00_helloworld.o 01_hello.o
	$(CC) 00_helloworld.o 01_hello.o -o HelloWorld
		
00_helloworld.o: 00_helloworld.c 01_hello.h 
	$(CC) -c 00_helloworld.c

01_hello.o: 01_hello.c 01_hello.h
	$(CC) -c 01_hello.c

clean: 
	rm *.o HelloWorld			 