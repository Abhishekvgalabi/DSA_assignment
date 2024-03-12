  #include<stdio.h>
  main()
  {
      char str1[100],str2[20];
      printf("enter the 2 strings\n");
      gets(str1);
      gets(str2);
      printf("both the strings are=");
      puts(str1);
      puts(str2);
      strcat(str1," ");
      strcat(str1,str2);
      printf("catenated string =%s",str1);
  }
