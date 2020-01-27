import java.util.Scanner;
import java.util.Arrays;

class Main {
  public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[] H = new int[N];
        for(int i = 0; i < N; i++) {
          H[i] = sc.nextInt();
          //System.out.println(H[i]);
        }
        Arrays.sort(H);
      
        for(int i = 0; i < K; i++) {  
          H[N-1-i] = 0;  
        }
      
        int count = 0;
        for(int i = 0; i < N; i++) {
          count += H[i];  
        }
        System.out.println(count);
    }
}