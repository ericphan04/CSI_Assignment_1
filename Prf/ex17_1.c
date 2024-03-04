/*1.	Restaurant Bill
Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal cost.
The tax is 6.75 percent of the meal cost and the tip is 20 percent of the meal cost after adding the tax. 
Display the total cost, tax amount, tip amount, and total bill on the screen.
*/
#include<stdio.h>
int main(){
    float meal= 88.67;
    float tax= 0.0675;
    float tip= 0.2;
    float total_cost = meal*tax + meal;
    float tax_amount = meal * tax;
    float tip_amount = tip * total_cost;
    float total_bill = total_cost + tip_amount;
    printf("the total cost: %.2f USD",total_cost);
    printf("\ntax amount: %.2f USD",tax_amount);
    printf("\ntip amount: %.2f USD",tip_amount);
    printf("\ntotal bill: %.2f USD",total_bill);
    return 0;
}  