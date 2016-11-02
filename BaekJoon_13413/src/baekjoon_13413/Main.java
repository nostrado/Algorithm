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
        // ���� ���� ����
        int input_difW = 0;
        int output_difW = 0;
         
        // �Է°� ����� ���̸� W�θ� ã�´�. ������ �ϳ��� ���ϸ� B�� �������� �����̴�.
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