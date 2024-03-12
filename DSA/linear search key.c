   #include<stdio.h>
   int a[5];
   main()
   {
   void read_array(int n);
   void display_array(int n);
   void linear_search(int n,int key);
   int n,key;
   printf("enter the number of elements in array\n");
   scanf("%d",&n);
   if(n>=0&&n<=5)
   {
        read_array(n);
        display_array(n);
        printf("enter the key element\n");
        scanf("%d",&key);
        linear_search(n,key);
   }
   else
    printf("no. of size is incorret\n");
   }

   void read_array(int n)
   {
       int i;
       printf("enter the array elements\n");
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
   }
   void display_array(int n)
   {
       int i;
       for(i=0;i<n;i++)
       {
           printf("%d ",a[i]);
       }
   }
   void linear_search(int n,int key)
   {
       int i;
       for(i=0;i<n;i++)
       {
           if(a[i]==key)
           {
               printf("key is found\n");
           }
       }
       if(i==n)
        printf("key is not found\n");
   }
