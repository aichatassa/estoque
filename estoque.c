#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constantes para os índices de matrizes e vetores utilizados
#define LIN 5
#define COL 5
#define IND 100

int cadastra_quants_loja();
int cadastra_quants_produto();
int cadastra_produto(int quant_prod);
int matriz_estoque(int quant_loja, int quant_prod);
int vetor_abastecimento(int quant_prod);
int abastecimento_estoque(int quant_loja, int quant_prod, int vetor[IND], int matriz[LIN][COL]);

struct Estoque { //Struct que armazena os dados do produto
    float preco[IND];
    char nome[IND];
    int id[IND];

};
typedef struct Estoque TEstoque; //Define o nome do struct com variável do tipo TEstoque

int main () {

   int num_loja, num_prod, op;
    do{
        printf("Entre com o número de lojas \n");
        scanf("%d", &num_loja);
        getchar();
    }while(num_loja <= 0);

    printf("Entre com o número de produtos \n");
    scanf("%d", &num_prod);

    //cadastra_quants_loja();
    //cadastra_quants_produto();
    cadastra_produto(num_prod);//GAMBIARRA
    matriz_estoque(num_loja, num_prod);
    vetor_abastecimento(num_prod);

    do {
      printf("\n");
      printf("Gerenciamento de estoque: \n");
      printf("(1) Abastecer estoque\n");
      printf("(2) Pesquisar produto\n");//PRECISA FAZER FUNÇÕES DA OPÇÃO
      printf("(3) Sair\n");
      scanf("%d", &op);

      switch(op) {
        case 1:
        //ERRO TOO FEW ARGUMENTS
        //abastecimento_estoque(num_loja, num_prod, vetor[IND], matriz[LIN][COL]);

          break;

        case 2:

          break;

        case 3:
          break;

        default:
          printf("Opção inválida!");
          break;    
        }

    }while(op != 3);

}


/*int cadastra_quants_loja(){ //OK
  int num_loja;
    do{
        printf("Entre com o número de lojas \n");
        scanf("%d", &num_loja);
        getchar();
    }while(num_loja <= 0);

    //printf("%d", num_loja);

    return num_loja;
    
}*/

/*int cadastra_quants_produto(){//OK EU ACHO
    int num_prod;
    //int *aux_prod;//TENTEI USAR PONTEIRO PARA ARRUMAR O PROBLEMA

    //aux_prod = &quant_produto;

    printf("Entre com o número de produtos \n");
    scanf("%d", &num_prod);
    printf("\n");
    //aux_prod = &quant_produto;
    //printf("%d", *aux_prod);  
    //aux_prod = atoi(quant_produto);
    // printf(aux_prod);
    //printf("\n");
    //aux_prod = quant_produto;
    //printf(aux_prod);
    //printf("\n");
    //aux_prod = malloc (sizeof(int));

    printf("numero produtos %d\n", num_prod);
    //printf("\n");

    return num_prod;
   
}*/

int cadastra_produto(int num_prod) {
    int i;
    TEstoque prod;
    TEstoque valor;
    TEstoque ident;
    printf("num prod %d\n", num_prod);
    printf("\nInforme os produtos: \n"); //ERRO FAZ FUNÇÃO SER PULADA (SEGMENTATION FAULT)
    for(i = 0; i < num_prod; i++){
        printf("Nome: \n");
        fgets(prod.nome, IND, stdin);
        getchar();

        printf("Preco: \n");
        scanf("%f", &valor.preco[i]);
        
    }
    return 0;
}

int matriz_estoque(int quant_loja, int quant_prod){
    int matriz[LIN][COL];
    int i, j;
    TEstoque ident;

    printf("\n");
    printf("Informe a matriz de estoque: \n");
    /*printf("%d", quant_loja);
    printf("\n");
    printf("%d", quant_prod);*/

    for(i = 0; i < quant_loja; i++) {
        printf("\n");
        ident.id[i]++; // PRECISA ADICIONAR ID NAS LOJAS PARA PESQUISA
        for(j = 0; j < quant_prod; j++) {
            scanf("%d", &matriz[i][j]);
            /*printf("numero:");
            printf("%d", matriz[i][j]);
            printf("\n");*/
        }
    }
    return 0;
}

int vetor_abastecimento(int quant_prod) {
    int vetor[quant_prod];
    int i;

    printf("Informe o vetor de abastecimento: \n"); //REQUER TRATAMENTO DE VALORES
    for(i = 0; i < quant_prod; i++) {
        scanf("%d", &vetor[i]);
    }

    return 0;
}

int abastecimento_estoque(int quant_loja, int quant_prod, int vetor[IND], int matriz[LIN][COL]){
//PRECISA VERIFICAR QUAL É O MENOR VALOR DE CADA LINHA E SUBSTITUIR
    int i, j, menor_pos;
    menor_pos = 0;

    for(i = 0; i < quant_loja; i++) {
        for(j = 0; j < quant_prod; j++){
            if(menor_pos > matriz[i][j]) {
                menor_pos = matriz[i][j];

                matriz[i][j] += vetor[IND];
            }
        }
    }

    printf("Estoque atualizado: \n");
    for(i = 0; i < quant_loja; i++) {
        for(j = 0; j < quant_prod; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
