/*#include <stdio.h>
 
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
      printf("%c isn't a vowel.\n", sw);*/

 


#include <stdio.h>
 
int main()
{
  char cr;
 
  printf("Input a character\n");
  scanf("%c", &cr);
 
  if ((cr >= 'a' && cr <= 'z') || (cr >= 'A' &&cr <= 'Z')) {
    if (cr=='a' || cr=='A' || cr=='e' || cr=='E' || cr=='i' || cr=='I' || cr=='o' || cr=='O' || cr== 'u' || cr=='U')
      printf("%c is a vowel.\n", cr);
    else
      printf("%c is a consonant.\n", cr);
  }
  else
    printf("%c is neither a vowel nor a consonant.\n", cr);
 
  return 0;
}
