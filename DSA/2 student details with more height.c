#include<stdio.h>
struct stud
{
    char sname[20];
    int rno;
    float ht;
}s1,s2;

main()
{
    printf("enter the 2 student details\n");
    printf("enter the name and roll no and height of student 1\n");
    scanf("%s %d %f",&s.sname,&s.rno,&s.ht);

     printf("enter the name and roll no and height of student 2\n");
    scanf("%s %d %f",&s1.sname,&s1.rno,&s1.ht);

    printf("the student details whose height is more\n");
    if(s.ht>s1.ht)
    {
        printf("name=%s  roll no=%d  height=%f \n",s.sname,s.rno,s.ht);
    }
    else

     printf("name=%s  roll no=%d  height=%f \n",s1.sname,s1.rno,s1.ht);
}
