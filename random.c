#include <stdio.h>
#include <stdlib.h>
char randchar(){
    char retVal;
    retVal = 'A' + (random() % 26);
    return retVal;
}