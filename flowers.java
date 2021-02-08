package USACO;

import java.util.*;
import java.io.*;

class flowers{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int flowerCount = sc.nextInt();
		String indivFlowers = sc.nextLine();
		String[] petalNumber = indivFlowers.split(" ");
		int avg = 0;
		int avgFlower = 0;
		for (int i = 1; i < petalNumber.length - 1; i++) {
			for (int j = 0; j < petalNumber.length - 1 - i; j++) {
				for (int k = j; k < j + 1 + i; k++) {
					avg += Integer.parseInt(petalNumber[k]);
				}
				avg = (int) (avg / (i + 1));
				for (int t = j; t < j + 1 + i; t++) {
					if (Integer.parseInt(petalNumber[t]) == avg) {
						avgFlower++;
						break;
					}
				}
			}
		}
		System.out.println(avgFlower);

	}
}