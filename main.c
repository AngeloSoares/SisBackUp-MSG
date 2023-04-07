#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Alfabeto PT-BR


int main() {
	setlocale(LC_ALL,"Portuguese"); //Alfabeto PT-BR
	
	FILE *arq;
	arq = fopen("Todas\\mensagens.txt","r");
	FILE *obj;
	obj = fopen("Pronto\\objeto.txt","w");
	
	char msg[1000000];
	
	printf("Desenvolvido por CB-CN Angelo\n\n");
	printf("---------------------------------------\n\n");
	printf("BEM VINDO AO SisBackup:\n");
	printf("Pressione qualquer Tecla para continuar: ");
	getchar();
	printf("---------------------------------------\n\n");
	
	
	if (arq == NULL)
	{
		printf("Erro ao Abrir arquivo!!!\n");
		printf("Pressione qualquer Tecla finalizar: ");
		getchar();
		return 0;
	}
	
	else 
	{
		printf("---------------------------------------\n");
		printf("Arquivo 'Mensagens' Aberto com Sucesso!!\n");
		printf("---------------------------------------\n\n");
		
		
		while(fgets(msg,1000000,arq) != NULL) //Ler todas as Mensagens
		{
			printf("%s",msg);
			fputs(msg, obj); // Escreve no arquivo Objeto
		}
		
		
		fclose(arq);
		fclose(obj);
		printf("---------------------------------------\n");
		printf("Li o Arquivo até o final !!!\n");
		printf("---------------------------------------\n\n");
		printf("Pressione qualquer Tecla finalizar: ");
		getchar();		
					
	}
	
	return 0;
}



