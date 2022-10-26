#ifndef ISTRATEGY_H_
#define ISTRATEGY_H_

typedef void (*algorithm)(void *);

typedef struct
{
    algorithm Algorithm;
    
} istrategy ; 

istrategy *istrategy_new();
void istrategy_ctor(istrategy*);
void istrategy_free(istrategy*);
#endif