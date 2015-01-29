#CS2303-Homework-2
Homework 2 for WPI CS 2303, by Arthur Lockman. This homework assignment required us to build functions to perform a bunch of different operations on arrays, as well as practice with using multiple different files to contain functions that a program depends on. The program contains three executables, at, at2, and at3 as well as the ability to generate documentation. 

##Building
To build, enter the directory and type the following:

	make

To clean previous builds, type the following:

	make clean

To make the documentation and move it into the WPI CCC public_html folder, type the following:

	make docs

##Executables
###at
This program creates an array of ten consecutive integers and prints the array to the command line. To call it, simply call the following:

	./at

Running the program will produce the following output:

	user@computer:~/cs2303assig2$ ./at
	0
	1
	2
	3
	4
	5
	6
	7
	8
	9

###at2
This program ingests an array of any size from the command line, prints the array, then sorts the array in descending order and prints the array again. To run the program, call the following with any number of integer arguments:

	./at2 9 1 4 6 8 [some_number] [some_number2[

For instance, making the following call produces the following output:

	user@computer:~/cs2303assig2$ ./at2 9 1 4 6 8 22 1 40 -10
	Unsorted array:
	9
	1
	4
	6
	8
	22
	1
	40
	-10
	Sorted array:
	-10
	1
	1
	4
	6
	8
	9
	22
	40
	
###at3
The final executable in the project is at3. at3 is similar to at, except that it generates a random array of integers in the range of -10 to 100 with a length of 20. It then prints and sorts the array. To run the program, simply call:

	./at3

Running the program will produce output similar to the following (rand is seeded, each output will be different):

	user@computer:~/cs2303assig2$ ./at3
	Unsorted array:
	40
	7
	96
	27
	41
	5
	52
	39
	18
	69
	2
	-5
	42
	25
	97
	14
	72
	24
	57
	68
	Sorted array:
	-5
	2
	5
	7
	14
	18
	24
	25
	27
	39
	40
	41
	42
	52
	57
	68
	69
	72
	96
	97