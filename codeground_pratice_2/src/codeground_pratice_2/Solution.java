package codeground_pratice_2;

import java.util.Scanner;
import java.io.FileInputStream;
import java.util.Arrays;
 
class Solution {
	public static void main(String args[]) throws Exception	{
		Scanner sc = new Scanner(new FileInputStream("sample_input.txt"));     
		//Scanner sc = new Scanner(System.in);

		int TC;
		int test_case;

		TC = sc.nextInt();        
		for(test_case = 1; test_case <= TC; test_case++) {
			// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�.
			int count = sc.nextInt();
			int[] candidate = new int[count];
			
			for(int i=0;i<count;i++)
				candidate[i] = sc.nextInt();
			Arrays.sort(candidate);
			
			int max = 0;
			int temp = count;
			for(int i=0;i<count;i++)
			{
				if(candidate[i]+temp > max)
					max = candidate[i]+temp;
				temp--;
			}
			
			int result = 0;
			for(int i=0;i<count;i++)
				if(max <= candidate[i]+count)
					result++;              

			// �� �κп��� ������ ����Ͻʽÿ�.
			System.out.println("Case #" + test_case);
			System.out.println(result);
		}
		sc.close();
	}
}
