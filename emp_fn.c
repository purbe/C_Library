
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//employee datebase
struct emp
{
int empno;
char name[20];
float salary;
};

//readfile function
int readfile(struct emp *emp_rec ,const char* filename)
{
    FILE * fp;

    float sigs3;
    char sigs2[20];
    int sigs1;
    int s1=0;
    int count=0;
    int invalid=0;
    //file open
    fp=fopen(filename,"r");

    if (fp) {

        while(fscanf(fp,"%d " "%s "  "%f ",&sigs1, sigs2, &sigs3)!=EOF && s1!=20)

           {
                emp_rec[s1].empno=sigs1;
                if(emp_rec[s1].empno==0&&invalid==0)
                {
                    count++;
                    invalid=1;
                }
                strcpy (emp_rec[s1].name,sigs2);
                if((strcmp("NA",emp_rec[s1].name)==0||strcmp("na",emp_rec[s1].name)==0)&&invalid==0)
                {
                    count++;
                    invalid=1;
                }

                emp_rec[s1].salary=sigs3;
                if(emp_rec[s1].salary==0.0 && invalid==0)
                {
                    count++;
                }
                s1++;
                invalid=0;

            }
            fclose(fp);
    }
    else
        printf("Could not open file");


    return (20-count);
}

//display list valid + invalid entries
void display_list(struct emp *emp_rec, int no_of_record)
{
    int i;
    printf("\nempno\t name\t salary\n");
    for(i=0;i<no_of_record;i++)
    {
        printf("\n%d\t",emp_rec[i].empno);
        printf("%s\t",emp_rec[i].name);
        printf("%.2f\n",emp_rec[i].salary);

    }
}

//display record by search name
void display_record_name(struct emp *emp_rec,const char *name)
{
    int i;
    int flage=0;

    if(strcmp("NA",name)==0||strcmp("na",name)==0)
    {
        printf("\n error : invalid input\n");
        return;
    }
    printf("\nempno\t name\t salary\n");
    for(i=0;i<20;i++)
    {
       if(strcmp(emp_rec[i].name,name)==0)
       {
            printf("\n%d\t",emp_rec[i].empno);
        printf("%s\t",emp_rec[i].name);
        printf("%.2f\n",emp_rec[i].salary);
        flage=1;
        break;
       }

    }
    if(flage==0)
    {
        printf("no record found");
    }
}

//disply record by search empno
void display_record_empno(struct emp *emp_rec, int empno)
{
     int i;
     int flage=0;
     if(empno==0)
    {
        printf("\n error : invalid input\n");
        return;
    }
    printf("\nempno\t name\t salary\n");
    for(i=0;i<20;i++)
    {
       if(emp_rec[i].empno==empno)
       {
            printf("\n%d\t",emp_rec[i].empno);
        printf("%s\t",emp_rec[i].name);
        printf("%.2f\n",emp_rec[i].salary);
        flage=1;
        break;
       }

    }
    if(flage==0)
    {
        printf("\n no record found\n");
    }
}





