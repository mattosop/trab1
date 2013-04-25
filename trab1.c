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
	return vet;
}

/*
\brief função para ordenar os numeros e imprimir 
\param sequencia de for é para percorrer todas as posições do vetor
*/
void ordena(int *vet,int tamanho)
{
  	int v,i, j,aux;
	printf("ORDENA OS NUMEROS DIGITADOS EM FORMA CRESCENTE \n");
  	for(i=1;i<tamanho;i++)
	for(j=tamanho-1;j>=i;--j)
/*
\brief parte da função responsável por testar os numeros digitados
*/
		if(vet[j-1] > vet[j])
		{
	   		aux = vet[j-1];
	   		vet[j-1] = vet[j];
	   		vet[j] = aux;
		}
  	printf("\n\t\tNUMEROS ORDENADOS\n\n");
/*
\brief laço for para reescrever os numero, agora organizados
*/
  	for(v =0; v< tamanho;v++)
  	{
		printf(" %d\n", vet[v]);
  	}

}

/*
\brief função para calcular a média
\param retorna  o valor da média para calculo do desvio padrão em outras funções
\param M é a media dos valores digitados*/

float media(int* vet,int tamanho)
{
  	float M,soma=0;
  	int i;
  	for(i=0; i< tamanho; i++)
      		soma+=vet[i];
  	M = soma/tamanho;
  	printf("media eh: %f\n", M); 
  	return M; 
}

/*
\brief função matematica para desvio padrão
*/
void desviop(int* vet,float M, int tamanho)
{
  	float desvioPadrao, variancia,som;
  	int i,*desv;
/*
\param este for calcula o desvio de cada valor  
*/
  	for(i=0; i < tamanho; i++)
  	{
      		printf("%f\n\n",vet[i]);
		desv[i] = vet[i] - M;
      		printf("desvio do numero digitado %d eh: %f\n",i,desv[i]);    
  	}
 
/*
\param laço for responsável pelo calculo do desvio quadrático 
*/
	som =0;
	for(i=0; i < tamanho; i++)
     		som =som + ((vet[i]-M)*(vet[i]-M));
	printf("desvio quadratico eh:%f\n",som);
  	variancia = som/(tamanho-1);
	printf("variancia = %f\n",variancia);
  	desvioPadrao = sqrt(variancia);
  	printf("desvio Padrao eh:%f\n",&desvioPadrao);
}	

/*
\brief função principal
*/
int main()
{
	int *vetor,v,  tamanho;
	float DP, med;
	
	printf("\n\t\tPROGRAMA PARA COLOCAR NUMEROS EM ORDEM CRESCENTE\n");
      	printf("\n");
	printf("\nDIGITE A QUANTIDADE DE NUMEROS:\n");
        tamanho = ler();
	vetor = preenche(tamanho);      	
	printf("%d\n\n",vetor[2]);
	if(vetor)
	{

		exibe(vetor,tamanho);
	}
       	else
		printf("\nNAO EH POSSIVEL GERAR NUMEROS");

	ordena(vetor, tamanho);
	med = media(vetor,tamanho);
	desviop(vetor,med,tamanho);
}


