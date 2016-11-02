package codeground_pratice_3;

import java.util.Scanner;
import java.util.Arrays;
import java.io.FileInputStream;

class Solution {
	public static void main(String args[]) throws Exception	{
		Scanner sc = new Scanner(new FileInputStream("sample_input.txt"));
		//Scanner sc = new Scanner(System.in);

		int TC;
		int test_case;

		TC = sc.nextInt();        
		for(test_case = 1; test_case <= TC; test_case++) {
			// 이 부분에서 알고리즘 프로그램을 작성하십시오.
			int N = sc.nextInt();
			int K = sc.nextInt();
			int[] score = new int[N];
			
			for(int i=0;i<N;i++)
				score[i] = sc.nextInt();
			Arrays.sort(score);
			
			int index = N-1;
			int result = 0;
			for(int i=0;i<K;i++){
				result += score[index];
				index--;
			}

			// 이 부분에서 정답을 출력하십시오.
			System.out.println("Case #" + test_case);
			System.out.println(result);			
		}
		sc.close();
	}
}
