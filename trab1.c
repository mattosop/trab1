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

int entrada(int num)
{
/*
\brief variaveis locais
*/

  int vetnum[20];
  int i;
  if (num>20)
  {
	printf("o numero deve ser < = 20. \n");	
	num =20;
  }
  for (i=0;i<num;i++)
     {
       printf("digite um valor");
       scanf("%d\n",&vetnum[i]);
     }

}

/*
\brief função para ordenar os numeros e imprimir 
*/
int ordena(int x,int num)
{
  int i, j,aux,r;
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
  for(r =0; r< num;r++)
  {
	printf("Valor: %d\n", &vetnum[r];
  }


/*
\brief função para calcular a média
*/

/*
\brief função matematica para desvio padrão
*/



/*
\brief função principal
*/
int main()
{
      int z,selec,num,vetnum[20]; 
      printf("informe a quantidade de numeros que deseja inserir:\n");
      scanf("%d,&num);
      printf("para inserir numeros tecle 1:\n");
      printf("para ordenar de forma crescente tecle2:\n");
      printf("para média dos numeros digitados tecle 3:\n");
      printf("para desvio padrão tecle 4:\n");
      printf("para sair tecle 0:\n");
      scanf("%d/n",&selec);
      switch(selec)
      {
            case 1:
            {
		 entrada(num);
              	 break;
      	    }
	    
	    case 2:
            {
                 ordena(num, vetnum[num]);
                 break;
            }

	    case 3:
            {
                 media(num, vetnum[num];
                 break;
            }

	    case 4:
            {
                 desvio(num,vetnum[num]);
                 break;
            }

	    default:
               printf("nenhuma opcao selecionada\n");
      }
}
       

