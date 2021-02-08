import java.util.*;
public class fact {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] prime = new int[sc.nextInt()];
		int[] exp = new int[prime.length];
		int taco = 1;
		int num = 1;
		int sum = 1;
		int prod;
		for (int i = 0; i < prime.length; i++) {
			prime[i] = sc.nextInt();
			exp[i] = sc.nextInt();
		}
		for (int i = 0; i < prime.length; i++) {
			taco *= (int) Math.pow(prime[i], exp[i]);
		}

		for (int i = 0; i < prime.length; i++) {
			int count = 0;
			for (int j = 0; j <= exp[i]; j++) {
				count += (int) Math.pow(prime[i], j);
			}
			sum *= count;
		}
	
		for (int i : exp) {
			num *= (i + 1);
		}

		if (num % 2 == 0) {
			prod = (int) Math.pow(taco, num / 2);
		} else {
			int x = (int) Math.ceil(num / 2);
			prod = (int) Math.pow(taco, num/2);
		}
		System.out.printf("%d %d %d", num, sum, prod);
        }
}