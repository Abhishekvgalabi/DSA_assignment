   #include<stdio.h>
   struct book
   {
       char title[20];
       char author[20];
       float price;
       int pages;
   }b1,b2;

   main()
   {
       float avg;
     float avg_price(struct book b1,struct book b2);
     printf("enter the title author price and pages of book 1\n");
     scanf("%s%s%f%d",&b1.title,&b1.author,&b1.price,&b1.pages);

     printf("enter the title author price and pages of book 2\n");
     scanf("%s%s%f%d",&b2.title,&b2.author,&b2.price,&b2.pages);

     avg=avg_price(b1,b2);
     printf("average price=%f\n",avg);
   }

   float avg_price(struct book b1,struct book b2)
   {
       float avgprice;
       avgprice=(b1.price+b2.price)/2;
       return(avgprice);
   }
