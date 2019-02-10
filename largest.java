import java.util.Scanner;
 
class largest
{
  public static void main(String args[])
  {
    int a,b,c;
    System.out.println("Enter three integers");
    Scanner in = new Scanner(System.in);
 
    a = in.nextInt();
    b = in.nextInt();
    c = in.nextInt();
 
    if (a > b && a > c)
      System.out.println("First number is largest.");
    else if (b > a && b > c)
      System.out.println("Second number is largest.");
    else if (c > a && c > b)
      System.out.println("Third number is largest.");
    else
      System.out.println("The numbers are not distinct.");
  }
}
