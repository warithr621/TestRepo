package USACO;

import java.util.Scanner;
public class Palindrome {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Enter the String: ");
		Scanner ui = new Scanner(System.in);
		String data = ui.nextLine();

		char[] dataArray = data.toCharArray();

		String putTogether="";
		for(int i=data.length()-1; i>=0; i--){
			putTogether = putTogether + dataArray[i];
			//System.out.println(putTogether);  // breaks it down to letters to make the word
		}
		System.out.println(putTogether);
		//String reversedData = putTogether;
		//if(data.equalsIgnoreCase(reversedData)) {
		//if(data.equals(putTogether)) {
		if(data.equalsIgnoreCase(putTogether)) {
			System.out.println("Palindrome");
		} else
		{
			System.out.println("Not a Palindrome");
		}
	}
}
