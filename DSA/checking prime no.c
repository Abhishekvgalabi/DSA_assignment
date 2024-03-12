       #include<stdio.h>
       int a[50];
       main()
       {
           int n;
           void read_array(int n);
           void display_array(int n);
           void prime_array(int n);
           printf("enter the number of elements in an array\n");
           scanf("%d",&n);
           if(n>=1&&n<=50)
           {

              prime_array(n);
           }
           else
            printf("incorect of size of array\n");
       }

       void prime_array(int n)
       {
           int i,j,prime;
           printf("the prime elements are\n");
           for(i=0;i<n;i++)
           {
               prime==1;
               for(j=2;j<=a[i]/2;j++)
               {
                   if(a[i]%j==0)
                   {
                       prime=0;
                       break;
                   }
               }
               if(prime==1)
                printf("prime elemets in an array=%d ",a[i]);
           }
       }
