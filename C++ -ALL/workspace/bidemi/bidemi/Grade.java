package bidemi;
import java.util.Scanner;
public class Grade {

	public static void main(String[] args) {
		int x,fnum;
		Scanner num =new Scanner(System.in);
		System.out.println("Enter your grade");
		fnum = num.nextInt();
		 x = fnum;	
		if (x >= 70){
			System.out.println("Your grade is A");
		}
		else if (x < 70 & x >= 60){
			System.out.println("Your grade is B");
		}
		else if (x<60 & x>=50){
			System.out.println("Your grade is C");
		}
		else if (x<50 & x>=45){
			System.out.println("Your grade is D");
		}
		else if (x<45 & x>=40){
			System.out.println("Your grade is E");
		}
		else if (x<40 ){
			System.out.println("Your grade is F");
		}

	}
	
}
