#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"

context *context_New()
{
    return(context*)malloc(sizeof(context));
}

void context_ctor(context *this, void *nContext)
{
    this->nContext = (istrategy*)nContext;

    this->name = malloc(sizeof(char) * 15);

    char Name[15];
    printf("Insert text\n");
    fflush(stdout);

    fgets(Name, 15, stdin);
    Name[sizeof(Name) - 1] = 0;

    strcpy(this->name, Name);
}

void context_free(context *this)
{
   free(this->name);
}

void SetStrategy(context *this, void *nContext)
{
    this->nContext = (istrategy*)nContext;

}

void DoSomeBusinessLogic(context *this)
{
    this->nContext->Algorithm(this->name);
}
