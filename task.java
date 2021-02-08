import java.util.*;

public final class task {
	public static boolean isVowel(char c) {
		char[] vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
		boolean bool = false;
		for (char i : vowels) {
			if (i == c) {
				bool = true;
			}
		}
		return bool;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		char[] input = sc.nextLine().toLowerCase().toCharArray();
		for (char i : input) {
			if (isVowel(i) == false) {
				System.out.print("." + i);
			}
		}
		System.out.print("\n");
	}
}