//COPYRIGHT 2015 <Brenner Souza, Caio Bittencourt, Dione (COMPLETEM O NOME DO DIONE POR FAVOR), Murilo Santos Xavier>

#include<stdio.h>
#define max=50;

typedef struct amigo{
    char nomeAmigo[max], emailAmigo[max];
    long long int numeroCelular;
} Amigo;

typedef struct deslocamento{
    char nomeCidadeOrigem[max], nomeEstadoOrigem[max], nomePaisOrigem[max];
    char nomeCidadeDestino[max], nomeEstadoDestino[max], nomePaisDestino[max];
} Deslocamento;

typedef struct node{

} Node;

void insereAmigo(Amigo *pessoa, Node *no);

void leInfoAmigo(Amigo *pessoa);

void insereDeslocamento(Deslocamento *desloc);
