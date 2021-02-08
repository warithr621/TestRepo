import java.util.*;

class a {
	public static void main(String[] args) throws NumberFormatException {
		Scanner sc = new Scanner(System.in);
		int range = sc.nextInt();
		String[] values = (sc.nextLine()).split(" ");
		ArrayList<Integer> valInt = new ArrayList<Integer>();
		for (String i : values) {
			valInt.add(Integer.parseInt(i));
		}

		for(int i = 1; i <= range; i++) {
                        if(i!=valInt.get(i-1)) {
                        	System.out.println(valInt.get(i-1));
				break;
			}	
                }
	}
}