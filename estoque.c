#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constantes para os índices de matrizes e vetores utilizados
#define LIN 5
#define COL 5
#define IND 100

//DECLARAÇÃO DAS FUNÇÕES PARA REMOVER WARNINGS AO COMPILAR
int cadastra_quants();
int cadastra_quants_loja();
int cadastra_quants_produto();
int cadastra_produto(int *aux_prod);
//int matriz_estoque(int quant_loja, int *aux_prod);
//int vetor_abastecimento(int *aux_prod);
//int abastecimento_estoque(int quant_loja, int *aux_prod, int vetor[IND], int matriz[LIN][COL]);

struct Estoque { //Struct que armazena os dados do produto
    float preco[IND];
    char nome[IND];
    int id[IND];
};
typedef struct Estoque TEstoque; //Define o nome do struct com variável do tipo TEstoque

int main () {

    cadastra_quants_loja();
    cadastra_quants_produto();
    cadastra_produto(cadastra_quants_produto);
    //matriz_estoque(cadastra_quants_loja, cadastra_quants_produto);
    //vetor_abastecimento(cadastra_quants_produto);
    //menu();

}

/*int menu() { //Menu de seleção das opções do programa
    int op;

    do {
        printf("Gerenciamento de estoque: \n");
        printf("(1) Abastecer estoque\n");
        printf("(2) Pesquisar produto\n");//PRECISA FAZER FUNÇÕES DA OPÇÃO
        printf("(3) Sair\n");
        scanf("%d", &op);

        switch(op) {
            case 1:
                //ERRO TOO FEW ARGUMENTS
                //abastecimento_estoque(cadastra_quants, matriz_estoque, vetor_abastecimento);

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
}*/

int cadastra_quants_loja(){
    int quant_loja;

    do{
        printf("Entre com o número de lojas \n");
        scanf("%d", &quant_loja);
        getchar();
    }while(quant_loja <= 0);
    
    return quant_loja;
}

int cadastra_quants_produto(){
    int quant_produto;
    int *aux_prod;//TENTEI USAR PONTEIRO PARA ARRUMAR O PROBLEMA

    aux_prod = &quant_produto;

    printf("Entre com o número de produtos \n");
    scanf("%d", &*aux_prod);
    printf("\n");
    aux_prod = &quant_produto;
    printf("%d", *aux_prod);  
    //aux_prod = atoi(quant_produto);
    // printf(aux_prod);
    printf("\n");
    //aux_prod = quant_produto;
    //printf(aux_prod);
    //printf("\n");
    //aux_prod = malloc (sizeof(int));

    printf("%d", aux_prod);
    printf("\n");
   
    return *aux_prod;
}

int cadastra_produto(int *aux_prod) {
    int i;
    Estoque prod;
    Estoque valor;
    Estoque ident;
    printf("%d", aux_prod);
    printf("Informe os produtos: \n"); //ERRO FAZ FUNÇÃO SER PULADA (SEGMENTATION FAULT)
    printf("%d", *aux_prod);
    for(i = 0; i < *aux_prod; i++){
        printf("Nome: \n");
        fgets(prod.nome, IND, stdin);
        getchar();

        printf("Preco: \n");
        scanf("%f", &valor.preco[i]);
        
        getchar(); 
    }

    return prod.nome;
}

/*int matriz_estoque(int quant_loja, int *aux_prod){
    int matriz[LIN][COL];
    int i, j;
    TEstoque ident;

    printf("Informe a matriz de estoque: \n"); //REQUER TRATAMENTO DE VALORES
    for(i = 0; i < quant_loja; i++) {
        ident.id[i]; // PRECISA ADICIONAR ID NAS LOJAS PARA PESQUISA
        for(j = 0; j < *aux_prod; i++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    return 0;
}*/

/*int vetor_abastecimento(int *aux_prod) {
    int vetor[IND];
    int i;

    printf("Informe o vetor de abastecimento: \n"); //REQUER TRATAMENTO DE VALORES
    for(i = 0; i < *aux_prod; i++) {
        scanf("%d", &vetor[i]);
    }

    return 0;
}

int abastecimento_estoque(int quant_loja, int *aux_prod, int vetor[IND], int matriz[LIN][COL]){
//PRECISA VERIFICAR QUAL É O MENOR VALOR DE CADA LINHA E SUBSTITUIR
    int i, j, menor_pos;
    menor_pos = 0;

    for(i = 0; i < quant_loja; i++) {
        for(j = 0; j < *aux_prod; j++){
            if(menor_pos > matriz[i][j]) {
                menor_pos = matriz[i][j];

                matriz[i][j] += vetor[IND];
            }
        }
    }

    printf("Estoque atualizado: \n");
    for(i = 0; i < quant_loja; i++) {
        for(j = 0; j < *aux_prod; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}*/
