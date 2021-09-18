#include "expressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
//functions
double get_sales_tax_amount(double meal_amount)
{
    //get product
    return meal_amount * (TAX_RATE/100);
}

double get_tip_amount(double meal_amount, double tip_rate)
{
    //get product
    return meal_amount * (tip_rate/100);
}
