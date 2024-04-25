import java.util.*;
public class factorial
{
    public static void main(String[] args) {
        int i,f=1,s=0,n;
        Scanner in =new Scanner(System.in);
        System.out.println("enter a number");
        n=in.nextInt();
        for(i=1;i<=n;i++)
        {
            f=f*i;
            s=s+f;
        }
        System.out.println("sum of factorial"+f);
    }
    
}
