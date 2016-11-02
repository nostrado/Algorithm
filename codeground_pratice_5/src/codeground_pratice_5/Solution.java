package codeground_pratice_5;

import java.io.FileInputStream;
import java.util.Scanner;

public class Solution {

	private static long[] arry;
	private static int max_size = 2000003;
	private static int div = 1000000007;
	
	public static void main(String[] args) throws Exception
	{
		Scanner sc = new Scanner(new FileInputStream("sample_input.txt"));
		//Scanner sc = new Scanner(System.in);
		arry = new long[max_size];
		pre_factorial();
		
		int test_case = sc.nextInt();
		for(int i=1;i<=test_case;i++)
		{
			int N = sc.nextInt();
			int M = sc.nextInt();
			
			long mmi = find_mmi(arry[N+1]*arry[M+1]%div);
			long result = (arry[N+M+2] * mmi -1) % div;
			
			System.out.println("Case #"+i);
			System.out.println(result);
			
		}
		
		sc.close();
	}
	
	public static void pre_factorial()
	{
		arry[0] = 1;
		for(int i=1;i<max_size;i++)
		{
			arry[i] = (i * arry[i-1]) % div;
		}
	}
	
	public static long find_mmi(long num)
	{
		return power(num,div-2);
	}
	
	public static long power(long b, int n)
	{
		if(n == 0)
			return 1;
		else if(n == 1)
			return b;
		
		long half = power(b,n/2);
		if(n % 2 == 0)
			return half * half % div;
		else
			return (((half * half) % div) * b) % div;
	}
}
