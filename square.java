import java.util.*;
public class square {
 public static void main(String[] args) {
    double a,sq,c,sr,s;
    Scanner in= new Scanner(System.in);
    System.out.println("enter a number");
    a=in.nextInt();
    if(a>0)
    {
        if(a%2!=0)
        {
            sq=a*a;
            c=a*a*a;
            System.out.println("square"+sq);
            System.out.println("cube"+c);
        }
        else if(a%2==0)
        {
            sq=a*a;
            sr=Math.sqrt(a);
            s=sq+sr;
            System.out.println("sum"+s);
        }
    }
    else
    System.out.println("negative");
 }
    
}
