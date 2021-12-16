#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include "listaLigada.h"

int main(){
    setlocale(LC_ALL,"portuguese");
    setlocale(LC_ALL, "Portuguese");
    //Menu Inicial.
    int i = 0, n = 0, lidos = 0, new_qtd = 0;
    int x, identificador, min, max, menu,m , opc, e, posicao = 1;
    struct FUNCIONARIO *cad = NULL;
    struct funcionario dados_func, c;

    Lista *li;

    li = criaLista();
    FILE *f;
    f = fopen("arquivo.txt", "rb");
    if(f == NULL){ //se arq de dados nao existir, então cria-o
        f = fopen("arquivo.txt", "wb");
        printf("Informe a quantidade de elementos para Cadastro:\n");
        scanf("%d", &new_qtd);
        cad = aloca(new_qtd);//cria bloco com a qtd informada, e segue para coletar dados
        system("pause");
        system("cls");
    }else{
 //se arq dados existir, então abre e lê conteúdo. Para isso deve existir
 //espaço para pelo menos 1 elemento no vetor dinamico, então aloca com espaço para 1
        cad = aloca(1);
        printf("Arquivo de dados encontrado, efetuando leitura...");
        while(!feof(f)){//enquanto nao for o fim...
        n = fread(&c, sizeof(FUNCIONARIO), 1, f);
 //esse if detecta quando o fread não conseguir ler do arquivo porque é o seu fim.
 //de ler a ultima linha, ainda não terá chegado ao fim do arq.
 //então aqui, impedimos a duplicação da última linha do arquivo, ou estrutura.
            if(n == 1){
            lidos++;
            cad = realoca(cad, lidos);
            //cad[(lidos) - 1] = c;
            f = fopen("arquivo.txt", "ab");
            }
        }
    }
    system("cls");

    do {
            m = menuInit();
            switch (m){
                case 1:
                    printf("\n=-=-=-=Adicionando um funcionário!=-=-=\n");
                    f = fopen("arquivo.txt", "ab");
                    dados_func = coletaDados();
                    x = insere_lista_ordenada(li,dados_func );
                    if(x){
                        printf("\nInserido com sucesso!\n\n");
                        fclose(f);
                    }else{
                        printf("\nNão foi possivel inserir o Funcionário!\n");
                    }
                    break;

                case 2 :

                    printf("\n=-=-=-=-=-Removendo um funcionário!=-=-=-=\n");
                    printf("Digite o id do Funcionario que deseja Remover: \n");
                    scanf("%d", &identificador);
                    int e = 0;
                    f = fopen("arquivo.txt", "ab");
                    x = consulta_lista_id(li, identificador, &dados_func);
                    printf("ID: %d \n",  dados_func.id);
                    printf("Nome: %s \n",  dados_func.nome);
                    printf("Endereço: %s \n",  dados_func.endereco);
                    printf("Idade: %d \n",  dados_func.idade);
                    printf("Salário: %.2f \n",  dados_func.salario);
                    printf("Cargo: %s \n",  dados_func.cargo);

                    printf("Deseja mesmo excluir? 1-Sim; 2-Não\n");
                    scanf("%d", &e);

                    if(e==1){
                        x =  remove_lista(li,identificador);
                        printf("\nFuncionario Removido com sucesso!\n\n");
                        fclose(f);
                    }else{
                        printf("\nNão foi possivel Remover o Funcionario!\n");
                    }
                    break;


                case 3: //[3] Editar funcionário

                    printf("\nSelecionado: Editar funcionário!\n");

                    printf("Digite o ID do Funcionário que deseja editar: ");
                    scanf("%d", &identificador);
                    f = fopen("arquivo.txt", "ab");
                   printf("\nO que deseja alterar? \n[1] Nome  \n[2] Endereço \n[3] Idade  \n[4] Salário  \n[5] Cargo  \n[6]Sair e Salvar; \n");
                    scanf("%d", &opc);

                     switch (opc){
                        case 1:
                            printf("\nSelecionado: Nome\n");

                            getchar();
                            printf("Escreva o Nome: ");
                            fgets(dados_func.nome, 40, stdin);

                            x = insere_lista_ordenada(li,dados_func );
                            if(x){
                                printf("\nInserido de forma ordenada com sucesso!\n\n");
                            }else{
                                printf("\nNão foi possivel inserir o Funcionario!\n");
                            }
                            break;

                        case 2:
                            printf("Selecionado: Endereço\n");

                            getchar();
                            printf("Escreva o Endereço: ");
                            fgets(dados_func.endereco, 40, stdin);

                            x = insere_lista_ordenada(li,dados_func );
                            if(x){
                                printf("\nInserido de forma ordenada com sucesso!\n\n");
                            }else{
                                printf("\nNão foi possivel inserir o Funcionario!\n");
                            }
                            break;

                        case 3:
                            printf("Selecionado: Idade\n");


                            printf("Escreva a idade: ");
                            scanf("%d", &dados_func.idade);

                            x = insere_lista_ordenada(li,dados_func );
                            if(x){
                                printf("\nInserido de forma ordenada com sucesso!\n\n");
                            }else{
                                printf("\nNão foi possivel inserir o Funcionario!\n");
                            }
                            break;

                        case 4:
                            printf("Selecionado: Salário\n");

                            getchar();
                            printf("Escreva a porcentagem de reajuste: \n");
                            float salario_novo, reajuste;
                            scanf("%f", &reajuste);
                            salario_novo = dados_func.salario+((reajuste/100)*dados_func.salario);
                            dados_func.salario = salario_novo;
                            printf("O salário reajustado será de R$%.2f", dados_func.salario);

                            x = insere_lista_ordenada(li,dados_func);
                            if(x){
                                printf("\nAlterado com sucesso!\n\n");
                            }else{
                                printf("\nNão foi possivel alterar o salário do Funcionario!\n");
                            }
                            break;

                        case 5:
                            printf("Selecionado: Cargo\n");

                            getchar();
                            printf("Escreva o Cargo: \n");
                            fgets(dados_func.cargo, 30, stdin);

                            x = insere_lista_ordenada(li,dados_func);
                            if(x){
                                printf("\nAlterado com sucesso!\n");
                            }else{
                                printf("\nNão foi possivel alterar o Endereço do Funcionario!\n");
                            }
                            break;

                        case 6:
                            printf("Saindo e salvando... \n");
                            fclose(f);
                            return 1;
                            break;

                        default:
                            printf("Escolha inválida, digite novamente. \n");


                     }

                case 4:  //[4] Buscar funcionário por ID
                    printf("Digite o ID do funcionario: ");
                    scanf("%d", &identificador);

                    x = consulta_lista_id(li, identificador, &dados_func);
                    printf("\n=-=-=-=-=-=-Buscando");
                    Sleep(500);
                    printf("#");
                    Sleep(500);
                    printf("#");
                    Sleep(500);
                    printf("#");
                    Sleep(500);
                    printf("#");
                    Sleep(500);
                    printf("#");
                    Sleep(500);
                    printf("ID: %d \n",  dados_func.id);
                    printf("Nome: %s \n",  dados_func.nome);
                    printf("Endereço: %s \n",  dados_func.endereco);
                    printf("Idade: %d \n",  dados_func.idade);
                    printf("Salário: %.2f \n",  dados_func.salario);
                    printf("Cargo: %s \n",  dados_func.cargo);

                    break;


                case 5:  //[5] Exibir funcionário ordenados por ID
                    printf("\nExibindo todos os funcionarios");
                    int z = tamLista(li);
                    printf("\nQuantidade de Funcionarios é: %d\n", z);

                    for(posicao = 0; posicao < z ; posicao++){
                            x = consulta_lista_id(li, posicao, &dados_func);
                            printf("ID: %d \n",  dados_func.id);
                            printf("Nome: %s \n",  dados_func.nome);
                            printf("Endereço: %s \n",  dados_func.endereco);
                            printf("Idade: %d \n",  dados_func.idade);
                            printf("Salário: %.2f \n",  dados_func.salario);
                            printf("Cargo: %s \n",  dados_func.cargo);
                   }
                    break;


                case 6: //[6] Exibir uma lista de funcionários por faixa salarial.
                    printf("\nExibindo lista de funcionários por faixa salarial.");
                    printf("\nDigite o intervalo minimo do sálario: ");
                    scanf("%f", &min);
                    printf("\nDigite o intervalo maximo do sálario: ");
                    scanf("%f", &max);

                    break;
                case 0:
                    fclose(f);
                    printf("\nSalvando arquivos");
                    Sleep(500);
                    printf("#");
                    Sleep(500);
                    printf("#");
                    Sleep(500);
                    printf("#");
                    Sleep(500);
                    printf("# \n");
                    Sleep(500);
                    break;
                default:
                    printf("Opção invalida\n");
            }
        }while(m != 0);


        fclose(f);
        apagaLista(li);
        printf("Limpando dados da sessão...\nObrigado.\n\n");
        system("pause");
}


