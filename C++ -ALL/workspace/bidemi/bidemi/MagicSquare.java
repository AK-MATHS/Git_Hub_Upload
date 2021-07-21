package bidemi;
import java.util.*;
public class MagicSquare {
	public static void main(String args[]){
		Scanner keyBoard = new Scanner(System.in);
		
		//int magicSquare[][] = {{16, 3, 2, 13}, {5, 10, 11, 8}, {6, 9, 7, 12}, {4, 15, 14, 1}};
		 
		System.out.println("Enter size of the square: ");
		int N = keyBoard.nextInt();
		int magicSquare[][] = new int[N][N];
		System.out.println("Enter values in the table: ");
		for(int row= 0; row<N; row++){
			for(int col = 0; col<N; col++){
				
				
				magicSquare[row][col] = keyBoard.nextInt();
			}
		}
		for (int row=0; row<N; row++)
		  { for (int col=0;col<N;col++) {
		    System.out.println( magicSquare[row][col]+" ");
		  } 
		  System.out.println();
		  }
		
//		for(int row =0; row<N; row++){
//			for(int col=0; col<N; col++){
//				System.out.println(magicSquare[row][col]);
//				
//			}
//		}
		
		N = magicSquare.length;
		int sumOfmainDiagonal = 0;
		int sumOfAntiDiagonal = 0;
		int row, col;
		int rowSum = 0;
		int columSum = 0;
		
		int[] columnArr = new int[magicSquare.length];
		int[]  rowArr   = new int[magicSquare.length];
		
		for(row = 0; row<magicSquare.length; row++){
				rowSum=0;
				columSum=0;
			for(col = 0; col<magicSquare.length; col++){
				
				rowSum += magicSquare[row][col];
				columSum += magicSquare[col][row]; 
				columnArr[row] = columSum;
				if(col == row){
					sumOfmainDiagonal += magicSquare[row][col];
					sumOfAntiDiagonal += magicSquare[row][N- col -1];
			   }
				
			}
			rowArr[row] = rowSum;
			
			
			
		}
		
	
		
		
		final int D = sumOfmainDiagonal;
		int AD = sumOfAntiDiagonal;
		
		
		Vector<Integer> list = new Vector<Integer>();
			
		for(row = 0; row<magicSquare.length; row++){
			if(rowArr[row] != D)
				list.add(row+1);
			
			
			if(columnArr[row] != D)
				list.add(-row-1);
			
		}
			if(sumOfAntiDiagonal != D)
				list.add(0);
		
			if(list.size() == 0){
				System.out.println("0");
				return;
			}
			Collections.sort(list);
				System.out.println(list.size());
			for(int i=0; i< list.size(); i++){
				
				System.out.println(list.get(i));
			}
		
	}

}
