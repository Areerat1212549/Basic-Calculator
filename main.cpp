//Libraries
//Use isdigit() for checking the numbers
#include <stdio.h>
#include <ctype.h>

#define MAX 100

//variables
char expression[MAX];

//prototype functions
void extractExpression();
void calculate();
void printExpression();
void removeNumber(int index); //remove numbers from the array
void removeOperator(int index); //remove operators from the array
//functions

int main() {
    printf("Enter the expression that you want to calculate: ");
    scanf("%s", expression);
    extractExpression();
    calculate();
}

//remove numbers after done calculate
void removeNumbers(int index) {
    //after calculate, go through a for loop
    //shift the position by 1 in number array
    //then the amount of numbers - 1
}

//remove operators after done calculate
void removeOperator(int index) {
    //after calculate, go through a for loop
    //shift the position by 1 in operator array
    //then the amount of numbers - 1
}

void extractExpression() {
    //going through while loop it it's the end of the expression or not
    //check if it's a number or operator with isdigit()
    //add those in the number array or operator array
}

void calculate() {
    //Have to do * / % first
    //then continue with + -

    //print out the answer
}

//print out the steps for the calculation
void printExpression() {
    //go through loop for each one to print out the number and the operators
}