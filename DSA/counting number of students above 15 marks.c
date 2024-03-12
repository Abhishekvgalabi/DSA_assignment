    #include<stdio.h>
     main()
     {
         int i,n,count=0;
         float m;
         printf("enter the number students\n");
         scanf("%d",&n);
        i=1;
        while(i<=n)
         {
          printf("enter the marks\n");
          scanf("%f",&m);
          if(m>15)
          {
              count=count+1;
          }
          i++;
         }
         printf("NUMBER OF STUDENTSabove 15 marks =%d",count);
     }

