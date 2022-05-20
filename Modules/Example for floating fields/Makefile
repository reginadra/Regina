$(CC) = gcc

final: main.o module1.o module2.o
	$(CC) main.o module1.o module2.o -o final
	
main.o: main.c module1.h module2.h 
	$(CC) -c main.c

module1.o: module1.c module1.h
	$(CC) -c module1.c

module2.o: module2.c module1.h module2.h
	$(CC) -c module2.c

clean: 
	rm *.o final	