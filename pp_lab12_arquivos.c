#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
Exercício 6 (extra). Repita o Exercício 4, agora em um arquivo binário de nome “pes-
soas.bin’.
*/


struct pessoa
{
	char nome[100];
	int opcao, idade;
	float altura;
};

int main()
{
	FILE *arq;
	struct pessoa p;
	arq = fopen("pessoas.bin","rb");
	if(arq == NULL)
	{
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}


	fscanf(arq, "%s - %d - %f", p.nome, &p.idade, &p.altura);
	printf("Leitura em arquivo binario\n");
	printf("\nNome: %s\nIdade: %d\nAltura: %.2f\n\n", p.nome, p.idade, p.altura);


	fclose(arq);

	return 0;	

}	


/*
Exercício 5 (extra). Repita o Exercício 3, agora em um arquivo binário de nome “pes-
soas.bin”
*/

/*
struct pessoa
{
	char nome[100];
	int opcao, idade;
	float altura;
};

int main()
{
	FILE *arq;
	struct pessoa p;
	arq = fopen("pessoas.bin","wb");
	if(arq == NULL)
	{
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}
	printf("Escrita em arquivo binario\n\n");		
	printf("Digite o nome: ");
	scanf("%99[^\n]", p.nome); //alternativa para limpar o bufer
	printf("Digite a idade: ");
	scanf("%d", &p.idade);
	printf("Digite a altura: ");
	scanf("%f", &p.altura);
        fprintf(arq, "%s - %d - %.2f\n", p.nome, p.idade, p.altura);
	
	
	fclose(arq);

	return 0;	

}
*/

/*
Exercício 4. Dado um arquivo texto de nome “pessoas.txt”, gravado no Exercício 3, de-
senvolva um programa que:
• abra o arquivo em modo leitura;
• leia um nome do usuário;
• imprima a informação correspondente àquela pessoa; e
• feche o arquivo.
*/

/*
struct pessoa
{
	char nome[100];
	int opcao, idade;
	float altura;
};

int main()
{
	FILE *arq;
	struct pessoa p;
	arq = fopen("pessoas.txt","r");
	if(arq == NULL)
	{
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}


	fscanf(arq, "%s - %d - %f", p.nome, &p.idade, &p.altura);
	printf("\nNome: %s\nIdade: %d\nAltura: %.2f\n\n", p.nome, p.idade, p.altura);


	fclose(arq);

	return 0;	

}	
*/



/*
Exercício 3. Faça um programa que:
• crie/abra um arquivo texto de nome “pessoas.txt”
• permita que o usuário entre com a informação de diferentes pessoas e grave-a no ar-
quivo;
– uma pessoa é formada por: nome, idade e altura
• feche o arquivo
*/
/*
struct pessoa
{
	char nome[100];
	int opcao, idade;
	float altura;
};

int main()
{
	FILE *arq;
	struct pessoa p;
	arq = fopen("pessoas.txt","w");
	if(arq == NULL)
	{
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}
		
	printf("Digite o nome: ");
	scanf("%99[^\n]", p.nome); //alternativa para limpar o bufer
	printf("Digite a idade: ");
	scanf("%d", &p.idade);
	printf("Digite a altura: ");
	scanf("%f", &p.altura);
        fprintf(arq, "%s - %d - %.2f\n", p.nome, p.idade, p.altura);
	
	
	fclose(arq);

	return 0;	

}
*/

/*
Exercício 2. Dado um arquivo texto de nome “caracteres.txt”, gravado no Exercício 1, faça
um programa que:
• abra o arquivo em modo leitura;
• leia um caractere do usuário;
• imprima quantas vezes o caractere escolhido aparece no arquivo; e
• feche o arquivo.
*/
/*
int main()
{
	FILE *arq;
	char c, i;
	int cont=0;
	
	arq = fopen("caracteres.txt","r");
	if(arq == NULL)
	{
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}
	
	printf("Digite um caracter: ");
	scanf("%c", &c);
	
	for (i=0; i != EOF; i++)
	{
		if(fgetc(arq)==c)
        	cont = cont + 1;
	}   
	printf("O caracter > %c < aparece %d vezes no texto.\n\n", c, cont);

	fclose(arq);
	
	return 0;

}
*/

/*
Exercício 1. Escreva um programa que:
• crie/abra um arquivo texto de nome “caracteres.txt”
• permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre
com o caractere ‘0’; e
• feche o arquivo.
*/
/*
int main()
{
	FILE *arq;
	char c=' ';
	arq = fopen("caracteres.txt","w");
	if(arq == NULL)
	{
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}	
	
	while(c!='0')
	{
		printf("Digite o caracter: ");
		scanf("%c", &c);
		getc(stdin);
		if(c=='0')
		break;
		fprintf(arq, "%c", c);		
	}

	
	fclose(arq);

	return 0;	

}
*/

