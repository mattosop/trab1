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
\brief 'digitado' é variavel local
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
	printf("%d\n",num);
}

/*
\brief função para mostra os numeros na tela
\param *vet é um ponteiro utilizado como vetor que vai armazenar os dados
\param tamanho vai receber a quantidade de numeros digitados
*/

void exibe(int* vetor, int tamanho)
{
	int i;
  	printf("\n");
  	for (i=0;i<tamanho;i++)
	mostra(vetor[i]);
  	printf("\n\n");
}

/*
\brief *preenche ponteiro para percorre o vetor criado anteriomente
\param malloc aloca um espaço de memória do tamnho necessário para a variável
\param vet[i] recebe os valores digitados na função ler()
*/

void * preenche(int tamanho)
{
  	int *vet, i;
  	vet = (int *)malloc(tamanho * sizeof(int));
  	if (vet)
  	{
		printf("\n PREENCHIMENTO DOS DADOS \n");	
		for (i=0;i < tamanho;i++)
        	{
	    		vet[i] = ler();
        	}
  	}
}

/*
\brief função para ordenar os numeros e imprimir 
\param sequencia de for é para percorrer todas as posições do vetor
*/
void ordena(int *vetor,int tamanho)
{
  	int v,i, j,aux;
	printf("ORDENA OS NUMEROS DIGITADOS EM FORMA CRESCENTE \n");
  	for(i=0;i<tamanho-1;i++)
	for(j=i+1;j<tamanho;j++)
/*
\brief parte da função responsável por testar os numeros digitados
*/
		if(vetor[i] > vetor[j])
		{
	   		aux = vetor[i];
	   		vetor[i] = vetor[j];
	   		vetor[j] = aux;
		}
  	printf("\n\t\tNUMEROS ORDENADOS\n\n");
/*
\brief laço for para reescrever os numero, agora organizados
*/
  	for(v =0; v< tamanho;v++)
  	{
		printf(" %d\n", vetor[v]);
  	}

}

/*
\brief função para calcular a média
\param retorna  o valor da média para calculo do desvio padrão em outras funções
\param M é a media dos valores digitados*/

float media(int* vetor,int tamanho)
{
  	float M;
  	int i, soma=0;
  	for(i=0; i< tamanho; i++)
      		soma = soma+vetor[i];
  	M = soma/tamanho;
  	printf("media eh: %f\n", M); 
  	return M; 
}

/*
\brief função matematica para desvio padrão
*/
void desvioP(int* vetor,float M, int tamanho)
{
  	float desvioPadrao, variancia, *desv, *desvQ, SDQ = 0;
  	int a, b, i;
/*
\param este for calcula o desvio de cada valor  
*/
  	for(i=0; i < tamanho; i++)
  	{
      		desv[i] = vetor[i] - M;
      		printf("desvio eh: %f\n",desv[i]);    
  	}
 
/*
\param laço for responsável pelo calculo do desvio quadrático 
*/
	for(a=0; a < tamanho; a++)
  	{
      		desvQ[a] = desv[a] * desv[a];
      		printf("desvio quadratico eh:\n",desvQ[a]);
  	}
/*
\param laço for responsável pelo calculo do desvio padrão
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
	int M, *vetor, *vetorNovo, tamanho;
	
	printf("\n\t\tPROGRAMA PARA COLOCAR NUMEROS EM ORDEM CRESCENTE\n");
      	printf("\n");
	printf("\nDIGITE A QUANTIDADE DE NUMEROS:\n");
        tamanho = ler();
	vetor = preenche(tamanho);      	
	if (vetor)
	{
		printf("\nesteve aqui");
		exibe(vetor,tamanho);
		free (vetor);
	}
       	else
		printf("\nNAO EH POSSIVEL GERAR NUMEROS");
}

