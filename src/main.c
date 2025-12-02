#include <stdio.h>
#include <stdlib.h>
#include "task.h"
int main() 
{
    int choice;
    while(1)
    {
        printf("\n====TASK MANAGER====\n");
        printf("1. Add New Task\n");
        printf("2. Show All Tasks\n");
        printf("3. Mark All Tasks as Completed (Clear file)\n");
        printf("4. Exit Program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice==1)
        addTask();
        else if(choice==2)
        displayTasks();
        else if(choice==3)
        resetTasks();
        else if(choice==4)
        {
            printf("Closing Task Manager...\n");
            break;
        }
        else
        {
            printf("Invalid Input. Please try again.\n");
        }
    }
    return 0;
    }