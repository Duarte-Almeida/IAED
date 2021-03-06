/*
 * Ficheiro: equipa.c
 * Autor: Duarte Calado Almeida, n.95565
 * Descricao: Funcoes de criacao e interacao com o tipo 'equipa'
 */ 

#include "equipa.h"

/* cria uma nova equipa */
equipa nova_equipa(char *nome, int jogos) {

    equipa equipa_aux = (equipa) malloc(sizeof(struct stru_equipa));

    equipa_aux->nome = (char *)malloc((strlen(nome)+1) * sizeof(char));
    strcpy(equipa_aux->nome, nome);
    equipa_aux->vitorias = jogos;

    return equipa_aux;

}

/* liberta a memoria associada a uma equipa 'e' */
void liberta_equipa(void *e) {
    free(((equipa)(e))->nome);
    free((equipa)(e));
    return ;
}

/* verifica se o nome da equipa 'e' e igual a string */
int equipa_nome_igual(void *e, void *string) {
    return (strcmp(((equipa)(e))->nome, (char *)string) == 0);
}




