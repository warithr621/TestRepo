import java.util.*;

class missNum {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		ArrayList<Integer> input = new ArrayList<Integer>();
		for (int i = 1; i <= sc.nextInt(); i++) {
			input.add(i);
		}
		String[] thing = (sc.nextLine()).split(" ");
		for (int i = 0; i < input.size() - 1; i++) {
			input.remove(new Integer(thing[i]));
		}
		System.out.println(input.get(0));
	}
}