// THIS PROGRAM IS INTENDED AS A TEST FOR THE OPENMP API 



#include<stdio.h>
#include<omp.h>

int main(void){
	#pragma omp parallel
	{
		printf("Hello world --> from thread = %02d\n",omp_get_thread_num());

	}

}


