package codeground_pratice_7;

import java.util.Scanner;
import java.io.FileInputStream;

public class Solution {
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(new FileInputStream("sample_input.txt"));
		//Scanner sc = new Scanner(System.in);
		
		int[] check_arr = new int[400001];
		int[] input = new int[5000];
		int result = 0;
		
		int test_case = sc.nextInt();
		for(int i=1;i<=test_case;i++) {
			result = 0;
			int N = sc.nextInt();
			for(int j=0;j<N;j++) {
				
				input[j] = sc.nextInt();
				for(int k=0;k<j;k++) {
					
					if(check_arr[200000+input[j]-input[k]] == i) {
						
						result++;
						break;
					}
				}
				
				for(int k=0;k<=j;k++) {
					
					check_arr[200000+input[j]+input[k]] = i;
				}
			}
			
			System.out.println("Case #"+i);
			System.out.println(result);
		}
		
		sc.close();
	}
}
