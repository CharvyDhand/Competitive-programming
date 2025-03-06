import java.util.*;

public class whileloop {
    public static void main(String args[]) {
        int n=10;
        Scanner obj=new Scanner(System.in);
        int x=obj.nextInt();
        int c=10*x;
        while(n>0){
            System.out.print(c+" ");
            c-=x;
            n--;
        }
            }
}