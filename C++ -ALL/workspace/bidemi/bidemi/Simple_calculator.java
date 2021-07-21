package bidemi;
import java.util.Scanner;
public class Simple_calculator {

	public static void main(String[] args) {
		Scanner toad = new Scanner(System.in);
		double fnum, snum, answer;
		System.out.println("Enter your first number");
		fnum = toad.nextDouble();
		System.out.println("Enter your second number");
		snum = toad.nextDouble();
		answer = fnum + snum;
		System.out.println(answer);
	}

}
