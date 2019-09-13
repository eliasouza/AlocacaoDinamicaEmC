#include <stdio.h>
#include <stdlib.h>
#include "Conta.h"

int main()
{
    /* Testar
        Conta *criar( int n, double v );
        void liberar ( Conta *c );
        void depositar( Conta *c, double v );
        double sacar( Conta *c, double v );
        void transferir( Conta *src, Conta *dst, double v );
    */
    Conta *src, *dst;
    src = criar( 111, 5000 ); // Conta origem
    dst = criar( 222, 1000 ); // Conta destino
    transferir( src, dst, 2500 );
    saldo( dst );
    return 0;
}
