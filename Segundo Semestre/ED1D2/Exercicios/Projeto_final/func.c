#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <func.h>


//funções detalhadas do func.h

typedef struct cadastro{
char nome[41];
int idade;
char endereco[31];
}Cadastro;

 Cadastro *aloca(int n);
 Cadastro *realoca(Cadastro *cad, int n);
 Cadastro coleta();
 void imprimeDados(Cadastro *cad, int n);
 void liberaDados(Cadastro *cad);

 int main (){
 int i, n = 0, lidos = 0, new_qtd;
 Cadastro *cad, c;
 FILE *f;
 f = fopen("arquivo.bin", "rb");
 if(f == NULL){ //se arq de dados nao existir, então cria-o
 f = fopen("arquivo.bin", "wb");
 printf("Informe a quantidade de elementos para Cadastro:\n");
 scanf("%d", &new_qtd);
 cad = aloca(new_qtd);//cria bloco com a qtd informada, e segue para coletar dados
 }else{
 //se arq dados existir, então abre e lê conteúdo. Para isso deve existir
 //espaço para pelo menos 1 elemento no vetor dinamico, então aloca com espaço para 1
 cad = aloca(1);
 printf("Arquivo de dados encontrado, efetuando leitura...");
 while(!feof(f)){//enquanto nao for o fim...
 n = fread(&c, sizeof(Cadastro), 1, f);
 //esse if detecta quando o fread não conseguir ler do arquivo porque é o seu fim.
 //de ler a ultima linha, ainda não terá chegado ao fim do arq.
 //então aqui, impedimos a duplicação da última linha do arquivo, ou estrutura.
 if(n == 1){
 lidos++;
 cad = realoca(cad, lidos);
 cad[lidos - 1] = c;
 }
 }
 fclose(f);

 printf("\nforam lidos %d registros no arquivo de dados\n", lidos);
 printf("Entre com a nova quantidade de elementos para os dados: ");
 scanf("%d", &new_qtd);
 system("cls");
 }
 //insere novos elementos a partir da última posição lida, se nova qtd não for maior
 //do que itens lidos no arquivo, esse "for" não é executado "i < new_qtd" <- false!!
 for(i = lidos; i < new_qtd; i++){
 cad[i] = coleta();
 }

 imprimeDados(cad, new_qtd);
 getchar();
 //salva todos os dados e encerra programa
 f = fopen("arquivo.bin", "wb");
 fwrite(cad, sizeof(Cadastro), new_qtd, f);
 fclose(f);
 liberaDados(cad);
 return 0;
 }

 Cadastro *aloca(int n){
 int i;
 Cadastro *cad = (Cadastro*) malloc(n * sizeof(Cadastro));
 return cad;
 }

 Cadastro *realoca(Cadastro *cad, int n){// realoca 1 posição a mais a cada leitura no arquivo
 cad = (Cadastro*) realloc(cad, n * sizeof(Cadastro) + sizeof(Cadastro));
 return cad;
 }

 Cadastro coleta(){//coleta dados e devolve 1 estrutura preenchida
 Cadastro cad;
 printf("Digite o nome da pessoa:\n");
 fflush(stdin);
 fgets(cad.nome, 40, stdin);
 //substitui o \n no final da string por \0
 cad.nome[strlen(cad.nome) - 1] = '\0';
 printf("Digite a idade da pessoa:\n");
 scanf("%d", &cad.idade);
 printf("Digite o endereco da pessoa:\n");
 fflush(stdin);
 fgets(cad.endereco, 30, stdin);
 //substitui o \n no final da string por \0
 cad.endereco[strlen(cad.endereco) - 1] = '\0';
 system("cls");
 return cad;
 }

 void imprimeDados(Cadastro *cad, int n){
 int i;
 for(i = 0; i < n; i++){
 printf("Cadastro numero %d\n", i + 1);
 printf("Nome: %s\n", cad[i].nome);
 printf("Idade : %d\n", cad[i].idade);
 printf("Endereco: %s\n", cad[i].endereco);

 printf("************************************\n\n");
 }
 }

 void liberaDados(Cadastro *cad){
 printf("Liberando memoria...\n\n\n");
 free(cad);
 }
