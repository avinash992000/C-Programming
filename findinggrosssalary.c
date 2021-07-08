/*
    Problem Statement:
        1. If basic salary >= 50000,        DA->42%, HRA->12%, Bonus->5%
        2. If basic salary 25000<=BS<50000  DA->45%, HRA->15%, Bonus->3%
        3. If basic salary <25000           DA->40%, HRA->18%, Bonus->2%
        => Find gross salary?
        Logic: BasicSalary + DA + HRA + bonus
            BasicSalary -> Input
            DA = BasicSalary * 0.42 / 0.45 / 0.4
            HRA = BasicSalary * 0.12 / 0.15 / 0.18
            Bonus = BasicSalary * 0.05 / 0.03 / 0.02
        => Input: Only input i.e. basic Salary
*/
#include<stdio.h>
int main()
{
    float basicSalary;
    printf("Enter basic salary: ");
    scanf("%f",&basicSalary);

    if(basicSalary >= 50000.00)
    {
        //In-detailed calculation
        float da = basicSalary * 0.42;
        float hra = basicSalary * 0.12;
        float bonus = basicSalary * 0.05;
        float grossSalary = basicSalary + da + hra + bonus;
        printf("Gross Salary of the employee by having basic salary %.2f is: %.2f",basicSalary, grossSalary); 
    }
    else if(basicSalary<50000.00 && basicSalary >=25000.00)
    {
        //Partial calculation
        float grossSalary = basicSalary + basicSalary * 0.40 + basicSalary * 0.18 + basicSalary * 0.02;
        printf("Gross Salary of the employee by having basic salary %.2f is: %.2f",basicSalary, grossSalary); 
    }
    else
    {
        //Printing direct value
        printf("Gross Salary of the employee by having basic salary %.2f is: %.2f",basicSalary, (basicSalary + basicSalary * 0.40 + basicSalary * 0.18 + basicSalary * 0.02)); 
    }
    return 0;
}
