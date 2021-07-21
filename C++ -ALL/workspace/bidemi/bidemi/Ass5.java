package bidemi;
import java.util.Scanner;
public class Ass5 {
	public static void main(String[] args){
		Scanner obj = new Scanner(System.in);
		int num1 ;
		int num2 ;
		System.out.println("Enter the number 1:" );
		num1 = obj.nextInt();
		System.out.println("Enter the number 2:" );
		num2 = obj.nextInt();
		
		if(num1 == num2){
			System.out.println("Numbers are equal");
		}else{
			System.out.println("Numbers are not equal");
		}
		
	}

}
