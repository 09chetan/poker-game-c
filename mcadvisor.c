#include <stdio.h>
#include <stdlib.h>
#include "pokergame.h"

/*
 
 Monte Carlo advisor not implemented yet.
 Currently using placeholder logic.
*/

int mc(Hand *origHand, int *maxdiscards, int *maxthrown, int *maxvalue, int sims)
{
    printf("\n[AI Advisor Disabled]\n");
    printf("Monte Carlo simulation module is under development.\n\n");

    /* No discard advice yet */
    *maxthrown = 0;
    *maxvalue = 0;

    return 0;
}