//COPYRIGHT 2015 <Brenner Souza, Caio Bittencourt, Dione (COMPLETEM O NOME DO DIONE POR FAVOR), Murilo Santos Xavier>

#include<stdio.h>
#define max=50;

typedef struct amigo{
  char nomeAmigo[max], emailAmigo[max];
  int numeroCelular;
} Amigo;

typedef struct origem{
  char nomeCidade, nomeEstado, nomePais;
} Origem;
