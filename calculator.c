lol/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 2
 * Title:			Calculator
 * Author:			Luca Tomala 
 * ----------------------------------------------------------
 * Description:
 *  A programm which calulates 2 digits
 * ----------------------------------------------------------
*/

#include <stdio.h>
#include <float.h>

void getNumbers(double* firstOperand, double* secondOperand);
int calculate(int type, double firstNumber, double secondNumber)
void menu(int selection);

int main(int argc, const char *argv[])
{
    int selection = -1;
    double first = 0;
    double second = 0;
    do
    {
        menu(&selection);

        if (selection != -1)
        {

            getNumbers(&first, &second);
            int calculation_status = calculate(&selection, &first, &second);
            if (calculation_status == -1)
            {
                printf("Number overflow\n");
            }

            else if (calculation_status == -2)
            {
                printf("Number underflow\n");
            }
        }
    }
    while(selection != -1);
    return 0;
}

int calculate(int type, double firstNumber, double secondNumber)
{
    double calculationResult;
    switch (type)
    {
        case 1:
            if (firstOperand + secondOperand > DBL_MAX) {
                return -1;
            }
            else if (firstOperand + secondOperand < -DBL_MAX) {

                return -2;
            }
            calculationResult = firstOperand + secondOperand;
            break;
        case 2:
            if (firstOperand - secondOperand > DBL_MAX) {

                return -1;
            }
            else if (firstOperand - secondOperand < -DBL_MAX) {

                 return -2;
            }
            calculationResult = firstOperand - secondOperand;
            break;
        case 3:
            if (firstOperand * secondOperand > DBL_MAX) {

                return -1;
            }
            else if (firstOperand * secondOperand < -DBL_MAX) {

                 return -2;
            }
            calculationResult = firstOperand * secondOperand;
            break;
        case 4:
            if (firstOperand / secondOperand > DBL_MAX) {

                return -1;
            }
            else if (firstOperand / secondOperand < -DBL_MAX) {
                return -2;
            }
            calculationResult = firstOperand / secondOperand;
            break;
    }

    printf("Calculation Result: %lf\n", calculationResult);
    return 0;
}

void getNumbers(double* firstOperand, double* secondOperand)
{
    printf("Please enter the first operand: ");
    scanf("%lf", firstOperand);

    printf("Please enter the second operand: ");
    scanf("%lf", secondOperand);
}

void menu(int selection)
{
    printf("Choose one of the following operations:\n");
    printf("    Add (1)\n");
    printf("    Subtract (2)\n");
    printf("    Multiply (3)\n");
    printf("    Divide (4)\n");
    printf("Stop program (-1)\n");

    do
    {
        if (!(input >= -1 && input <= 4))
        {
            printf("Input not allowed, please try again\n");
        }
        printf("Enter your choice: ");
        scanf("%d", selection);
    } while (!(input >= -1 && input <= 4));
}
