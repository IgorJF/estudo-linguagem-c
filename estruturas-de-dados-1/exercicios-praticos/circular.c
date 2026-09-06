#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Definição do Nó (Música)
struct musica {
    char nome[50];
    int duracao;
    struct musica *prox;
};

typedef struct musica Musica;
typedef Musica* ListaCircular; // Para facilitar a leitura

// 2. Criação da Playlist (A "Central")
ListaCircular* cria_playlist() {
    ListaCircular* li = (ListaCircular*) malloc(sizeof(ListaCircular));
    if (li != NULL) {
        *li = NULL;
    }
    return li;
}

// 3. Inserção na Playlist
int insere_musica(ListaCircular* li, char* nome, int duracao) {
    if (li == NULL) return 0;
    
    Musica* novo = (Musica*) malloc(sizeof(Musica));
    if (novo == NULL) return 0;
    
    strcpy(novo->nome, nome);
    novo->duracao = duracao;

    if ((*li) == NULL) { 
        // Caso A: Lista Vazia
        *li = novo;
        novo->prox = novo; // Ele aponta para ele mesmo (circular)
    } else {
        // Caso B: Já existem músicas
        Musica* aux = *li;
        while (aux->prox != *li) { // Procura o último (quem aponta pro início)
            aux = aux->prox;
        }
        aux->prox = novo;  // O antigo último aponta para o novo
        novo->prox = *li;  // O novo agora aponta para o início (fecha o círculo)
    }
    return 1;
}



// 4. Exibição (Cuidado para não entrar em loop infinito!)
void exibe_playlist(ListaCircular* li) {
    if (li == NULL || *li == NULL) {
        printf("Playlist vazia.\n");
        return;
    }
    
    Musica* aux = *li;
    do {
        printf("Musica: %s | Duracao: %ds\n", aux->nome, aux->duracao);
        aux = aux->prox;
    } while (aux != *li); // Para quando voltar ao início
}

// 5. Liberar Memória
void libera_playlist(ListaCircular* li) {
    if (li != NULL && *li != NULL) {
        Musica *aux, *no = *li;
        // Transforma em lista simples temporariamente para facilitar
        Musica* ultimo = *li;
        while (ultimo->prox != *li) ultimo = ultimo->prox;
        ultimo->prox = NULL; // Quebra o círculo
        
        while (no != NULL) {
            aux = no;
            no = no->prox;
            free(aux);
        }
    }
    free(li);
}

int main() {
    ListaCircular* minha_playlist = cria_playlist();
    
    insere_musica(minha_playlist, "Bohemian Rhapsody", 354);
    insere_musica(minha_playlist, "Hotel California", 391);
    insere_musica(minha_playlist, "Stairway to Heaven", 482);
    
    printf("--- Minha Playlist Circular ---\n");
    exibe_playlist(minha_playlist);
    
    libera_playlist(minha_playlist);
    return 0;
}