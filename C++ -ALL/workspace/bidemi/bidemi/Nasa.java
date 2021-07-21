package bidemi;
import java.util.*;
public class Nasa {

	public static void main(String[] args) {
		double mercury = 0.38;
		double venus = 0.91;
		double earth = 1.00;
		double mars = 0.38;
		double jupiter = 2.34;
		double saturn = 1.06;
		double uranus = 0.92;
		double neptune = 1.19;
		
		
		Scanner keyboard = new Scanner(System.in);
		System.out.println("Enter your weight on planet earth in kilograms");
		int earth_weight = keyboard.nextInt();
		System.out.println("Indicate the planet you are on by entering: 1 for mercury,"
					+ " 2 for Venus, 3 for Earth, 4 for Mars, 5 for jupiter, 6 for Saturn, 7 for Uranus,"
					+ " 8 for Neptune");
		int x = keyboard.nextInt();
		if (x==1||x==2||x==3||x==4||x==5||x==6||x==7||x==8)	{
			if (x==1){
				double weight = earth_weight * mercury;
				System.out.println("Your earth weight "+ earth_weight+" on planet Mercury is " + weight +"kg" );
			}
			else if (x==2){
				double weight = earth_weight * venus;
				System.out.println("Your earth weight "+ earth_weight+" on planet Venus is " + weight +"kg" );
				
			}
			else if (x==3){
				double weight = earth_weight * earth;
				System.out.println("Your earth weight "+ earth_weight+" on planet Earth is " + weight +"kg" );
				
			}
			else if (x==4){
				double weight = earth_weight * mars;
				System.out.println("Your earth weight "+ earth_weight+" on planet Mars is " + weight +"kg" );
				
			}
			else if (x==5){
				double weight = earth_weight * jupiter;
				System.out.println("Your earth weight "+ earth_weight+" on planet Jupiter is" + weight +"kg" );
				
			}
			else if (x==6){
				double weight = earth_weight * saturn;
				System.out.println("Your earth weight "+ earth_weight+" on planet Saturn is " + weight +"kg" );
				
			}
			else if (x==7){
				double weight = earth_weight * uranus;
				System.out.println("Your earth weight "+ earth_weight+" on planet Uranus is" + weight +"kg");
				
			}
			else if (x==8){
				double weight = earth_weight * neptune;
				System.out.println("Your earth weight "+ earth_weight+" on planet Neptune is" + weight +"kg");
				
			}
		}
		else {
			System.out.println("wrong entry");
			
			
			
		}
	}

}
