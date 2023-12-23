import java.util.Scanner;


public class app{
    public static void main(String [] args){
        Scanner sc =new Scanner(System.in);

        int a=sc.nextInt();
        char operator =sc.next().charAt(0);
        int b=sc.nextInt();

        switch(operator){
            case '+':
                System.out.println(a+b);
                break;

            case '-':
                System.out.println(a-b);
                break;

            case '*':
                System.out.println(a*b);
                break;

            case '/':
                try {
                    System.out.println(a/b);
                } catch (Exception ex) {
                    System.out.println("Invalid Division");
                }
                break;
            default: 
                System.out.println("Invalid Operator");    
           

        }


    }

}