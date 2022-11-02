#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>

void menuAdministrador(void);
void menuCliente(void);
void retornarMensagem(const char* mensagem);
void gerenciarTela(int opcao);
void montarMenuPrincipal(void);
void gerenciarMenuPrincipal(int opcao);
void menuOperador(void);
void sair(void);

void montarMenuCliente(void);
void gerenciarCliente(int opcao);
void cadastrarCliente(void);
void alterarCliente(void);
void consultarCliente(void);
void excluirCliente(void);

void montarMenuEstoqueProdutos(void);
void gerenciarEstoqueProdutos(int opcao);
void cadastrarEstoqueProdutos(void);
void alterarEstoqueProdutos(void);
void consultarEstoqueProdutos(void);
void excluirEstoqueProdutos(void);

void montarMenuPedidos(void);
void gerenciarPedidos(int opcao);
void cadastrarPedidos(void);
void alterarPedidos(void);
void consultarPedidos(void);
void excluirPedidos(void);

void montarMenuRelatorios(void);
void gerenciarRelatorios(int opcao);
void cadastrarRelatorios(void);
void alterarRelatorios(void);
void consultarRelatorios(void);
void excluirRelatorios(void);

void retornarMensagem(const char* mensagem)
{
    printf(mensagem);
    return;
}
void sair()
{
    printf("Obrigado por visitar nossa lista de cursos\n");
    system("pause");
}
void configurarTela()
{
    int opcao = 0;
    printf("1. Azul/Verde\n");
    printf("2. Roxo/Branco\n");
    printf("3. Vermelho/Amarelo\n");
    printf("4. Preto/Verde\n");
    printf("5. Voltar ao Menu Principal\n");
    system("pause>nul");
    scanf("%i", &opcao);
    system("cls || clear");
    gerenciarTela(opcao);
}
void gerenciarTela(int opcao)
{
    switch(opcao)
    {
        case 1:
            system("color 1A");
            montarMenuPrincipal();
            break;

        case 2:
            system("color 5F");
            montarMenuPrincipal();
            break;

        case 3:
            system("color 4E");
            montarMenuPrincipal();
            break;

        case 4:
            system("color 0A");
            break;
        case 5:
            montarMenuPrincipal();
            montarMenuPrincipal();
            break;
        default:
            printf("Digite uma opcao valida\n");
            system("pause");
    }
}
void sobre()
{
    printf("\n\n\t\t\tPIM\n\n");
    printf("\tAnálise e Desenvolvimento de Sistemas\n\tPIM - Projeto Integrado Multidisciplinar\n");
    printf("\tIntegrantes:\n\t\tSalatiel\n\t\txxxxxxxxxxx\n\t\txxxxxxxxxxxxxx\n\t\txxxxxxxxxx");
    getch();
}

void menuAdministrador()
{
    int continuar = 0;

    printf("\n\tMenu de Administrador\n\n");
    printf("Informe uma opção válida e aperte a tecla enter\n\n");
    printf("1. Gerenciar Cliente\n");
    printf("2. Gerenciar Estoque/Produtos\n");
    printf("3. Gerenciar Pedidos\n");
    printf("4. Gerenciar Relatorios\n");
    printf("5. Voltar ao Menu Principal\n");

    scanf("%i", &continuar);
    system("cls || clear");

    switch(continuar)
    {
        case 1:
            montarMenuCliente();
            break;
        case 2:
            montarMenuEstoqueProdutos();
            break;
        case 3:
            montarMenuPedidos();
            break;
        case 4:
            montarMenuRelatorios();
            break;
        case 5:
            montarMenuPrincipal();
            break;
        default:
            printf("Digite uma opcao valida\n");
            system("pause");
    }
}

void montarMenuCliente()
{
    int opcao = 0;
    printf("\n\tMenu de Administrador\n\n");
    printf("Informe uma opção válida e aperte a tecla enter\n\n");
    printf("1 Cadastrar Cliente\n");
    printf("2 Alterar Cliente\n");
    printf("3 Consultar Cliente\n");
    printf("4 Excluir Cliente\n");
    printf("5 Voltar ao Menu Principal\n");
    system("pause>nul");
    scanf("%i", &opcao);
    system("cls || clear");
    gerenciarCliente(opcao);
}
void gerenciarCliente(int opcao)
{
    switch(opcao)
    {
        case 1:
            cadastrarCliente();
            printf("Construir Lógica para a função cadastrarCliente\n");
            system("pause>nul");
            break;

        case 2:
            alterarCliente();
            printf("Construir Lógica para a função alterarCliente\n");
            system("pause>nul");
            break;

        case 3:
            consultarCliente();
            printf("Construir Lógica para a função consultarCliente\n");
            system("pause>nul");
            break;

        case 4:
            excluirCliente();
            printf("Construir Lógica para a função excluirCliente\n");
            system("pause>nul");
            break;
        case 5:
            menuAdministrador();
            break;
        default:
            printf("Digite uma opcao valida\n");
            system("pause");
    }
}
void cadastrarCliente()
{
    printf("Desenvolver a função cadastrarCliente\n");
    system("pause>nul");
    return;
}
void alterarCliente()
{
    printf("Desenvolver a função alterarCliente\n");
    system("pause>nul");
    return;
}
void excluirCliente()
{
    printf("Desenvolver a função excluirCliente\n");
    system("pause>nul");
    return;
}
void consultarCliente()
{
    printf("Desenvolver a função consultarCliente\n");
    system("pause>nul");
    return;
}

void montarMenuEstoqueProdutos()
{
    int opcao = 0;
    printf("\n\tMenu de Administrador - Estoque/Produtos\n\n");
    printf("Informe uma opção válida e aperte a tecla enter\n\n");
    printf("1 Cadastrar Estoque/Produtos\n");
    printf("2 Alterar Estoque/Produtos\n");
    printf("3 Consultar Estoque/Produtos\n");
    printf("4 Excluir Estoque/Produtos\n");
    printf("5. Voltar ao Menu Principal\n");
    system("pause>nul");
    scanf("%i", &opcao);
    system("cls || clear");
    gerenciarEstoqueProdutos(opcao);
}
void gerenciarEstoqueProdutos(int opcao)
{
    switch(opcao)
    {
        case 1:
            cadastrarEstoqueProdutos();
            printf("Construir Lógica para a função cadastrarEstoqueProdutos\n");
            system("pause>nul");
            break;

        case 2:
            alterarEstoqueProdutos();
            printf("Construir Lógica para a função alterarEstoqueProdutos\n");
            system("pause>nul");
            break;

        case 3:
            consultarEstoqueProdutos();
            printf("Construir Lógica para a função consultarEstoqueProdutos\n");
            system("pause>nul");
            break;

        case 4:
            excluirEstoqueProdutos();
            printf("Construir Lógica para a função excluirEstoqueProdutos\n");
            system("pause>nul");
            break;
        case 5:
            menuAdministrador();
            break;
        default:
            printf("Digite uma opcao valida\n");
            system("pause");
    }
}
void cadastrarEstoqueProdutos()
{
    printf("Desenvolver a função cadastrarEstoqueProdutos\n");
    system("pause>nul");
    return;
}
void alterarEstoqueProdutos()
{
    printf("Desenvolver a função alterarEstoqueProdutos\n");
    system("pause>nul");
    return;
}
void excluirEstoqueProdutos()
{
    printf("Desenvolver a função excluirEstoqueProdutos\n");
    system("pause>nul");
    return;
}
void consultarEstoqueProdutos()
{
    printf("Desenvolver a função excluirEstoqueProdutos\n");
    system("pause>nul");
    return;
}

void montarMenuPedidos()
{
    int opcao = 0;
    printf("\n\tMenu de Administrador\n\n");
    printf("Informe uma opção válida e aperte a tecla enter\n\n");
    printf("1 Cadastrar Pedidos\n");
    printf("2 Alterar Pedidos\n");
    printf("3 Consultar Pedidos\n");
    printf("4 Excluir Pedidos\n");
    printf("5. Voltar ao Menu Principal\n");
    system("pause>nul");
    scanf("%i", &opcao);
    system("cls || clear");
    gerenciarPedidos(opcao);
}
void gerenciarPedidos(int opcao)
{
    switch(opcao)
    {
        case 1:
            cadastrarPedidos();
            printf("Desenvolver a função cadastrarPedidos\n");
            system("pause>nul");
            break;

        case 2:
            alterarPedidos();
            printf("Desenvolver a função alterarPedidos\n");
            system("pause>nul");
            break;

        case 3:
            consultarPedidos();
            printf("Desenvolver a função consultarPedidos\n");
            system("pause>nul");
            break;

        case 4:
            excluirPedidos();
            printf("Desenvolver a função excluirPedidos\n");
            system("pause>nul");
            break;
        case 5:
            menuAdministrador();
            break;
        default:
            printf("Digite uma opcao valida\n");
            system("pause");
    }
}
void cadastrarPedidos()
{
    printf("Desenvolver a função cadastrarPedidos\n");
    system("pause>nul");
}
void alterarPedidos()
{
    printf("Desenvolver a função alterarPedidos\n");
    system("pause>nul");
}
void excluirPedidos()
{
    printf("Desenvolver a função excluirPedidos\n");
    system("pause>nul");
}
void consultarPedidos()
{
    printf("Desenvolver a função consultarPedidos\n");
    system("pause>nul");
}

void montarMenuRelatorios()
{
    int opcao = 0;
    printf("\n\tMenu de Administrador\n\n");
    printf("Informe uma opção válida e aperte a tecla enter\n\n");
    printf("1 Cadastrar Relatórios\n");
    printf("2 Alterar Relatórios\n");
    printf("3 Consultar Relatórios\n");
    printf("4 Excluir Relatórios\n");
    printf("5. Voltar ao Menu Principal\n");
    system("pause>nul");
    scanf("%i", &opcao);
    system("cls || clear");
    gerenciarRelatorios(opcao);
}
void gerenciarRelatorios(int opcao)
{
    switch(opcao)
    {
        case 1:
            cadastrarRelatorios();
            printf("Desenvolver a função cadastrarRelatorios\n");
            system("pause>nul");
            break;

        case 2:
            alterarRelatorios();
            printf("Desenvolver a função alterarRelatorios\n");
            system("pause>nul");
            break;

        case 3:
            consultarRelatorios();
            printf("Desenvolver a função consultarRelatorios\n");
            system("pause>nul");
            break;

        case 4:
            excluirRelatorios();
            printf("Desenvolver a função excluirRelatorios\n");
            system("pause>nul");
            break;
        case 5:
            menuAdministrador();
            break;
        default:
            printf("Digite uma opcao valida\n");
            system("pause");
    }
}
void cadastrarRelatorios()
{
    printf("Desenvolver a função cadastrarRelatorios\n");
    system("pause>nul");
    return;
}
void alterarRelatorios()
{
    printf("Desenvolver a função alterarRelatorios\n");
    system("pause>nul");
    return;
}
void excluirRelatorios()
{
    printf("Desenvolver a função excluirRelatorios\n");
    system("pause>nul");
    return;
}
void consultarRelatorios()
{
    printf("Desenvolver a função consultarRelatorios\n");
    system("pause>nul");
    return;
}

void menuOperador()
{
    printf("Desenvolver a função MenuOperador\n");
    system("pause>nul");
    return;
}

void montarMenuPrincipal()
{
    int opcao = 0;
    printf("\n\tMenu de Principal\n\n");
    printf("Informe uma opção válida e aperte a tecla enter\n\n");
    printf("1. Menu Administrador\n");
    printf("2. Menu Operador\n");
    printf("3. Configurar Tela\n");
    printf("4. Sobre\n");
    printf("5. Sair\n");
    system("pause>nul");
    scanf("%i", &opcao);
    system("cls || clear");
    gerenciarMenuPrincipal(opcao);
}
void gerenciarMenuPrincipal(int opcao)
{
    switch(opcao)
    {
        case 1:
            menuAdministrador();
            break;
        case 2:
            menuOperador();
            break;
        case 3:
            configurarTela();
            break;
        case 4:
            sobre();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Digite uma opcao valida\n");
            system("pause");
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("title PIM - Projeto Integrado Multidisciplinar");
    system("color 1F");
    montarMenuPrincipal();
}
