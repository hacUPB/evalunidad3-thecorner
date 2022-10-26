#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"
#include "concreteStrategyA.h"
#include "concreteStrategyB.h"
#include "istrategy.h"

int main(void)
{

istrategy *Ntragety = istrategy_new();
istrategy_ctor(Ntragety);

concreteStrategyA *trategyA = new_concreteStrategyA();
concreteStrategyA_ctor(trategyA);

concreteStrategyB *trategyB = new_concreteStrategyB();
concreteStrategyB_ctor(trategyB);

context *context = context_New();
context_ctor(context, trategyA);

printf("Client: Strategy is set to normal sorting.");
DoSomeBusinessLogic(context);
printf("\n");

printf("Client: Strategy is set to reverse sorting.");
SetStrategy(context,trategyB);
DoSomeBusinessLogic(context);

context_free(context);

//istrategy_dtor(Ntragety);

free(context);
free(Ntragety);
free(trategyA);
free(trategyB);

return 0;
}