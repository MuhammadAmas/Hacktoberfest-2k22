package Hacktoberfest;

import java.util.Scanner;

public class DivisiblePairs {
	public static int divisibleSumPairs(int arr[],int k) {
		int count=0;
		for(int i=0;i<arr.length-1;i++) {
			for(int j=i+1;j<arr.length;j++) {
				if((arr[i]+arr[j])%k==0) {
					count++;
				}
			}
		}
		return count;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in); 
		int n= sc.nextInt(); 
		int k= sc.nextInt();
		int[] arr = new int[n];  
		for(int i=0; i<n; i++)  
		{   
		arr[i]=sc.nextInt();  
		}  

		System.out.println(divisibleSumPairs(arr,k));

	}

}
