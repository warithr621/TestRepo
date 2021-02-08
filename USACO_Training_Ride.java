package USACO;
import java.io.*;
import java.util.*;
public class USACO_Training_Ride {

	public static void main(String[] args) throws IOException {
		BufferedReader f = new BufferedReader(new FileReader("ride.in"));
	    PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("ride.out")));
	    StringTokenizer st = new StringTokenizer(f.readLine());
	    String i1 = st.nextToken();
	    String i2 = st.nextToken();
	    char cometLetter = 'A';
	    char groupLetter = 'A';
	    int cometValue = 1;
	    int groupValue = 1;
	    for (int i = 0; i < i1.length(); i++) {
	        cometLetter = i1.charAt(i);
	        cometValue *= (cometLetter - 'A' + 1);
	    }
	    for (int i = 0; i < i2.length(); i++) {
	        groupLetter = i2.charAt(i);
	        groupValue *= (groupLetter - 'A' + 1);
	    }
	    if ((cometValue % 47) == (groupValue % 47)) {
	        out.println("GO");
	    } else {
	        out.println("STAY");
	    }

	}

}
