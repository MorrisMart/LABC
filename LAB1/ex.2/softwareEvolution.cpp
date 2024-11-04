#include <iostream>

int main()
{
    //variabile int locale automatica (non statica)
    int a;

    //variabile int locale statica inizializzata a valore diverso da 0
    int b = 1;

    //variabile int locale statica non inizializzata
    int c;

    return 0;
}

//variabile int globale (quindi statica) inizializzata a valore diverso da 0
int d = 1;
//variabile int globale (quindi statica) non inizializzata
int e;


/*
    RISPONDERE ALLE SEGUENTI DOMANDE:
    1. In quale delle sezioni riportate da 'size' compare la variabile automatica? Perché?

        Il 'BSS' contiene variabili globali e variabili statiche non inizializzate
        Il 'DATA' contiene variabili globali e variabili statiche
        Lo 'STACK' contiene parametri e variabili locali 

        - la var 'a' appare nel segmento 'STACK' perchè 
        - la var 'b' appare nel segmento 'STACK' perchè 
        - la var 'c' appare nel segmento 'BSS' perchè 
        - la var 'd' appare nel segmento 'DATA' perché è inizializzata
        - la var 'e' appare nel segmento 'BSS' perchè non è inizializzata

    2. Perché la variabile locale automatica è "automatica"?

        la variabile automatica è "automatica" perché non è statica 

    3. Cosa succede togliendo l'inizializzazione alle variabili statiche? Perché?

        togliendo l'inizializzazione alle variabili statiche cambiamo la loro allocazione 
        all'interno del layout di memoria 

    4. Qual è lo 'scope' di ciascuna delle variabili create?

        - la var 'a' ha 'scope' :
        - la var 'b' ha 'scope' :
        - la var 'c' ha 'scope' :
        - la var 'd' ha 'scope' :
        - la var 'e' ha 'scope' :
*/


/*
    Per ciascun passaggio analizzare le dimensioni di:
        - initialized data segment 
        - uninitialized data segment (BSS)
    utilizzando la shell di linux
*/