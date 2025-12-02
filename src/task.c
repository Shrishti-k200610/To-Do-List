#include <stdio.h>
#include <stdlib.h>         
#include <string.h>
#include "task.h"
struct Task {
    char title[100];
};
void addTask()
{
    FILE *fp = fopen("to-do-list.txt", "a");
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return;
    }
    char task[100];
    printf("Enter task title: ");
    getchar();
    fgets(task, 100, stdin);
    fprintf(fp, "%s", task);
    fclose(fp);
    printf("Task saved successfully.\n");
}
void displayTasks()
{
    FILE *fp = fopen("to-do-list.txt", "r");
    if (fp == NULL) 
    {
        printf("No task found\n");
        return;
    }
    char task[100];
    int count = 0;
    printf("\n---To-Do-List---\n");
    while(fgets(task, sizeof(task), fp))
    {
        count++;
        printf("%d. %s", count, task);
    }
    if(count == 0)
    printf("No tasks added yet.\n");
    fclose(fp);
}
void resetTasks()
{
    FILE *fp = fopen("to-do-list.txt", "w");
    if (fp == NULL) 
    {
        printf("Error clearing tasks!\n");
        return;
    }
    fclose(fp);
    printf("All tasks marked completed and cleared successfully.\n");
}