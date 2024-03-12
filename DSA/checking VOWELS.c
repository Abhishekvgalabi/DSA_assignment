  #include<stdio.h>
  main()
  {
  char ch;
  printf("enter the character\n");
  scanf("%c",&ch);
  switch(ch)
  {
  case'a':printf("Vowel\n");break;
  case'e':
  case'i':
  case'o':
  case'u':
  case'A':
  case'E':
  case'I':
  case'O':
  case'U':printf("Vowel\n");break;
  default:printf("consonants\n");break;
  }
  }
