import java.util.Scanner;
 
class largest
{
  public static void main(String args[])
  {
    int a,b,c;
    Scanner in = new Scanner(System.in);
 
    a = in.nextInt();
    b = in.nextInt();
    c = in.nextInt();
 
    if (a > b && a > c)
      System.out.println(a);
    else if (b > a && b > c)
      System.out.println(b);
    else if (c > a && c > b)
      System.out.println(c);
    else
      System.out.println("The numbers are not distinct.");
  }
}
