import java.util.*;
public class discount 
{
    int c;
    String n;
    double d,amt;
    void input()
    {
        Scanner in= new Scanner(System.in);
        System.out.println("enter the cost");
        c=in.nextInt();
        System.out.println("enter name");
        n=in.nextLine();
    }
    void cal()
    {
        if(c<=5000)
        System.out.println("no discount");
        else if(c>5000 && c<=10000)
        d=c*10/100;
        else if(c>10000 && c<=15000)
        d=c*15/100;
        else if(c>15000)
        d=c*20/100;
        amt=c-d;

    }
    void display()
    {
        System.out.println("cost"+c);
        System.out.println("name"+n);
        System.out.println("discount"+d);
        System.out.println("amount"+amt);
        
    }
    public static void main(String[] args) {
        discount 
        ob = new discount();
        ob.input();
        ob.cal();
        ob.display();
    }
    
}
