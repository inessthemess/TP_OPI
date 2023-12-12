#include "heure.h"
#include <bonjour.h>
#include <bonsoir.h>
#include <bonnenuit.h>


void salutations(){
    if (heure()<18) return bonjour();
    else if (heure()<22) return bonsoir();
    else return bonnenuit();
}

int main(){
    salutations();
    return 0;
}