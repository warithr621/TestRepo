import java.util.*;

public final class bovine {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int n = sc.nextInt();
			String[] x = sc.nextLine().split(" ");
			TreeSet<Integer> set = new TreeSet<Integer>();
			if (n == 1) {
				System.out.println(0);
			} else {
				for (int j = 0; j < n - 1; j++) {
					for (int k = j + 1; k < n; k++) {
						set.add( Integer.parseInt(x[k]) - Integer.parseInt(x[j]) );
					}
				}
				System.out.println(set.size());
			}
		}		
	}
}