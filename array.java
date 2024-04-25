import java.util.*;
class array
{
    public static void main(String[] args) {
        int a[]=new int[10];
        int i,s=0;
        double av;
        Scanner in = new Scanner(System.in);
        System.out.println("enter a 10 number");
        for(i=0;i<10;i++)
        {
            a[i]=in.nextInt();

        }
        for(i=0;i<10;i++)
        {
            s=s+a[i];
        }
        av=s/10;
        System.out.println("sum"+s);
        System.out.println("average"+av);
    }
}