#include <stdio.h>
#include <stdlib.h>

#define LIN 5
#define COL 5
#define IND 100

typedef struct { //Struct que armazena os dados do produto
    float preco;
    char nome[IND];
    int id[IND];

} Estoque; //Define o nome do struct com variável do tipo Estoque

int main () {

    cadastra_quants();
    cadastra_produto(int quant_produto);
    menu();

}

int menu() { //Menu de seleção das opções do programa
    int op;

    do {
        printf("Gerenciamento de estoque: \n");
        printf("(1) Abastecer estoque\n");
        printf("(2) Pesquisar produto\n");
        printf("(3) Sair\n");
        scanf("%d", &op);

        switch(op) {
            case 1:

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



int cadastra_quants(){
    int i, quant_loja = 1, quant_produto;

    do{
        printf("Entre com o número de Lojas \n");
        scanf("%d", &quant_loja);
        getchar();
    }while(quant_loja <= 0);

    for(i = 0; i < quant_loja; i++){

        do{
            printf("Entre com o número de produtos: \n");
            scanf("%d", &quant_produto);
            getchar();
        }while(quant_produto <= 0);
    } 

    return 0;
}

int cadastra_produto(int quant_produto) {
    int i;
    Estoque prod;
    Estoque valor;
    Estoque ident;

    for(i = 0; i < num_produto; i++){
        print("Informe os produtos: \n");
        printf("\nNome: ");
        fgets(prod.nome, IND, stdin);
        getchar();

        printf("\nPreco: ");
        scanf("%f", &valor.preco[i]);
    }

    return 0;
}

int matriz_estoque(int num_loja, int num_produto){
    int matriz[LIN][COL];
    int i, j;

    printf("Informe a matriz de estoque: \n"); //REQUER TRATAMENTO DE VALORES
    for(i = 0; i < num_loja; i++) {
        for(j = 0; j < num_produto; i++) {
            scanf("%d", &matriz[i][j])
        }
    }
    return 0;
}

int vetor_abastecimento(int num_produto) {
    int vetor[IND];
    int i;

    printf("Informe o vetor de abastecimento: \n"); //REQUER TRATAMENTO DE VALORES
    for(i = 0; i < num_produto; i++) {
        scanf("%d", &vetor[i]);
    }

    return 0;
}

