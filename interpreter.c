#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *initStoreInt(int sizeContainer) {
    int *intStore = (int *)malloc(sizeContainer * sizeof(int));
    if (intStore == NULL) {
        printf("ERROR: Initializizing integer store has failed, now exiting.. \n");
        exit(0); // exit the process if it fails completely
    }

    return intStore;
}

float *initStoreFloat(int sizeContainer) {
    float *floatStore = (float *)malloc(sizeContainer * sizeof(float));
    if (floatStore == NULL) {
        printf("ERROR: Initializizing float store has failed, now exiting.. \n");
        exit(0); // exit the process if it fails completely
    }

    return floatStore;
}

char *initCharStore(int size) {
    char *charStore = (char *)malloc(size * sizeof(char));
    if (charStore == NULL) {
        printf("ERROR: Initializing char store has failed, now exiting.. \n");
        exit(0); // exit the process if it fails completely
    }
    return charStore;
}

double *initStoreDouble(int sizeContainer) {
    double *doubleStore = (double *)malloc(sizeContainer * sizeof(double));
    if (doubleStore == NULL) {
        printf("ERROR: Initializizing double store has failed, now exiting.. \n");
        exit(0); // exit the process if it fails completely
    }

    return doubleStore;
}

// now that we are done with the stores, we can build the instruction set functions for each operation

// the instruction for adding a integer value into memory
void addInt(int *intStore, int index, int value) {
    intStore[index] = value;
}

// the instruction for adding a float value into memory
void addFloat(float *floatStore, int index, float value) {
    floatStore[index] = value;
}

// the instruction for adding a double value into memory
void addDouble(double *doubleStore, int index, double value) {
    doubleStore[index] = value;
}

// the instruction for adding a char value into memory
void addChar(char *charStore, int index, char value) {
    charStore[index] = value;
}