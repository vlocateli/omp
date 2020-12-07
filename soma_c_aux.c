#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int  main(void){
	int soma = 0,temp_sum=0;
	int vetor[5]= {1,10,5,6,12};
	
	#pragma omp parallel private(soma)
	{
	int i;
	#pragma omp for
	for(i=0; i< 5;i++){
		temp_sum+=vetor[i];

	}


	}

  #pragma omp critical
  {

    soma +=temp_sum;

  }
	printf("soma  = %02d\n",soma);

	return 0;

}



