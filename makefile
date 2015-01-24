all: at at2

at: at.o print_arrays.o
	gcc at.o print_arrays.o -o at -g

at2: at2.o print_arrays.o
	gcc at2.o print_arrays.o -o at2 -g

at.o: at.c print_arrays.h
	gcc -g -c at.c
at2.o: at2.c print_arrays.h
	gcc -g -c at2.c

print_arrays.o: print_arrays.c print_arrays.h
	gcc -g -c print_arrays.c

clean:
	rm -f *.o at at2

