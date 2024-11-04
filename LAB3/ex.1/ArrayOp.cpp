/*
    Creare un programma che:
        a. definisce una funzione f(), chiamata dal main, che definisce un array stile C di 10
           int come variabile locale automatica;
        b. in f(), crea un puntatore a uno degli elementi dell’array a scelta (non il primo), e
           scrive su tutto l’array usando l’operatore [] applicato al puntatore;
        c. definisce una funzione f_illegal() che definisce un array analogo a quello della
           funzione f(), ma scrive fuori dai limiti dell’array; verificare se questo causa un
           errore in esecuzione o meno in funzione di quanto dista la memoria a cui si accede
           illegalmente dall’array definito.
*/

#include <iostream>

//definisco la funzione f
void f()
{
    const int max = 10;  //dimensione dell'array 
    int a [max];  //array locale 
    int *p = &a[2];  //puntatore 

    std::cout << "Start pointer address: " << p << std::endl;

    for (int i=0; i<max; i++)
     {
        //poiché mi riferisco al puntatore in questo caso vado a prendere un indirizzo negativo
        p[i-2] = i+1;  // i+1 valore che assegno io al puntatore 
        std::cout << "Actual pointer address: " << p+i-2 << std::endl;
     }

    for (int i=0; i<max; i++)
     {
        p[i-2] = i+1; 
        std::cout << "Read pointer address: " << p+i-2 << " value: " << p[i-2] << std::endl;
     }

}

//definisco la funzione f_illegal
void f_illegal()
{
    const int max = 10;  //dimensione dell'array 
    int a [max];  //array locale 
    int *p = &a[2];  //puntatore 

    std::cout << "Start pointer address: " << p << std::endl;

    for (int i=0; i<max; i++)
     {
        //poiché mi riferisco al puntatore in questo caso vado a prendere un indirizzo negativo
        p[i-2] = i+1; // i+1 valore che assegno io al puntatore
        std::cout << "Actual pointer address: " << p+i << std::endl;
     }

    for (int i=0; i<max; i++)
     {
        p[i-2] = i+1;  
        std::cout << "Read pointer address: " << p+i << " value: " << p[i] << std::endl;
     }
}


//main 
int main (void)
{
    //richiamo f 
    f();

    //richiamo f_illegal
    f_illegal();

    return 0;
}
