package bidemi;
import java.util.Scanner;
public class Ass4 {
	public static void main(String[] args){
		Scanner obj = new Scanner(System.in);
		
		System.out.print("Enter your number  " );
		int input = obj.nextInt();
		int answer;
		for( input=input; input>0; input--){
			answer = input*(input - 1);
			System.out.println("This is your answer: " + answer);
				
	
		}
		
	}
}
