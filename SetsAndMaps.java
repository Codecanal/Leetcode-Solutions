package DSA.Leetcode;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.TreeSet;

public class SetsAndMaps {
    public static void main(String[] args){

       // ---------- HASH SET ------------
        // Unordered Set
        Set<Integer> set = new HashSet<>();
        //Remove elements
        set.clear();
        System.out.println(set);
        //Adding elements in the set
        set.add(1);
        set.add(2);
        set.add(1);
        System.out.println(set);
        //Check if an element is present
        System.out.println(set.contains(2));
        //Check if set is Empty
        System.out.println(set.isEmpty());
        //Check size
        System.out.println(set.size());

        // ----------- TREE SET ------------

        TreeSet<Integer> treeset = new TreeSet<>();
        treeset.add(21);
        treeset.add(13);
        treeset.add(32);
        System.out.println(treeset);

        // ----------- LINKED HASH SET ---------
        LinkedHashSet<Integer> linkedhset = new LinkedHashSet<>();
        linkedhset.add(21);
        linkedhset.add(13);
        linkedhset.add(32);
        System.out.println(linkedhset);
    }

}
