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

int point(int num)

/*
\ brief esta função recebe um numero determinado de valores
\ retornando os numeros na ordem digitada
*/

{
/*
\brief variaveis locais
*/

  int pt[20];
  int i;
  if (num>20)
  {
	num =20;
  }
  for (i=1;i<num;i++)
     {
       printf("digite um valor");
       scanf("%d",pt[i]);
     }
  return(pt);
}

/*
\brief função para ordenar os numeros e imprimir 
*/
int ordena(int x,int num)
{
  int i, j,aux;
  vetnum[x];
  for(i=0;i<num;i++)
  {
	for(j=0; j<(num-1);j++)
	{
/*
\brief parte da função responsável por percorrer os numeros digitados
*/
		if(vetnum[j] >vetnum[j+1]);
		{
			aux = vetnum[j+1];
			vetnum[j+1] = vetnum[j];
			vetnum[j] = aux;
		}
	}
  }
  for(i =0; i< num;i++)
  {
	printf("Valor: %d", vetnum[i];
  }


/*
\brief função para calcular a média
*/

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
\brief função matematica para desvio padrão
*/



/*
\brief função principal
*/
main()
{
      int selec; 
      printf("informe a quantidade de numeros que deseja inserir:");
      scanf("%d,num);
      printf("para inserir numeros tecle 1:");
      printf("para ordenar de forma crescente tecle2:");
      printf("para média dos numeros digitados tecle 3:");
      printf("para desvio padrão tecle 4:");
      printf("para sair tecle 0:");
      scanf("%d/n",selec);
      switch(selec)
      {
            case '1':
               point(num);
               break;
      
	    default:
               printf("nenhuma opção selecionada");
      }
}
       

