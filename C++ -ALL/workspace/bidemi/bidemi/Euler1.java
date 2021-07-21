package bidemi;
import java.util.
public class Euler1 {

	public static void main(String[] args) {
		int x;
		long sum =0;
		
		for(x=2;x<=1000;x++){
			if(x % 5 == 0 || x % 3 == 0){
				sum=sum+x;
			}	
			
		}
		System.out.println(sum);
		
	}

}
