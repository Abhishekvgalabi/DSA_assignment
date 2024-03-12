 #include<stdio.h>
 #define size 5
 struct student
 {
     char name[30];
     int rno;
     float ht;
 };
 struct student stack[size];
 main()
 {
     int top=-1;
     int ch;
     int push(int top);
     int pop(int top);
     void display(int top);

     do
     {
         printf("1--push\n");
          printf("2--pop\n");
           printf("3--display\n");
            printf("4--exit\n");
         printf("enter the choice\n");
         scanf("%d",&ch);

         switch(ch)
         {
             case 1: if(top==size-1)
                       printf("stack is full\n");
                       else
                       {

                           top=push(top);
                       }
                       break;
             case 2: if(top==-1)
                   printf("stack is empty\n");
                   else
                   {
                       top=pop(top);
                   }
                   break;
            case 3:if(top==-1)
                   printf("stack is empty\n");
                   else
                   {
                       display(top);
                   }
                   break;

            case 4: exit(0);break;
            default:printf("invalid choice\n");
            break;
         }
     }while(ch!=4);
 }

 int push(int top)
 {
     top=top+1;
     scanf("%s%d%f",&stack[top].name,&stack[top].rno,&stack[top].ht);
     return(top);
 }

 int pop(int top)
 {
     printf("student poped is name=%s\t roll no=%d\t height=%f\n",stack[top].name,stack[top].rno,stack[top].ht);
     top=top-1;
     return(top);
 }

 void display(int top)
 {
     int i;
     i=top;
     while(i!=-1)
     {
        printf("student in stack name=%s\t roll no=%d\t height=%f\n",stack[i].name,stack[i].rno,stack[i].ht);
       i--;
     }
 }

