#include <stdio.h>

struct multiplicationResult {
    int result[2][2];
};
typedef struct multiplicationResult multiplicationResult;
//prototyp - signatur vor dem aufruf bekannt.
multiplicationResult matrixMul(int dimensionX, int dimensionY, int firstOperand[dimensionY][dimensionX],
                               int secondOperand[dimensionX][dimensionY]);
//prototyp
multiplicationResult matrixMultWithPointer(int dimensionX, int dimensionY, int *firstOperand[dimensionY][dimensionX],
                                           int *secondOperand[dimensionX][dimensionY]);

int main() {
    int firstArray[2][3] = {{3,2,1},
                            {1,0,2}};
    int secondArray[3][2] = {{1,2},
                             {0,1},
                             {4,0}};
    multiplicationResult multResult = matrixMul(2, 3, firstArray, secondArray);

    printf("Without Pointer\n");
    for (int i = 0; i < 2; ++i) {
        printf("(\t ");
        for (int j = 0; j < 2; ++j) {
            printf("%i\t", multResult.result[i][j]);
        }
        printf(")\n");
    }

    printf("\nWith Pointer\n");
    int *array3[2][3] = {{&firstArray[0][0], &firstArray[0][1], &firstArray[0][2]},
                         {&firstArray[1][0], &firstArray[1][1], &firstArray[1][2]}};
    int *array4[3][2] = {{&secondArray[0][0], &secondArray[0][1]},
                         {&secondArray[1][0], &secondArray[1][1]},
                         {&secondArray[2][0], &secondArray[2][1]}};
    multiplicationResult multResultWithPointer = matrixMultWithPointer(2, 3, array3, array4);
    for (int i = 0; i < 2; ++i) {
        printf("(\t ");
        for (int j = 0; j < 2; ++j) {
            printf("%i\t", multResultWithPointer.result[i][j]);
        }
        printf(")\n");
    }
}

multiplicationResult matrixMul(int dimensionX, int dimensionY, int firstOperand[dimensionY][dimensionX],
                               int secondOperand[dimensionX][dimensionY]){
    multiplicationResult finalResult;
   for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            finalResult.result[i][j] = 0;
        }
    }
    for (int i = 0; i < dimensionX; ++i) {
        for (int j = 0; j < dimensionX; ++j) {
            for (int k = 0; k < dimensionY; ++k) {
                finalResult.result[i][j] = finalResult.result[i][j] + (firstOperand[i][k] * secondOperand[k][j]);
            }
        }
    }
    return finalResult;
}

multiplicationResult matrixMultWithPointer(int dimensionX, int dimensionY, int *firstOperand[dimensionY][dimensionX],
                                           int *secondOperand[dimensionX][dimensionY]){
    multiplicationResult finalResult;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            finalResult.result[i][j] = 0;
        }
    }
    for (int i = 0; i < dimensionX; ++i) {
        for (int j = 0; j < dimensionX; ++j) {
            for (int k = 0; k < dimensionY; ++k) {
                finalResult.result[i][j] = finalResult.result[i][j] + (*firstOperand[i][k] * *secondOperand[k][j]);
            }
        }
    }
    return finalResult;
}