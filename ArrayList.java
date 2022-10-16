package ArrayList;

import java.util.ArrayList;
import java.util.List;
import java.util.LinkedList;

public class IntroductionArrayLists {

	public static void main(String[] args) {
		//List <String> Fruits = new ArrayList();//INTERFACE
//		List <String> Fruits = new LinkedList<>();
//		List <String> Vegetables = new ArrayList<>();
//		
//		
//		ArrayList <String> fruits = new ArrayList<>();
//		fruits.add("Mango");
//		fruits.add("Apple");
//		Vegetables.add("Potato");
//		Vegetables.add("Tomato");
//		
//		fruits.addAll(Vegetables);
		//fruits.removeAll(Vegetables);
//		System.out.println(fruits.get(1));
		//System.out.println(fruits);
		
//		String temp[] = new String[fruits.size()];
//		fruits.toArray(temp);
//		for(String e:temp) {
//			System.out.println(e);
//		}
		//Pair<String,Integer> p1 =new Pair("Wilson",100);
		//Pair<Boolean,String> p2 = new Pair(true,"Hello");
		//p1.getDescription();
		//p2.getDescription();
		ArrayList fruits = new ArrayList<>();
		fruits.add("Guava");
		fruits.add(56);
		fruits.add("Mango");
		System.out.println();
		List<Integer> A = new ArrayList<>();
		List<Integer> Q = new ArrayList<>();
		A.add(1);
		A.add(5);
		A.add(6);
		A.add(8);
		Q.add(4);
		Q.add(3);
		int a = Q.get(0);
		
		///A.set(Q[0],Q[1]);
		System.out.println(a);
	}

	private static char[] indexOf(String string) {
		// TODO Auto-generated method stub
		return null;
	}

}
