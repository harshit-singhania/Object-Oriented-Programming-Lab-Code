#include <stdio.h>
struct student
{
    char name[20];
    int roll_no;
    char branch[10];
    int physics, chem, maths, total, average;
};
void main()
{
    struct student s;
    printf("Enter name, roll no, branch: ");
    scanf("%s %d %s %d %d %d", s.name, &s.roll_no, s.branch);
    printf("physics, chem, maths:");
    scanf("%d %d %d", &s.physics, &s.chem, &s.maths);
    s.total = s.physics + s.chem + s.maths;
    s.average = s.total / 3;
    printf("\nName: %s\nRoll no: %d\nBranch: %s\nPhysics: %d\nChem: %d\nMaths: %d\nTotal: %d\nAverage: %d\n", s.name, s.roll_no, s.branch, s.physics, s.chem, s.maths, s.total, s.average);
}