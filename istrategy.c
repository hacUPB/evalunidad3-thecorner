#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "istrategy.h"

istrategy *istrategy_new()
{
    return (istrategy*)malloc(sizeof(istrategy));
}
void Algorithmvoid(void *nombre)
{
    char * outcome = malloc(sizeof(char[15]));
    strcpy(outcome,"Null");
    printf("%s", outcome);
    free(outcome);
}
void istrategy_ctor(istrategy* this)
{
    this->Algorithm = &Algorithmvoid;
}
void istrategy_free(istrategy* this)
{
    free(this);
}
