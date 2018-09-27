#include <stdio.h>
printf("Choose on of the following operations:\n", );
printf("Add (1)\n", );
printf("Subtract (2)\n", );
printf("Multiply (3)\n", );
printf("Divide (4)\n", );
printf("Stop Programm (-1)\n", );
printf("Enter your choise: ", );
int operation;
scanf("%s\n", &operation);

if (operation == -1) {
  printf("Programm canceld by user\n", );
}
else if (operation == 1) {
  Get_first_operand();
  Get_second_operand();
  double result = firstOperand + secondOperand;
  printf("%fThe result is \n",&result );
}
else if (operation == 2) {
  Get_first_operand();
  Get_second_operand();
  double result = firstOperand- secondOperand;
  printf("%fThe result is \n",&result );
}
else if (operation == 3) {
  Get_first_operand();
  Get_second_operand();
  double result = firstOperand * secondOperand;
  printf("%fThe result is \n",&result );
}
else if (operation == 4) {
  Get_first_operand();
  Get_second_operand();
  if (operand == 0) {
    printf("The operand \n", );
  }

  printf("%fThe result is \n",&result );
}




double Get_first_operand(){
  double firstOperand;
  printf("Please enter your first operand: ", );
  scanf("%f\n",&firstOperand );
}
double Get_second_operand(){
  double secondOperand;
  printf("Please enter your second operand:", );
  scanf("%f\n",&secondOperand );
}
