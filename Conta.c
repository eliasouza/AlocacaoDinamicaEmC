#include "Conta.h"
#include<stdlib.h>

// Estrutura para conta
struct contaDinamica{
    int numero;
    double saldo;
};

// Implementação das funções
Conta *criar( int n, double v ){
    Conta *c = ( Conta* ) malloc( QTD * sizeof( Conta ) );
    if( c == NULL ){
        printf("Sem memória!\n");
        exit(1);
    }
    c->numero = n;
    c->saldo = v;
    printf("Conta %d criada com sucesso!\n", n);
    return c;
}

void liberar ( Conta *c ){
    free( c );
}

void depositar( Conta *c, double v ){
    if( v > 0 )
        c->saldo += v;
    else
        printf("Valor inválido para depósito!\n");
}

double sacar( Conta *c, double v ){
    if( v > 0 && c->saldo >= v )
        c->saldo -= v;
    else
        printf("Valor inválido para saque!\n");
}

void transferir( Conta *src, Conta *dst, double v ){
    if( src->saldo >= v ){
        dst->saldo += v;
        src->saldo -= v;
        printf("R$ %.2f transferidos de conta %d para conta %d.\n", v, src->numero, dst->numero);
    }
    else
        printf("A conta origem não tem saldo suficiente pra transferir!\n");
}

void saldo( Conta *c ){
    printf("Saldo: R$ %.2f\n", c->saldo);
}
