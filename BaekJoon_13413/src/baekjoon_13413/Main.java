package baekjoon_13413;

import java.util.Scanner;

public class Main { 
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
         
        int test_case = sc.nextInt();
         
        for(int i=0;i<test_case;i++) {
            int size = sc.nextInt();
            sc.nextLine();
            String input = sc.nextLine();
            String output = sc.nextLine();
             
            System.out.println(getResult(size,input,output));
        }
         
        sc.close();
    }
     
    private static int getResult(int size, String input, String output) {
        // 차이 세는 변수
        int input_difW = 0;
        int output_difW = 0;
         
        // 입력과 결과의 차이를 W로만 찾는다. 어차피 하나만 비교하면 B는 딸려오는 연산이다.
        for(int i=0;i<size;i++) {
            if(input.charAt(i) != output.charAt(i)) {
                if(input.charAt(i) == 'W') {
                    input_difW++;
                }
                if(output.charAt(i) == 'W') {
                    output_difW++;
                }
            }
        }
         
        if(input_difW >= output_difW) {
            return input_difW;
        }
        else {
            return output_difW;
        }
    }
}