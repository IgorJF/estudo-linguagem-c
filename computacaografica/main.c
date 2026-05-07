#include <stdio.h>
#include "objeto.h"

int main() {
    Objeto casa;
    casa = carregarObjeto("casaNDC.dcg");
    imprimirObjeto(casa);
    liberarObjeto(casa);

    return 0;
}