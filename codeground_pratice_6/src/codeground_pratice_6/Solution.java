package codeground_pratice_6;

import java.util.Scanner;
import java.io.FileInputStream;

public class Solution {
	public static void main(String[] args) throws Exception
	{
		Scanner sc = new Scanner(new FileInputStream("sample_input.txt"));
		//Scanner sc = new Scanner(System.in);
		
		int test_case = sc.nextInt();
		for(int i=0;i<test_case;i++)
		{
			int N = sc.nextInt();
			int M = sc.nextInt();
			String move = sc.next();
			long result = 1;
			int x = 0;
			int y = 0;
			for(int j=0;j<M;j++)
			{
				char token = move.charAt(j);
				if(token == 'U')
					x--;
				else if(token == 'D')
					x++;
				else if(token == 'L')
					y--;
				else if(token == 'R')
					y++;
				else
				{
					j--;
					continue;
				}
				
				if(x+y < N)
				{
					result += module(x+y+1);
					if((x+y)%2 != 0)
						result -= y;
					else
						result -= x;
				}
				else
				{
					result += (long)N*N - module(2*N-(x+y)-2);
					if((x+y)%2 != 0)
						result -= (N-1)-x;
					else
						result -= (N-1)-y;
				}
			}
			
			System.out.println("Case #"+(i+1));
			System.out.println(result);
		}
		
		sc.close();
	}
	
	public static long module(int num)
	{
		return (num * (num+1)) / 2;
	}
}
