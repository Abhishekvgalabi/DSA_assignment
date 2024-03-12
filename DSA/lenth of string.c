  #include<stdio.h>
  main()
  {
      char str[100];
      int c;
      printf("enter the string\n");
      gets(str);
      printf("string name=");
      puts(str);
      c=strlen(str);
      printf("length of %s=%d\n",str,c);
  }
