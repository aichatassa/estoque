#include <stdio.h>
#include <stdlib.h>

//Constantes para os índices de matrizes e vetores utilizados
#define LIN 5
#define COL 5
#define IND 100

//DECLARAÇÃO DAS FUNÇÕES PARA REMOVER WARNINGS AO COMPILAR
int cadastra_quants();
int cadastra_produto(int quant_produto);
int matriz_estoque(int quant_loja, int quant_produto);
int vetor_abastecimento(int quant_produto);
int abastecimento_estoque(int quant_loja, int quant_produto, int vetor[IND], int matriz[LIN][COL]);

typedef struct { //Struct que armazena os dados do produto
    float preco[IND];
    char nome[IND];
    int id[IND];

} Estoque; //Define o nome do struct com variável do tipo Estoque

int main () {

    cadastra_quants_loja();
    cadastra_quants_produto();
    cadastra_produto(cadastra_quants_produto);
    matriz_estoque(cadastra_quants_loja, cadastra_quants_produto);
    vetor_abastecimento(cadastra_quants_produto);
    menu();

}

int menu() { //Menu de seleção das opções do programa
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
}

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

    do{
        printf("Entre com o número de produtos \n");
        scanf("%d", &quant_produto);
        getchar();
    }while(quant_produto <= 0);
    
    //printf("\n");
    
    //printf(quant_produto);
    
    //printf("\n");
    
    return quant_produto;
}

int cadastra_produto(int quant_produto) {
    int i;
    Estoque prod;
    Estoque valor;
    Estoque ident;
    
    //printf(quant_produto);
    
    //printf("\n\n");

    printf("Informe os produtos: \n");

    for(i = 0; i < quant_produto; i++){
        printf("Nome: \n");
        fgets(prod.nome, 100, stdin);

        printf("Preco: \n");
        scanf("%f", &valor.preco[i]);
        
        getchar();
        
    }

    return prod.nome;
}

int matriz_estoque(int quant_loja, int quant_produto){
    int matriz[LIN][COL];
    int i, j;
    Estoque ident;

    printf("Informe a matriz de estoque: \n"); //REQUER TRATAMENTO DE VALORES
    for(i = 0; i < quant_loja; i++) {
        ident.id[i]; // PRECISA ADICIONAR ID NAS LOJAS PARA PESQUISA
        for(j = 0; j < quant_produto; i++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    return 0;
}

int vetor_abastecimento(int quant_produto) {
    int vetor[IND];
    int i;

    printf("Informe o vetor de abastecimento: \n"); //REQUER TRATAMENTO DE VALORES
    for(i = 0; i < quant_produto; i++) {
        scanf("%d", &vetor[i]);
    }

    return 0;
}

int abastecimento_estoque(int quant_loja, int quant_produto, int vetor[IND], int matriz[LIN][COL]){
//PRECISA VERIFICAR QUAL É O MENOR VALOR DE CADA LINHA E SUBSTITUIR
    int i, j, menor_pos;
    menor_pos = 0;

    for(i = 0; i < quant_loja; i++) {
        for(j = 0; j < quant_produto; j++){
            if(menor_pos > matriz[i][j]) {
                menor_pos = matriz[i][j];

                matriz[i][j] += vetor[IND];
            }
        }
    }

    printf("Estoque atualizado: \n");
    for(i = 0; i < quant_loja; i++) {
        for(j = 0; j < quant_produto; j++) {
            printf(matriz[i][j]);
        }
        printf("\n");
    }
}
