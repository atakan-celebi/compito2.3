#include <stdio.h>

int main(void) {
    float a, b, c, d, e, f, g;
    printf("inserisci l'ora 1:");
    scanf("%f", &a);
    printf("inserisci i minuti 1:");
    scanf("%f", &b);
    printf("inserisci i secondi 1:");
    scanf("%f", &c);
    printf("inserisci l'ora 2:");
    scanf("%f", &d);
    printf("inserisci i minuti 2:");
    scanf("%f", &e);
    printf("inserisci i secondi 2:");
    scanf("%f", &f);
    a = a*60*60;
    b = b*60;
    d = d*60*60;
    e = e*60;
    g = (a + b + c)-(d + e + f);
    printf("la differenza degli orari è: %f", g);
}