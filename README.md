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

**Extract the .zip folder**

**Open a powershell instance inside the folder you extracted this repo**

To Compile on Windows Powershell:
$: gcc -fopenmp test.c -o parallel_program

To execute: 
$:./parallel_program.exe

**-------------------**

*Linux*

usr@host_name:<path_to_file>$ git clone https://github.com/vlocateli/omp/

usr@host_name:<path_to_file>$gcc -fopenmp test.c -o parallel_program

usr@host_name:<path_to_file>$./parallel_program

**-------------------**
