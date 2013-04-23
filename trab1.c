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
#include <stdlib.h>
#include <math.h>
/*
\brief função para receber numeros aleatórios
\brief realizado com diversas funções para treinamento em C
\param função ler apenas recebe os numerose retorna o valor dos mesmos
*/

int ler()
{
/*
\brief digitado é variavel local
\brief esta função recebe um valor e o retorna para o sistema
*/

  int digitado;
  printf("Digite um numero inteiro: \n");
  scanf("%d",&digitado);
  return digitado;
}

/*
\ brief função para mostrar os numeros digitados na função ler
\ brief esta função será utilizada por outras  funções
*/

void mostra(int num)
{
  printf{"%d\n",num);
}

/*
\brief função para mostra os numeros na tela
\param *vet é um ponteiro utilizado como vetor que vai armazenar os dados
\param tamanho vai receber a quantidade de numeros digitados
*/

void exibe(int* vet, int tamanho)
{
  int i;
  printf("\n");
  for (i=0;i<tamanho;i++)
	mostra(vet[i]);
  printf("\n\n");
}

/*
\brief *preenche ponteiro para percorre o vetor criado anteriomente
\param malloc aloca um espaço de memória do tamnho necessário para a variável
\param vet[i] recebe os valores digitados na função ler()
*/

int* preenche(int tamanho)
{
  int *vet = 0;
  vet = (int *) malloc (tamanho * sizeof(int));
  if (vet)
  {
	printf("\n PREENCHIMENTO DOS DADOS \n");	
	for (i=0;i < tamanho;i++)
        {
	    vet[i] = ler();
        }
  }
  return vet;
}

/*
\brief função para ordenar os numeros e imprimir 
*/
int ordena(int* vet,int tamanho)
{
  int i, j,aux,r;
  printf("ORDENA OS NUMEROS DIGITADOS EM FORMA CRESCENTE \n")
  for(i=0;i<tamanho;i++)
     for(j=0;j<tamanho;j++)
/*
\brief parte da função responsável por percorrer os numeros digitados
*/
	if(vet[j] > vet[j+1]);
	{
	   aux = vet[j];
	   vet[j+1] = vet[j];
	   vetn[j] = aux;
	}
  printf("\n\t\tNUMEROS ORDENADOS\n\n");
/*
\brief laço for para reescrever os numero, agora organizados
*/
  for(r =0; r< tamanho;r++)
  {
	printf(" %d\n", vet[r];
  }
/*param inserido neste ponto um pause para teste de execuçao
  system("pause");
}

/*
\brief função para calcular a média
\param retorna  o valor da média para calculo do desvio padrão em outras funções*/

float media(float* vet, tamanho)
{
  float med;
  int i, soma=0, med;
  for(i=0; i< tamanho; i++)
      soma = soma+vet[i];
  med = soma/tamanho;
  printf("media eh: %f\n", med); 
  return med; 
}

/*
\brief função matematica para desvio padrão
*/
  float desvioP(int* vet,float  med, int tamanho)
  float desvioPadrao, variancia, *desv, *desvQ, SDQ = 0;
  int a, b, i;
/*
\param este for calcula o desvio de cada valor  
*/
  for(i=0; i < tamanho; i++)
  {
      desv[i] = vet[i] - med;
      printf("desvio eh:\n",desv[i]);    
  }
 
/*
\param laço for responsável pelo calculo do desvio quadrático 
*/
  for(a=0; a < tamanho; a++)
  {
      desvQ[a] = desv[a] }*desvI[a];
      printf("desvio quadratico eh:\n",desvQ[a]);
  }
/*
\param laço for responsável pelo calculo ddo desvio padrão
*/
  for(b=0; b < tamanho; b++)
      SDQ = SDQ +desvQ[b];
  variancia = SDQ/tamanho;
  desvioPadrao = pow(variancia,1/2);
  printf("desvio Padrao eh:\n",desvioPadrao);
 }

/*
\brief função principal
*/
int main()
{
      printf("para média dos numeros digitados tecle 3:\n");
      printf("para desvio padrão tecle 4:\n");
      printf("para sair tecle 0:\n");
}
       

