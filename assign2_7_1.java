import java.util.*;

/* Take a String input that contains multiple words. Do the following: i) number of times ‘a’, ‘an’, ‘the’
appears ii) number of times “and”, “or” appears iii) whether it starts with “The” or not iv) put the String
into an array of characters v) display the tokens in the String (tokens are the substrings separated by
space or @ or .) */
class  FindWords{
	public static void main(String[] args){
		Scanner myScanner = new Scanner(System.in);
		System.out.println("Enter the string : ");
		String phrase;
		phrase = myScanner.nextLine();
		
		int countA=0,countAn=0,countThe=0,countAnd=0,countOr=0;
		String[] wordArray = phrase.split(" ");
		for(String s : wordArray){
			if(s.equals("the") || s.equals("The")) countThe++;
			if(s.equals("a") || s.equals("A")) countA++;
			if (s.equals("an") || s.equals("An")) countAn++;
			if(s.equals("or")) countOr++;
			if(s.equals("and") || s.equals("And")) countAnd++;
		}
		System.out.println("No of :\n1.a = "+countA+"\nan = "+countAn+"\nthe = "+countThe + "\nand = "+countThe +"\nor = "+countOr);
		System.out.println((phrase.substring(0,3).equals("The")) ? "The phrase starts with The " : "The phrase does not start with The ");
		
		char[] arr = new char[phrase.length()]; // 
	        for (int i = 0; i < phrase.length(); i++) { 
	            arr[i] = phrase.charAt(i); 
	        }
	        System.out.print("The characters in the string are: "); 
	        for (int i = 0; i < phrase.length(); i++) { 
	            System.out.print("'" + arr[i] + "'" + " "); 
		}
		System.out.println();
		String[] arrOfStr = phrase.split("[ ,@]+");
		for (String a : arrOfStr)
            System.out.println(a)
	;}
}				

