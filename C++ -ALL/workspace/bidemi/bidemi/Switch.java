package bidemi;
import java.util.Scanner;
public class Switch {
	public static void main(String[] args) {
		Scanner k = new Scanner(System.in);
		System.out.print("Enter your grade  " );
		
		int a = k.nextInt();
		int b = k.nextInt();
		int c = k.nextInt();
		
		switch (c){
			case1: System.out.println(a+b);break;
			case2: System.out.println(a-b);break;
			case3: System.out.println(a*b);break;
			case4: System.out.println(a/b);break;
			default: System.out.println("operation not supported");
			
		}
	}

}
