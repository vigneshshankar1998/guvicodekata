#include <stdio.h>
 
int main()
{
  char sw;
 
  printf("Input a character\n");
  scanf("%c", &sw);
 
  switch(sw)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf("%c is a vowel.\n", sw);
      break;
    default:
      printf("%c isn't a vowel.\n", sw);
  }              
 
  return 0;
}
