package codeground_pratice_4;

import java.util.Scanner;
import java.io.FileInputStream;

class Solution {
	static int[] section1 = {6,13,4,18,1,20};
	static int[] section2 = {11,14,9,12,5,20};
	static int[] section3 = {11,8,16,7,19,3};
	static int[] section4 = {6,10,15,2,17,3};

	public static void main(String args[]) throws Exception	{
		Scanner sc = new Scanner(new FileInputStream("sample_input.txt"));
		//Scanner sc = new Scanner(System.in);

		int TC;
		int test_case;

		TC = sc.nextInt();        
		for(test_case = 1; test_case <= TC; test_case++) {
			int rad_bull = sc.nextInt();
			int rad_startTri = sc.nextInt();
			int rad_endTri = sc.nextInt();
			int rad_startDou = sc.nextInt();
			int rad_endDou = sc.nextInt();
			
			int N = sc.nextInt();
			int result = 0;
			for(int i=0;i<N;i++) {
				int x = sc.nextInt();
				int y = sc.nextInt();
				int multi = 1;
				
				double rad_point = Math.sqrt((x*x)+(y*y));
				if(rad_point < rad_bull) {
					result += 50;
					continue;
				}
				else if(rad_point > rad_startTri && rad_point < rad_endTri)
					multi = 3;
				else if(rad_point > rad_startDou && rad_point < rad_endDou)
					multi = 2;
				else if(rad_point > rad_endDou)
					continue;
				else
					multi = 1;
				
				double theta = Math.atan(y/(double)x) * (180/Math.PI);
				if (theta < 0) theta *= -1;
				
				int index = 0;
				if(theta < 9) index = 0;
				else if(theta>9 && theta<27) index = 1;
				else if(theta>27 && theta<45) index = 2;
				else if(theta>45 && theta<63) index = 3;
				else if(theta>63 && theta<81) index = 4;
				else if(theta>81 && theta<=90) index = 5;
				
				if(x>=0 && y>=0)
					result += section1[index]*multi;
				else if(x<=0 && y>=0)
					result += section2[index]*multi;
				else if(x<=0 && y<=0)
					result += section3[index]*multi;
				else if(x>=0 && y<=0)
					result += section4[index]*multi;
			}
			System.out.println("Case #" + test_case);
			System.out.println(result);
		}
		sc.close();
	}
}
