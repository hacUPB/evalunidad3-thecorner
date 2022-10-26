#ifndef CONTEXT_H
#define CONTEXT_H

#include "istrategy.h"

typedef struct
{
    istrategy* nContext;
    char* name;
} context;

context *context_New();
void context_ctor(context*, void*);
void context_free(context*);
void SetStrategy(context*, void*);
void DoSomeBusinessLogic(context*);

#endif