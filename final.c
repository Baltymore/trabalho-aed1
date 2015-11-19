//COPYRIGHT 2015 <Brenner Souza, Caio Bittencourt, Dione (COMPLETEM O NOME DO DIONE POR FAVOR), Murilo Santos Xavier>

#include <stdio.h>
#include "final.h"

void leInfoAmigo(Amigo *pessoa){
    printf("Nome do amigo: ");
    gets(max, nomeAmigo.pessoa, stdin);
    printf("\nE-mail do amigo: ");
    gets(max, emailAmigo.pessoa, stdin);
    printf("\nTelefone de contato: ");
    scanf("%i", &numeroCelular.pessoa);
    printf("\nOperacao finalizada.");
};

void insereDeslocamento(Deslocamento *desloc){
    char resp[3];

    printf("Cidade de origem: ");
    gets(max, nomeCidadeOrigem.desloc, stdin);
    printf("\nEstado de origem: ");
    gets(max, nomeEstadoOrigem.desloc, stdin);
    printf("\nPais de origem: ");
    gets(max, nomePaisOrigem.desloc, stdin);

    printf("\nO destino e outro pais?");
    scanf("%s", &resp);

    if(resp == 'yes'){
        printf("\nCidade destino: ");
        gets(max, nomeCidadeDestino, stdin);
        printf("\nPais destino: ");
        gets(max, nomePaisDestino);
    }
    else{
        printf("\nCidade destino: ");
        gets(max, nomeCidadeDestino, stdin);
        printf("\nEstado destino: ");
        gets(max, nomeEstadoDestino, stdin);
    }
}

void insereAmigo(Amigo *pessoa, Node *no){

};
