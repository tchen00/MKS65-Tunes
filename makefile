all: linked_list.o main.o
	gcc -o program linked_list.o main.o

linked_list.o: linked_list.c linked_list.h
	gcc -c linked_list.c

library.o: library.c library.h
	gcc -c library.c

main.o: main.c library.h linked_list.h 
	gcc -c main.c

run:
	./program

clean:
	rm *.o
	rm *~
