#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "concreteStrategyA.h"
#include "Context.h"

concreteStrategyA *new_concreteStrategyA()
{
    return(concreteStrategyA *)malloc(sizeof(concreteStrategyA));
}

void Algorithm1(void * name)
{
    printf("Context:Sorting data using the strategy\n");
    char* list = malloc(sizeof(char[15]));
    strcpy(list,(char*)name);
    printf("%s", list);
    printf("\n");
    free(list);

}

void concreteStrategyA_ctor(concreteStrategyA *this)
{
    istrategy_ctor((istrategy*)this);
    this->strategyA.Algorithm = Algorithm1;
}
