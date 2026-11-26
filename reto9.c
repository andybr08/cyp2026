#include <stdio.h>

int main(void) {
    int personas;

    printf("Personas: ");
    if (scanf("%d", &personas) != 1 || personas < 0) {
        printf("Número no válido\n");
        return 1;
    }

    double harina = 250.0 / 4 * personas;

    if (harina > 1000) {
        printf("Usa dos tazones\n");
    } else {
        printf("%.0f g\n", harina);
    }

    return 0;
}