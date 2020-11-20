
//STRUCTURE using FUNCTION .

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int roll;
    float marks;
};

struct Student input_stud(struct Student person);
void display_stud(struct Student human);


struct Student input_stud(struct Student person)
{
    printf("Enter student name : ");
    // scanf("%s", person.name);
    // scanf("%[^\n]", person.name);
    gets(person.name);
    printf("Enter student roll no. : ");
    scanf("%d", &person.roll);
    printf("Enter student marks : ");
    scanf("%f", &person.marks);

    return person;
}

void display_stud(struct Student human)
{
    printf("student name : %s \n",human.name);
    printf("student roll no. : %d \n",human.roll);
    printf("student marks : %.2f \n",human.marks);
}

int main()
{
    // struct Student student1 = {"Niharika D", 44, 32.55};
    struct Student student1;
    struct Student s1 ;

    s1 = input_stud(student1);
    
    printf("\n Displaying details of first student ---> \n \n");
    display_stud(s1);
}
