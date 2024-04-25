import java.util.Scanner;

public class asendingorder {
    public static void main(String[] args) {
        int a[]=new int[10];
        int i,j,t;
        Scanner in=new Scanner(System.in);
        System.out.println("enter a 10 number");
        for(i=0;i<10;i++)
        {
            a[i]=in.nextInt();
        }
        for(i=0;i<10;i++)
        {
            for(j=0;j<9-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        System.out.println("after asending");
        for(i=0;i<10;i++)
        {
            System.out.println(a[i]);
        }
    }
    
}
