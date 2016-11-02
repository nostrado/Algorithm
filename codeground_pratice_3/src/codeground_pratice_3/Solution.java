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
			// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�.
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

			// �� �κп��� ������ ����Ͻʽÿ�.
			System.out.println("Case #" + test_case);
			System.out.println(result);			
		}
		sc.close();
	}
}
