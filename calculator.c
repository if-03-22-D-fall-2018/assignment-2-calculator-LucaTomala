lol/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 2
 * Title:			Calculator
<<<<<<< HEAD
 * Author:			Luca Tomala
=======
 * Author:			Luca Tomala 
>>>>>>> 76807b3afc68693b43328c2944e0369f36c0cea5
 * ----------------------------------------------------------
 * Description:
 *  A programm which calulates 2 digits
 * ----------------------------------------------------------
*/

#include <stdio.h>
#include <float.h>

<<<<<<< HEAD
void getNumbers(double* firstNumber, double* secondNumber);
int calculate(int type, double firstNumber, double secondNumber);
=======
void getNumbers(double* firstOperand, double* secondOperand);
int calculate(int type, double firstNumber, double secondNumber)
>>>>>>> 76807b3afc68693b43328c2944e0369f36c0cea5
void menu(int selection);

int main(int argc, const char *argv[])
{
    int selection = -1;
    double first = 0;
    double second = 0;
    do
    {
<<<<<<< HEAD
        menu(selection);
=======
        menu(&selection);
>>>>>>> 76807b3afc68693b43328c2944e0369f36c0cea5

        if (selection != -1)
        {

            getNumbers(&first, &second);
<<<<<<< HEAD
            int calculation_status = calculate(selection, first, second);
=======
            int calculation_status = calculate(&selection, &first, &second);
>>>>>>> 76807b3afc68693b43328c2944e0369f36c0cea5
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
<<<<<<< HEAD
            if (firstNumber + secondNumber > DBL_MAX) {
                return -1;
            }
            else if (firstNumber + secondNumber < -DBL_MAX) {

                return -2;
            }
            calculationResult = firstNumber + secondNumber;
            break;
        case 2:
            if (firstNumber - secondNumber > DBL_MAX) {

                return -1;
            }
            else if (firstNumber - secondNumber < -DBL_MAX) {

                 return -2;
            }
            calculationResult = firstNumber - secondNumber;
            break;
        case 3:
            if (firstNumber * secondNumber > DBL_MAX) {

                return -1;
            }
            else if (firstNumber * secondNumber < -DBL_MAX) {

                 return -2;
            }
            calculationResult = firstNumber * secondNumber;
            break;
        case 4:
            if (firstNumber / secondNumber > DBL_MAX) {

                return -1;
            }
            else if (firstNumber / secondNumber < -DBL_MAX) {
                return -2;
            }
            calculationResult = firstNumber / secondNumber;
=======
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
>>>>>>> 76807b3afc68693b43328c2944e0369f36c0cea5
            break;
    }

    printf("Calculation Result: %lf\n", calculationResult);
    return 0;
}

<<<<<<< HEAD
void getNumbers(double* firstNumber, double* secondNumber)
{
    printf("Please enter the first operand: ");
    scanf("%lf", firstNumber);

    printf("Please enter the second operand: ");
    scanf("%lf", secondNumber);
=======
void getNumbers(double* firstOperand, double* secondOperand)
{
    printf("Please enter the first operand: ");
    scanf("%lf", firstOperand);

    printf("Please enter the second operand: ");
    scanf("%lf", secondOperand);
>>>>>>> 76807b3afc68693b43328c2944e0369f36c0cea5
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
<<<<<<< HEAD
        if (!(selection >= -1 && selection <= 4))
=======
        if (!(input >= -1 && input <= 4))
>>>>>>> 76807b3afc68693b43328c2944e0369f36c0cea5
        {
            printf("Input not allowed, please try again\n");
        }
        printf("Enter your choice: ");
<<<<<<< HEAD
        scanf("%d", &selection);
    } while (!(selection >= -1 && selection <= 4));
=======
        scanf("%d", selection);
    } while (!(input >= -1 && input <= 4));
>>>>>>> 76807b3afc68693b43328c2944e0369f36c0cea5
}
