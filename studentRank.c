#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float physics, chemistry, maths;
    float percentage;
};


int main() {
    struct Student student[5], temp;
    
    printf("Enter the student details\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the details of student %d\n", i+1);
        printf("Enter the name of the student: ");
        scanf("%s", student[i].name);
        printf("Enter the age of the student: ");
        scanf("%d", &student[i].age);
        printf("Enter the Marks of the student below in 100: \n");
        printf("Physics: ");
        scanf("%f", &student[i].physics);
        printf("Chemistry: ");
        scanf("%f", &student[i].chemistry);
        printf("Maths: ");
        scanf("%f", &student[i].maths);

        ///////////Percentage Calculation//////////////
        float total = student[i].physics + student[i].chemistry + student[i].maths;
        student[i].percentage = (total/300)*100;
        

    }

    ///////Sorting student details///////////
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (student[i].percentage < student[j].percentage)
            {
                temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
            
        }
        
    }

    //////////printing the student details///////////

    printf("Printing the studet details based on the marks from high to low\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d position goes to\n", i+1);
        printf("Name: %s\n", student[i].name);
        printf("Age: %d\n", student[i].age);
        printf("Marks obtained\n");
        printf("Physics: %f\n", student[i].physics);
        printf("Chemistry: %f\n", student[i].chemistry);
        printf("Maths: %f\n", student[i].maths);
        printf("Percentage of marks obtaied is: %.2f\n", student[i].percentage);
    }
      
    


}
