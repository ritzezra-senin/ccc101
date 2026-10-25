#include "stdio.h"
void main () {
    int Ritz;
    float Senin;

    printf ("Enter the two numbers (int float):");
    scanf ("%i %f", &Ritz, &Senin);

    if (Ritz > 0) {
        printf ("Your %i is positive\n", Ritz);
    } else if (Ritz < 0) {
        printf ("Your %i is negative\n", Ritz);
    } else {
        printf ("Your %i is neutral\n", Ritz);
    }

    if (Senin > 0) {
        printf ("Your %f is positive\n", Senin);
    } else if (Senin < 0) {
        printf ("Your %f is negative\n", Senin);
    } else {
        printf ("Your %f is neutral\n", Senin);
    }
}