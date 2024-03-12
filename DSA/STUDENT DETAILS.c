  #include<stdio.h>
  struct student
  {
      char sname[20];
      int rno;
      float ht;
  };

  struct student s;
  main()
  {
      printf("enter the student details\n");
      printf("enter the student name\n");
      gets(s.sname);
      printf("enter the roll no and height\n");
      scanf("%d %f",&s.rno,&s.ht);

      printf("the details of student\n");
      printf("student name=%s ,roll no=%d ,height=%f \n",s.sname,s.rno,s.ht);
  }
