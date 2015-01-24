all: at

at: at.o print_arrays.o
	gcc at.o print_arrays.o -o at

at.o: at.c print_arrays.h
	gcc -c at.c

print_arrays.o: print_arrays.c print_arrays.h
	gcc -c print_arrays.c

clean:
	rm -f *.o at

