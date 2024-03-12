   #include<stdio.h>
   main()
   {
    int num;
    printf("enter the number\n");
    scanf("%d",&num);


    switch(num%2)
    {
    case 0:printf("num is even\n");
    break;
    default: num%2==0;
    printf("no is odd\n");
    }


   }
