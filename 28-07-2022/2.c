#include <stdio.h>
#include <conio.h>
#include <string.h>

// Declaration of structure org
struct org
{
    char name[30], address[50];
    int emp_id, salary;
};
void main()
{

    // declaration of org member as array
    struct org employee[20];
    int n, i;
    // clrscr();
    printf("\nEnter the number of employeed in your organization(<=20):");
    scanf("%d", &n);

    // enter values using for loop
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Person %d\n Name :", i + 1);
        scanf("%s", &employee[i].name);
        printf("enter adress:\n"); 
        scanf("%s", &employee[i].address); 
        printf("\nEmployee Id :");
        scanf("%d", &employee[i].emp_id);
        printf("\nEmployee Salary :");
        scanf("%d", &employee[i].salary);
    }

    // printing employee information
    printf("\nEmployees Information\n");
    for (i = 0; i < n; i++)
    {
        printf("\nPerson %d\n Name : %s", i + 1, employee[i].name);
        printf("\nEmployee Id : %d", employee[i].emp_id);
        printf("\nEmployee Salary : %d", employee[i].salary);
        printf("gross pay: %d", (employee[i].salary + employee[i].salary * 0.7+ employee[i].salary * 0.2));
    }
    getch();
}