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
  char ch;
 
  printf("Input a character\n");
  scanf("%c", &ch);
 
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z')) {
    if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U')
      printf("%c is a vowel.\n", ch);
    else
      printf("%c is a consonant.\n", ch);
  }
  else
    printf("%c is neither a vowel nor a consonant.\n", ch);
 
  return 0;
}
