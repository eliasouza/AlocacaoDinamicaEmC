/*
*
* Computer Science Section
* Faculdades Integradas de Caratinga
* Caratinga, MG, Brazil
* Feb. 19, 2019
* author: Elias Goncalves
* email: falarcomelias@gmail.com
* Licensed under the Apache License, Version 2.0
*
*/

#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

// Constante que informa a qtd de memória a ser alocada
#define QTD 1

// Define um apelido para a struct implementada no arquivo ".c"
typedef struct contaDinamica Conta;

// Protótipos das funções
Conta *criar( int n, double v );
void liberar ( Conta *c );
void depositar( Conta *c, double v );
double sacar( Conta *c, double v );
void transferir( Conta *src, Conta *dst, double v );
void saldo(Conta *c);

#endif // CONTA_H_INCLUDED
