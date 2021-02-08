import java.io.*;
import java.util.*;

public final class maxdist {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken()); long ans = 0;
		StringTokenizer ST = new StringTokenizer(br.readLine());
		ArrayList<Integer> x = new ArrayList<Integer>(); ArrayList<Integer> y = new ArrayList<Integer>();
		for (int i = 0; i < N; i++) {
			x.add( Integer.parseInt(ST.nextToken()) );
		}
		ST = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; i++) {
			y.add( Integer.parseInt(ST.nextToken()) );
		}
		
		for (int i = 0; i < N-1; i++) {
			for (int j = i+1; j < N; j++) {
				if ( (x.get(j) - x.get(i))*(x.get(j) - x.get(i)) + (y.get(j) - y.get(i))*(y.get(j) - y.get(i)) > ans) {
					ans = (x.get(j) - x.get(i))*(x.get(j) - x.get(i)) + (y.get(j) - y.get(i))*(y.get(j) - y.get(i));
				}
			}
		}	
		System.out.print(ans);
	}
}