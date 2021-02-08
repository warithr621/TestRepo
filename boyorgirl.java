import java.util.*;

public final class boyorgirl {
	public static void main(String[] args) {
		TreeSet<Character> letters = new TreeSet<Character>();
		Scanner sc = new Scanner(System.in);
		char[] thing = (sc.nextLine()).toCharArray();
		for (char i : thing) {
			letters.add(i);
		}
		if (letters.size() % 2 == 0) {
			System.out.println("CHAT WITH HER!");
		} else {
			System.out.println("IGNORE HIM!");
		}
	}
}