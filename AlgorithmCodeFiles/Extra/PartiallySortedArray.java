import java.io.PrintWriter;
import java.util.Arrays;

public class PartiallySortedArray {
    public static void main(String[] args) {
        int [] array = new int[15000];    // Almost sorted Array of 100

        array[0] = (int)(Math.random () * 10) + 1;

        for (int a = 1; a < array.length; a++) {
            array[a] = array[a-1] + (int)(Math.random() * 12) - 2;
        }
        try
        {
            PrintWriter pr = new PrintWriter("file");

            for (int j : array) {
                pr.println(j);
            }
            pr.close();
        }
        catch (Exception e)
        {
            e.printStackTrace();
            System.out.println("No such file exists.");
        }
        System.out.println(Arrays.toString(array));
    }
}




