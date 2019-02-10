public class LeapYear {

    public static void main(String[] args) {

        int year;
        boolean leap;
        Scanner in = new Scanner(System.in);

        if(year % 4 == 0)
        {
                leap = true;
        }
        else
            leap = false;

        if(leap)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
