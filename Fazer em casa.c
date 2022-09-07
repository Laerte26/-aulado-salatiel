#include<stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int continuar=1;

    do
    {
        printf("\n\tMenu de Cursos\n\n");
        printf("Informe uma opção válida e aperte a tecla enter\n\n");
        printf("1. Gestão de TI\n");
        printf("2. Análise de Desenvolvimento de Sistemas\n");
        printf("3. Segurança da Informação\n");
        printf("4. Média Aluno\n");
        printf("5. Diferenca de Maior e Menor\n");
        printf("6. Média ADS\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:
                gestaoTI();
                break;

            case 2:
                analiseDesenvolvimentoSistemas();
                break;

            case 3:
                segurancaInformacao();
                break;

            case 4:
                mediaAluno();
                break;

            case 5:
                Diferenca_de_Maior_e_Menor();
                break;

           case 6:
                mediaADS();
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
void gestaoTI()
{
    printf("Gestão de TI é a atividade que coordena todos os processos relacionados à tecnologia da informação dentro de uma empresa. Logo, o gestor de TI é o profissional responsável por garantir a máxima eficiência no uso dos recursos humanos e tecnológicos, otimizando a performance da organização.\n");
}

void analiseDesenvolvimentoSistemas()
{
    system("cls || clear");
    printf("O analista e desenvolvedor de sistemas é o profissional responsável por desenvolver, projetar, analisar, implementar e realizar a manutenção de sistemas de informação de diversos setores.\n");
}

void segurancaInformacao()
{
    system("cls || clear");
    printf("Segurança da informação é a prática que mantém os dados sensíveis em sigilo, a defesa do que não é público\n");
}

void mediaAluno()
{
    system("cls || clear");
    float nota1;
  	float nota2;
  	float nota3;
  	float nota4;
  	float mediaAnual;
  	float mediaFinal;

  	// entrada
  	printf("Digite a nota 1 : ");
	scanf("%f", &nota1);
  	printf("Digite a nota 2 : ");
	scanf("%f", &nota2);
	printf("Digite a nota 3 : ");
	scanf("%f", &nota3);
	printf("Digite a nota 4 : ");
	scanf("%f", &nota4);

  	// processamento
  	mediaAnual = (nota1 + nota2 + nota3 + nota4) / 4 ;

	// criticar para saber se o aluno esta aprovado ou retido
	// saida
	if (mediaAnual >= 7)
  	{
  		printf( "APROVADO !!!");
    }
  	else
  	{
	    printf( "REPROVADO !!!");
  	}
  	return 0;

}

void Diferenca_de_Maior_e_Menor()
    {
        // declaração de variaveis
  	int n1;
  	int n2;
  	int result;

  	// entrada
  	printf("Digite o valor do primeiro numero : ");
	scanf("%d", &n1);
  	printf("Digite o valor do segundo numero : ");
	scanf("%d", &n2);

  	// processamento
  	if (n1 > n2)
  	{
  		result = n1 - n2;
    }
  	else
  	{
	    result = n2 - n1;
  	}

  	// saida
  	printf("O Resultado da diferença do maior numero pelo menor e : %d", result);

  	return 0;


}

void mediaADS()
 {
    system("cls || clear");
    float np1;
  	float np2;
  	float pim;
  	float mediaFinal;
  	float faltas;

  	// entrada
  	printf("Digite a np 1 : ");
	scanf("%f", &np1);
  	printf("Digite a np 2 : ");
	scanf("%f", &np2);
	printf("Digite a pim : ");
	scanf("%f", &pim);
	printf("Digite as faltas :");
	scanf("%f", &faltas);

		// processamento
  	mediaFinal = (np1 * 0,4) + (np2 * 0,4) + (pim * 0,2);



	// criticar para saber se o aluno esta aprovado ou retido
	// saida
 }


void sair()
{
    printf("Obrigado por visitar nossa lista de cursos\n");
}
