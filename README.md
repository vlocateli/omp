# -- omp code examples ---

Programming examples using OpenMP library.

**------------**
About OpenMP -> (https://www.openmp.org/about/)
**------------**

*============*

**WARNING: You need gcc with OpenMP.**

**$ -> Represents the shell.**

*============*

*Windows*

1) **Download the contents of the repo as .zip**

2) **Extract the .zip folder**

3) **Open a powershell instance inside the folder you extracted this repo**

4) To Compile on Windows Powershell:
$: gcc -fopenmp test.c -o parallel_program

5) To execute: 
$:./parallel_program.exe

**-------------------**

*Linux*

1) usr@host_name:<path_to_file>$ git clone https://github.com/vlocateli/omp/

2) usr@host_name:<path_to_file>$gcc -fopenmp test.c -o parallel_program

3) usr@host_name:<path_to_file>$./parallel_program

**-------------------**
