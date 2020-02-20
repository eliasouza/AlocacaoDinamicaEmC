/*
*
* Computer Science Section
* Faculdades Doctum de Caratinga
* Caratinga, MG, Brazil
* Feb. 20, 2020
* author: Elias Goncalves
* email: falarcomelias@gmail.com
* Licensed under the Apache License, Version 2.0
*
*/

#include <stdio.h>
#include <stdlib.h>
#include "Conta.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
	
	/*
	 * Para melhor utilização, add nesse programa um menu para 
	 * informar ao usuário as opções que o programa implementa. 
	 * Desenvolva casos de teste para cada função do programa.
	 */
     
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
