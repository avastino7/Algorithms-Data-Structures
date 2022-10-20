import java.util.Scanner;  
public class ReverseString   
{  
public static void main(String[] args)   
{  
String st;  
System.out.println("Enter a string: ");  
Scanner scan = new Scanner(System.in);  
st = scan.nextLine();  
scan.close();                 
String reversed = reverseString(st);  
System.out.println("The reversed string is: " + reversed);  
}  
public static String reverseString(String s)  
{  
if (s.isEmpty())            
return s;  
return reverseString(s.substring(1)) + s.charAt(0);                   
}  
}  
