[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/qsdbsPLV)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=20491054)
# Random Permutations

Please see exercise 2.8 on page 72 of the textbook. The problem presents three different algorithms for populating an array of size N with a random permutation of the values from 1 through N.

## Part 1 - Implementation

Implement each of these three algorithms as its own function in source file *permutations.cpp* (the book says to write three different programs, but for this assignment implement each as a function, not its own program). Three empty functions are provided for your code. Implement algorithms 1, 2, and 3 in functions *permutations1*, *permutations2*, and *permutations3* respectively. You may also include any support functions you feel you need within the same source file (note that any support functions should be declared as *static* functions).

A *main* function is provided in *main.cpp* which includes code to select which algorithm to use, create an array of the some desired size, call the appropriate function (your implementation) with timing, then reports the timing and determines if the implementation was successful. ***Do not modify the main function or any source files other than permutations.cpp.***

File *permutations.cpp* includes a *search* function for your convenience. (A search is necessary for algorithm 1.) Also included, in another source file, are three convenience functions for generating random integers. The functions are:

- *unsigned int randint()* – Returns a random integer in the range of 0 to 2 billion +.
- *unsigned int randint(unsigned int max)* – Returns a random integer in the range of 0 through max-1.
- *unsigned int randint(unsigned int min, unsigned int max)* – Returns a random number in the range of min through max inclusive.

## Part 2 - Analysis

In addition to the implementation of these three algorithms:

- Give a Big-Oh analysis of each of these algorithms. State the Big-Oh nature of the algorithm and describe how you arrived at your conclusion.
- Run the program for each algorithm and for each of the following array sizes and report the run-times:
  - For algorithm 1: 5000, 10000, 20000, 40000
  - For algorithm 2: 100000, 200000, 400000, 800000, 1600000, 3200000, 6400000
  - For algorithm 3: 500000, 1000000, 2000000, 4000000, 8000000, 16000000, 32000000
- Compare your analysis with the actual run-times. Do the actual run-times match up with your Big-Oh analysis?

Prepare your answers to the items above in Markdown format in file *ANALYSIS.md*.

## Part 3 - Reflection

Provide a written reflection on this assignment to include the following:

- How did you approach the problem presented in this assignment?
- What techniques did you use to solve the problem?
  - Note any outside resources you referenced (web sites, forums, etc.)
- What challenges did you encounter during development and testing?
  - How did you overcome these challenges?
  - Note any outside resources you used to overcome challenges.
- What conclusions can you make from this assignment?
  - Note main points, insights, important lessons, and/or key findings.

Prepare your reflection document in Markdown form in file *REFLECTION.md*.

## Command Line Option

The *main* function given in this assignment is written such that it can take its input values from the command line. You might find this option
useful for your run-time tests, but it is not necessary that you use it.

Once your program is built and runs successfully (using the *Run and Debug* button), you can run the program from the command line
in the *Terminal* tab as follows:

```
./a.out ALGORITHM ARRAYSIZE
```

Here, *ALGORITHM* is the algorithm number and *ARRAYSIZE* is the size of the array. For example if you want to run algorithm 2 with an
array size of 200000, type the following command:

```
./a.out 2 200000
```

Note that this runs the program that was last successfully built with the *Run and Debug* option. If you made changes to any
source files, you must use *Run and Debug* to rebuild your program; if you do not, this command will run an old version of your
program. Be careful to rebuild with *Run and Debug* after all changes to the source code.

Again, this method of running your program is not required; it is provided because you might find it more convenient and faster
when running your program multiple times with different test values, thus avoiding a rebuild with each run.
