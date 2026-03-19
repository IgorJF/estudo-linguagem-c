#include <stdio.h>

#define D1 2

typedef struct PalavraChave{
    char palavra[100];

} palavraChave;

typedef struct Livro{
    int cod, doado, numPaginas;
    char nome[50], autor[50], editora[50], assunto[200];
    palavraChave palavrasChave[D1];
} livro;

int main()
{
    livro x[D1];
    int i, j, op, cod, p;

    op = 0;

    for(i = 0;i < D1;i++){
        printf("Digite o codigo de catalogcao do livro [%d]: ", i+1);
        scanf("%d", &x[i].cod);
        printf("Digite o titulo do livro [%d]: ", i+1);
        scanf("%s", x[i].nome);
        printf("Digite o nome do autor do livro [%d]: ", i+1);
        scanf("%s", x[i].autor);
        printf("Digite o nome da editora do livro [%d]: ", i+1);
        scanf("%s", x[i].editora);
        printf("Digite o numero de paginas do livro [%d]: ", i+1);
        scanf("%d", &x[i].numPaginas);
        printf("Digite 1 se o livro for doado, 0 se nao for: ");
        scanf("%d", &x[i].doado);
        for(j = 0;j < D1;j++){
            printf("Digite a palavra chave %d do livro [%d]: ", j, i+1);
            scanf("%s", x[i].palavrasChave[j].palavra);
        }
        printf("Digite o assunto do livro [%d]: ", i+1);
        scanf("%s", x[i].assunto);
    }

    while(op != 3){
        printf("Digite a opção desejada:\n1 - Listar Livros\n2 - Pesquisar livro\n3 - Encerrar Programa\n");
        scanf("%d", &op);

        switch(op){
            case 1: 
                for(i = 0;i < D1;i++){
                    printf("-------------------------\n");
                    printf("Codigo: %d\n", x[i].cod);
                    printf("Titulo: %s\n", x[i].nome);
                    printf("Autor: %s\n", x[i].autor);
                    printf("Editora: %s\n", x[i].editora);
                    printf("Assunto: %s\n", x[i].assunto);
                    printf("Numero de paginas: %d\n", x[i].numPaginas);
                    if(x[i].doado == 1){
                        printf("Livro doado\n");
                    }
                    else{
                        printf("Livro nao doado\n");
                    }
                    for(j = 0;j < D1;j++){
                        printf("Palavra chave %d: %s\n", j, x[i].palavrasChave[j].palavra);
                    }
                }
                break;
            case 2:
                p = -1;
                printf("Digite o codigo do livro que deseja buscar:");
                scanf("%d", &cod);


                for(i = 0;i < D1;i++){
                    if(x[i].cod == cod){
                        p = i;
                    }
                }

                if(p == -1){
                    printf("Livro nao encontrado\n");
                }
                //nesse caso e utilizado o p pois quando ao utilizar o i, quando o i chega no valor final do loop, é isso que ele ira mostrar
                //os valores que estao no valor final de i
                //p deve ser inicializado dentro do loop, para que mude o valor toda nova pesquisa
                else{
                    printf("-------------------------\n");
                    printf("Codigo: %d\n", x[p].cod);
                    printf("Titulo: %s\n", x[p].nome);
                    printf("Autor: %s\n", x[p].autor);
                    printf("Editora: %s\n", x[p].editora);
                    printf("Assunto: %s\n", x[p].assunto);
                    printf("Numero de paginas: %d\n", x[p].numPaginas);
                    if(x[p].doado == 1){
                        printf("Livro doado\n");
                    }
                    else{
                        printf("Livro nao doado\n");
                    }
                    for(j = 0;j < D1;j++){
                        printf("Palavra chave %d: %s\n", j, x[p].palavrasChave[j].palavra);
                    }
                }
                break;
        }
    }

    return 0;
}