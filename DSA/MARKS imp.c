    #include<stdio.h>
    main()
    {
    int marks;
    printf("enter the marks\n");
    scanf("%d",&marks);
    switch(marks)
    {
    case 0 ... 39:printf("fail\n");
    break;
    case 40 ... 59:printf("second class\n");
    break;
    case 60 ... 79:printf("first class\n");
    break;
    case 80 ... 100:printf("distinction\n");
    break;
    default:printf("Invalid marks");
    }


    }
