#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int  main(void){
	int vetor[5]= {1,10,5,6,12};
  int soma = 0;	
	
	int i;
  #pragma omp paralel private soma
	#pragma omp for  
	for(i=0; i< 5;i++){
		soma+=vetor[i];

	}



}




