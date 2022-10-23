package Array_List;
import java.util.ArrayList;
import java.util.Collections; // import this for using sort function
import java.util.Iterator;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner scan = new Scanner(System.in);
        ArrayList<Integer> ar = new ArrayList<Integer>();
        ArrayList<Integer> ar2 = new ArrayList<Integer>();
        ArrayList<Integer> ar3 = new ArrayList<Integer>();

        System.out.println("Size of Array: " + ar.size());

        // add value in the ar ArrayList
        for (int i = 1; i <= 10; i++) {
            ar.add(i); // INSERT VALUE IN THE ARRAYLIST
        }

        // add value in the ar2 ArrayList
        ar2.add(100);
        ar2.add(-52);
        ar2.add(89);
        ar2.add(125);
        ar2.add(98);
        ar2.add(-897);
        ar2.add(6, 101); // 5 no index a 100 insert korlam

        // add value in the ar ArrayList
        ar3.addAll(ar); // ar er sokol value ar3 er moddhe cpy korlam

        System.out.print("Printing the value of ar using simple way: ");
        System.out.println(ar); /// simple way to print value of ARRAYLIST

        System.out.println("Size of Array after insertion: " + ar.size());

        /// For each loop OR Iterator diyeo ARRAYLIST er value print kora jai

        /// PRINTING ARRAYLIST USING FOR EACH LOOP
        System.out.print("Printing the value of ar2 using FOR EACH LOOP: ");
        for (int x : ar2) {
            System.out.print(x + " ");
        }

        /// PRINTING ARRAYLIST USING ITERATOR
        System.out.print("\nPrinting the value of ar3 using ITERATOR: ");
        Iterator itr = ar3.iterator();
        while (itr.hasNext()) {
            System.out.print(itr.next() + " ");
        }

        /// usase of equals() function
        boolean result = ar3.equals(ar);
        System.out.println("ar == ar3 : " + result);

        /// sorting ArrayList
        Collections.sort(ar2);/// sort data in ascending order
        System.out.print("Printing the value of ar2 in ascending order: ");
        System.out.println(ar2); /// simple way to print value of ARRAYLIST

        Collections.sort(ar2, Collections.reverseOrder()); // sort data in descending order
        System.out.print("Printing the value of ar2 in descending order: ");
        System.out.println(ar2); /// simple way to print value of ARRAYLIST

        /// UASASE OF CONTAINS FUNCTION
        boolean c = ar.contains(100); // ar namok arraylist er moddhe 10 ase kina check kora
        if (c) {
            int ind = ar.indexOf(100);
            System.out.println("\n100 is Available in index " + ind);
        } else {
            System.out.println("100 is Not Available in ar");
        }

        /// USASAE OF SET AND GET FUNCTION
        /// SET function use kore value replace kora hoi
        /// get function use kono index er value ber kora hoi

        // ar.set(index, value);
        ar.set(5, 500);
        System.out.println("After reaplace values using set function: " + ar);

        int newvalue = ar.get(5);
        System.out.println("Using get function: " + newvalue);

        /// REVOMING VALUE FROM ARRAYLIST
        ar.remove(5); /// 5 hocche index number. ARRAYLIST er 5 index er value remove korchi
        System.out.print("\nPrinting the value of ARRAYLIST after remove value: ");
        System.out.println(ar); /// simple way to print value of ARRAYLIST

        ar.removeAll(ar); // ARRAYLIST er sokol value remove kore dilam

        ar.clear(); /// Ei function use koreo ARRAYLIST er value delete kora jai
        System.out.println("\nAfter removing all value from ARRAYLIST the size of ARRAYLIST is: " + ar.size());

        boolean b = ar.isEmpty();
        System.out.println("ArrayList is Empty..? -- " + b);
        scan.close();
    }
}
