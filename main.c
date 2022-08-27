#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "emp.h"
#include "sorting.h"


int main()
{
    struct emp emp_rec[20];
    int no_of_record;
    char name[20];
    int empno;
    char filename[100];

    //readfile fun called
    printf("\nenter the filename  as in.txt  ");
    scanf("%s",filename);

    int m=readfile(emp_rec,filename);

    printf("\nNo of valid entries = %d\n",m);

    printf("\nenter the no_of_record for display list");
    scanf("%d",&no_of_record);

    if(no_of_record<=20)
    {printf("\n display list with no_of_record=%d\n ",no_of_record);
    display_list(emp_rec,no_of_record); //display_list fun called
    }
    else printf("\nerror : no_of_record should be <=20\n");

    printf("\nenter the employee name for display record: ");
    scanf("%s",name);

    printf("\n  display record \n");
    display_record_name(emp_rec,name);//display record of emp by name

    printf("\nenter the employee no. for display record : ");
    scanf("%d",&empno);

    printf("\ndisplay record \n");
    display_record_empno(emp_rec,empno);//display record of emp by empno

    struct emp emp_rec1[m]; //creating new database with valid entries


    printf("\n enter the no_of_record for sorting emp database :");
    scanf("%d",&no_of_record);


    //sort function called when no_of_record less than or equal to valid entries
    if(no_of_record<=m)
    {
        printf("\nsort by empno\n");
    Quick_sort_empno (emp_rec,emp_rec1, no_of_record);//sort by empno

    printf("\nsort by name\n");
    Quick_sort_name (emp_rec,emp_rec1, no_of_record);//sort by name

    printf("\nsort by salary\n");
    Quick_sort_salary (emp_rec,emp_rec1, no_of_record); // sort by salary

    }
    else
    {
        printf("\nerror:no_of_record should be less than or equal to valid entries\n");
    }


    return 0;
}
