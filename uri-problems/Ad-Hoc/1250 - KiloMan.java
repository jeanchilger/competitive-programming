import java.util.Scanner;

class Main1250 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int hit, s;
        for (int i = 0; i < n; i++) {
            hit = 0;
            s = input.nextInt();
            int[] shots = new int[s];

            for (int j = 0; j < s; j++) {
                shots[j] = input.nextInt();
            }

            input.nextLine();
            String act = input.nextLine();

            for (int j = 0; j < s; j++) {
                if ((shots[j] <= 2 && act.charAt(j) == 'S') || (shots[j] > 2 && act.charAt(j) == 'J')) {
                    hit++;
                }
            }
            System.out.println(hit);

        }
    }
}
