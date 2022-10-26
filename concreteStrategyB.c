#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "concreteStrategyB.h"
#include "Context.h"

concreteStrategyB *new_concreteStrategyB()
{
    return (concreteStrategyB*)malloc(sizeof(concreteStrategyB));
}

void Algorithm2(void * name)
{
    printf("Context: Sorting data using the strategy");
    char* list = malloc(sizeof(char[15]));
    strcpy(list,(char*)name);
    invert(list);

    free(list);
}

void invert (char * list)
{
    char *ptA, *ptB;
    ptA = list;
    ptB = list + strlen(list) - 1;

    char noInvert = *ptB;
    do
    {
        if (noInvert != '\0')
        {
            ptB--;

            printf("%c", noInvert);

            noInvert = *ptB;
        }
        else
        {
            ptB--;
        }
    } while (ptB >= ptA);
    printf("\n");
}

void concreteStrategyB_ctor(concreteStrategyB *this)
{
    istrategy_ctor((istrategy*)this);
    this->strategyB.Algorithm = Algorithm2;
}

void concreteStrategyB_free(concreteStrategyB *this)
{
    istrategy_free((istrategy*)this);
}