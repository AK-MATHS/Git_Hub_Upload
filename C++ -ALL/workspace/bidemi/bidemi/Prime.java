package bidemi;
import java.util.ArrayList;
public class Prime {
	
    public static void main(String[] args){
    	int sum = 0;
    	
    	ArrayList<Long> numberList = new ArrayList<Long>();
    	ArrayList<Long> numberList2 = new ArrayList<Long>();
    	ArrayList<Long> numberList3 = new ArrayList<Long>();
    	
    	for(long i = 1; i <= Math.pow(10, 8); i++){
    		if(isPrimeNumber(i)){
    			numberList.add(i);
    			
    			
    		
    		}
    	
    	
    	}
    	for(int i = 1; i<Math.pow(10, 8); i++){
    		if(i%2 != 0 && i%3 != 0 && i%5!=0 && i%7 != 0 && i % (long) Math.sqrt(i) != 0){
    			System.out.println(i);
    		}
		}

    	System.out.println(numberList);
    	
//    	for(int i = 1; i <=  numberList.size(); i++){
//    		long a = numberList.get(i);
//    		long b = numberList.get(i);
//    		long c = numberList.get(i);
//    		
//			if ((a<b) && (b<c) && (Math.pow(b+1, 2) == ((a+1) * (c+1))))
//            {
//              
//               System.out.printf("(%d, %d, %d) \n", a, b, c);
//               sum +=i;
//            }
//			
//    	}
//    	
//    	
//    	
//    	for(int i = 0; i<numberList.size(); i++){
//    		for(int j = 0; j<numberList.size(); j++){
//    			for(int k = 0; k<numberList.size(); k++){
//    				long a = numberList.get(i);
//    				long b = numberList.get(j);
//    				long c = numberList.get(k);
//    				
//    				if ((a<b) && (b<c) && (Math.pow(b+1, 2) == ((a+1) * (c+1))))
//                    {
//                      
//                       System.out.printf("(%d, %d, %d) \n", a, b, c);
//                       sum +=i;
//                    }
//    			}
//    		}
//    	}
//    	System.out.println(numberList);
 }
    	
    	
    	/*for(int i = 1; i<Math.pow(10, 8); i++){
    		if(i%2 != 0 && i%3 != 0 && i%5!=0 && i%7 != 0 && i % (long) Math.sqrt(i) != 0){
    			System.out.println(i);
    			
    		}
    		
    	}*/
    	
    	
// 	
//    	for(int i = 1; i <= Math.pow(10, 2); i++)
//    	{
//         for(int j =0; j<=Math.pow(10, 2); j++){
//        	 for(int k = 0; k<=Math.pow(10, 2) ; k++){
//        		 if ((i<j) && (j<k) && (Math.pow(j+1, 2) == ((i+1) * (k+1))))
//                 {
//                   
//                    System.out.printf("(%d, %d, %d) \n", i, j, k);
//                    sum +=i;
//                 }
//        	 }
//         }
//    	  
//    	   
//    	   
//    	   
//    	    
//         
//    }
//       System.out.println(sum);
//       
//   }
//

    public static boolean isPrimeNumber(long i) {
        long factors = 0;
        long j = 1;
        long sum = 0;

        while(j <= i)
        {
            if(i % j == 0)
            {
                factors++;
                sum += i;
                
            }
            j+=1;
            
        }
        return (factors == 2);
  }

}
