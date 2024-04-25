import java.util.*;
public class series
 {
    public static void main(String args[])
    {
        double i,s=0,n;
        Scanner in = new Scanner(System.in);
        System.out.println("enter a number");
        n=in.nextDouble();
        for(i=1;i<=n;i++)
        {
            s=Math.pow(i,2);
            System.out.println(s);
        }
    }
}
