#include <stdio.h>

struct student {
     char name [50];
    char rollNo[20];//this is a string //string is an array of 
   
    float marks;
    } student1[10];
    

int main() {
    
    for(int i=0;i<10;i++)
    {
    


    
        scanf("%s",student1[i].name);
        scanf("%s",student1[i].rollNo);
        scanf("%f",student1[i].marks);
        
    }
     for(int i=0;i<10;i++)
    {
         printf("%s",student1[i].name);
        printf("%s",student1[i].rollNo);
        printf("%f",student1[i].marks);
    }
}
    
