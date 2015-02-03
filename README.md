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
This program creates an array of ten consecutive integers and doubles and prints the array to the command line. To call it, simply call the following:

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
    0.000000
    1.000000
    2.000000
    3.000000
    4.000000
    5.000000
    6.000000
    7.000000
    8.000000
    9.000000

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
    40
    22
    9
    8
    6
    4
    1
    1
    -10
	
###at3
The final executable in the project is at3. at3 is similar to at, except that it generates a random array of integers in the range of -10 to 100 with a length of 20. It then prints and sorts the array. To run the program, simply call:

	./at3

Running the program will produce output similar to the following (rand is seeded, each output will be different):

	user@computer:~/cs2303assig2$ ./at3
    Unsorted array:
    77
    60
    97
    83
    72
    31
    75
    31
    85
    -3
    97
    57
    37
    90
    55
    62
    1
    95
    22
    99
    Sorted array:
    99
    97
    97
    95
    90
    85
    83
    77
    75
    72
    62
    60
    57
    55
    37
    31
    31
    22
    1
    -3