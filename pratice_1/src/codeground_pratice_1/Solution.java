package codeground_pratice_1;

import java.util.Scanner;
import java.io.FileInputStream;

class Solution {
	public static void main(String args[]) throws Exception	{
		int T;
        int test_case;
		//Scanner sc = new Scanner(System.in);
		Scanner sc = new Scanner(new FileInputStream("sample_input.txt"));
        
		T = sc.nextInt();        
		for(test_case = 1; test_case <= T; test_case++) {
			int num = sc.nextInt();
			int xor = sc.nextInt();
			for(int N = 1;N < num;N ++) {
				int tmp = sc.nextInt();
				xor = xor^tmp;
			}

			System.out.println("Case #" + test_case);
			System.out.println(xor);
		}
		
		sc.close();
	}
}
