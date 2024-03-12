    #include<stdio.h>
    main()
    {
      int x, y ,z;
      printf("enter the two numbers\n");
      scanf("%d%d",&x,&y);
      z=x;
      x=y;
      y=z;
      printf("values after swapping\n");
      printf("x=%d\ny=%d\n",x,y);
    }
