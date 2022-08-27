
struct emp
{
int empno;
char name[20];
float salary;
};

int readfile(struct emp *emp_rec,const char* filename);
void display_list(struct emp *emp_rec, int no_of_record);
void display_record_name(struct emp *emp_rec,const char *name);
void display_record_empno(struct emp *emp_rec, int empno);
