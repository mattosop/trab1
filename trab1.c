/*
\file trab1.c
\brief programa para ordenar nomeros em um vetor
\auctor Carlos Augusto M Pereira
*/
/*
\ brief este arquivo recebe 20 numeros inteiros 
\ param armazena-os em 20 posições e os ordena
\ param exibe a média e o desvio padrão
\ return retorna os numeros em ordem crescente a media e o desvio padrão
*/
#include <stdio.h> 

/*
\brief função para receber numeros aleatórios
\param pt é o ponteiro para armazenar os numeros
*/
int point(num)
{
  int *pt;
  int i;
  for (i=1;i<20;i++)
     {
       printf("digite um valor");
       scanf("%d",*pt[i]);
     }
  return(*pt);
}
/*
\brief função para ordenar os numeros
*/
int ordena(x)
{
  int *pt1;
  for (int a=1;a<20;a++)
    {
      for(int b =1;b<20;b++)
	{
	  if(*pt1[a] > *pt1[b])
	     {
		*pt1[a] = *pt1[b];
	     }
	}
      
    }
return(*pt1);
}
/*
\brief função matematica para média e desvio padrão
*/

