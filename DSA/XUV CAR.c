    #include<stdio.h>
    float car(char vehicals,float price);
    main()
    {
    float disc,net_amt,price;
    char vehicals;
    printf("enter the character and price\n");
    scanf("%c%f",&vehicals,&price);
    net_amt=car(vehicals,price);
    printf("net amount=%f\n",net_amt);
    }
    float car(char vehicals,float price)
    {
    float disc,tot_amt;

    if(vehicals=='c'|| vehicals=='C')
    {
    if(price==400000)
    {
        tot_amt=price-5000;
    printf("discount=5000\n");

    }
    else if(price>=400001 && price<=600000)
    {
    disc=(price-400000)*0.05+5000;
    tot_amt=price-disc;
    printf("discount=%f\n",disc);
    }
    else if(price>=600001 && price<=700000)
    {
    disc=(price-600000)*0.07+10000;
    tot_amt=price-disc;
    printf("discount=%f\n",disc);
    }
    else if(price>=700001 && price<=900000)
    {
    disc=(price-700000)*0.09+20000;
    tot_amt=price-disc;
      printf("discount=%f\n",disc);
    }
    return(tot_amt);

    }
    else if(vehicals=='x'|| vehicals=='X')
    {
     if(price>=1100000 && price<=1500000)
     {
         tot_amt=price-30000;
         printf("discount=30000\n");
     }
     else if(price>1500000)
     {
         disc=(price-1500000)*0.15+30000;
         tot_amt=price-disc;
         printf("discount=%f\n",disc);
     }
     return(tot_amt);

    }
    else if(vehicals=='ex'|| vehicals=='Ex')
    {
        if(price>=1500000 && price<=3000000)
        {
            tot_amt=price-500000;
            printf("discount=500000\n");
        }
        else if(price>3100000)
        {
            disc=(price-3000000)*0.2+500000;
            tot_amt=price-disc;
            printf("discount=%f\n",disc);
        }
        return(tot_amt);
    }


    }
