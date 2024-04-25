import java.util.Scanner;

public class evenandodd {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int a[]=new int[10];
        int i,se=0,sod=0;
        System.out.println("enter a 10 number");
        for(i=0;i<10;i++)
        {
            a[i]=in.nextInt();
        }
        for(i=0;i<10;i++)
        {
            if(a[i]%2==0)
            se=se+a[i];
            else
            sod=sod+a[i];
        }
        System.out.println("sum of even"+se);
        System.out.println("sum of odd"+sod);
    }
    
}
