#ifndef CONCRETESTRATEGYA_H
#define CONCRETESTRATEGYA_H

#include "istrategy.h"

typedef struct 
{
    istrategy strategyA;

} concreteStrategyA; 

concreteStrategyA *new_concreteStrategyA(); 
void concreteStrategyA_ctor(concreteStrategyA*);
void concreteStrategyA_free(concreteStrategyA*);

#endif
