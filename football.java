import java.util.*;

public final class football {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String nums = sc.nextLine();
		String[] elements = new String[nums.length()];
		for (int i = 0; i < nums.length(); i++) {
			elements[i] = Integer.parseInt( (nums.toCharArray())[i] );
		}
		
	}
}