   #include<stdio.h>
   main()
   {
   int units;
   float tot_chr;
   printf("enter the units\n");
   scanf("%d",&units);
   if(units>=0)
    {
   switch(units)
   {
   case 0 ... 100:tot_chr=units*1.0;
   printf("tot_chr=%f\n",tot_chr);
   break;
   case 101 ... 200:tot_chr=units*1.5;
   printf("tot_chr=%f\n",tot_chr);
   break;
   case 201 ... 450:tot_chr=units*2.0;
   printf("tot_chr=%f\n",tot_chr);
   break;
   default:tot_chr=units*2.5;
   printf("tot_chr=%f\n",tot_chr);
   break;
   }
   }
else
    printf("invalid choices\n");
   }
