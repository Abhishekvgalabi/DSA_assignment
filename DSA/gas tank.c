    #include<stdio.h>
    main()
    {
    double petrol(char gas,double size);
    double tot_amt,size;
    char gas;
    printf("enter the character and size\n");
    scanf("%c%lf",&gas,&size);
    tot_amt=petrol(gas,size);
    printf("total amount=%f\n",tot_amt);
    }

    double petrol(char gas,double size)
    {
    double T;

    if(gas=='i' || gas=='I')
    {
    if(size==14.2 )
    {
    T=(size*75.49)*(0.09+0.09)+(size*75.49)+20;
    }
    else if(size==19)
    {
     T=(size*95.5)*(0.12+0.12)+(size*95.5)+20;
    }
    return(T);
    }
    else if(gas=='b' || gas=='B')
    {
    if(size==5 || size==14.2)
    {
    T=(size*77.5)*(0.09+0.09)+(size*77.5)+20;
    }
    else if(size==19)
    {
    T=(size*97.5)*(0.12+0.12)+(size*97.5)+20;
    }
    return(T);
    }
    else if(gas=='h'|| gas=='H')
    {
    if(size==5 || size==14.2)
    {
    T=(size*79.5)*(0.09+0.09)+(size*79.5)+20;
    }
    else if(size==19)
    {
    T=(size*99.5)*(0.12+0.12)+(size*99.5)+20;
    }
    return(T);
    }
    }
