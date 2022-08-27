#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp
{
int empno;
char name[20];
float salary;
};

//compare empno
int comparatorempno(const void* p, const void* q)
{
    return (((struct emp*)p)->empno - ((struct emp*)q)->empno);
}

//compare salary
int comparatorsalary(const void* p, const void* q)
{
    return (((struct emp*)p)->salary - ((struct emp*)q)->salary);
}

//compare name
int comparatorname(const void* p, const void* q)
{
    return strcmp(((struct emp*)p)->name ,((struct emp*)q)->name);
}

//quic sort by empno
void Quick_sort_empno (struct emp *emp_rec,struct emp *emp_rec1, int no_of_record)
{

                int i;
                 int j=0;
                for(i=0;i<20&&no_of_record>0;i++)
                {

                    if(emp_rec[i].empno==0 ||emp_rec[i].salary==0.0 ){}
                    else if   ((strcmp("NA",emp_rec[i].name)==0||strcmp("na",emp_rec[i].name)==0)){}
                    else
                    {
                        emp_rec1[j].empno=emp_rec[i].empno;
                    strcpy (emp_rec1[j].name,emp_rec[i].name);
                    emp_rec1[j].salary=emp_rec[i].salary;
                    j++;
                    no_of_record--;
                    }
                }


    qsort(emp_rec1, j, sizeof(struct emp), comparatorempno);
    for(i=0;i<j;i++)
    {
        printf("\n%d\t",emp_rec1[i].empno);
        printf("%s\t",emp_rec1[i].name);
        printf("%.2f\n",emp_rec1[i].salary);

    }
}

//quic sort by name
void Quick_sort_name (struct emp *emp_rec, struct emp *emp_rec1, int no_of_record)
{

                int i;
                 int j=0;
                for(i=0;i<20&&no_of_record>0;i++)
                {

                    if(emp_rec[i].empno==0 ||emp_rec[i].salary==0.0 ){}
                    else if   ((strcmp("NA",emp_rec[i].name)==0||strcmp("na",emp_rec[i].name)==0)){}
                    else
                    {
                        emp_rec1[j].empno=emp_rec[i].empno;
                    strcpy (emp_rec1[j].name,emp_rec[i].name);
                    emp_rec1[j].salary=emp_rec[i].salary;
                    j++;
                    no_of_record--;
                    }
                }


    qsort(emp_rec1, j, sizeof(struct emp), comparatorname);
    for(i=0;i<j;i++)
    {
        printf("\n%d\t",emp_rec1[i].empno);
        printf("%s\t",emp_rec1[i].name);
        printf("%.2f\n",emp_rec1[i].salary);

    }
}

//quic sort by salary
void Quick_sort_salary (struct emp *emp_rec,struct emp *emp_rec1, int no_of_record)
{

                int i;
                 int j=0;
                for(i=0;i<20&&no_of_record>0;i++)
                {

                    if(emp_rec[i].empno==0 ||emp_rec[i].salary==0.0 ){}
                    else if   ((strcmp("NA",emp_rec[i].name)==0||strcmp("na",emp_rec[i].name)==0)){}
                    else
                    {
                        emp_rec1[j].empno=emp_rec[i].empno;
                    strcpy (emp_rec1[j].name,emp_rec[i].name);
                    emp_rec1[j].salary=emp_rec[i].salary;
                    j++;
                    no_of_record--;
                    }
                }

    qsort(emp_rec1, j, sizeof(struct emp), comparatorsalary);
    for(i=0;i<j;i++)
    {
        printf("\n%d\t",emp_rec1[i].empno);
        printf("%s\t",emp_rec1[i].name);
        printf("%.2f\n",emp_rec1[i].salary);

    }
}




