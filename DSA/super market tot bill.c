    #include<stdio.h>
    main()
   {
   int pur_amt;
   float tot_bill;
   printf("enter the pur_amt\n");
   scanf("%d",&pur_amt);
   if(pur_amt>0)
    {
   switch(pur_amt)
   {
   case 1 ... 1000:tot_bill=pur_amt;
   printf("tot_bill=%f\n",tot_bill);
   break;
   case 1001 ... 5000:tot_bill=pur_amt*0.98;
   printf("tot_bill=%f\n",tot_bill);
   break;
   case 5001 ... 10000:tot_bill=pur_amt*0.97;
   printf("tot_bill=%f\n",tot_bill);
   break;
   default:tot_bill=pur_amt*0.95;
   printf("tot_bill=%f\n",tot_bill);
   break;
   }
   }
else
    printf("invalid pur_amt\n");
   }
