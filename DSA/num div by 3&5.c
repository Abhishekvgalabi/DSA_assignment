 #include<stdio.h>
   main()
   {
    int num;
    printf("enter the number\n");
    scanf("%d",&num);


    switch(num%3 || num%5)
    {
    case 0:printf("num is divisible by both\n");
    break;
    default:
    printf("no is not divisible\n");
    }


   }
