import java.util.Scanner;

class Main2167 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int lastR = 0;
        int ri;
        boolean fall = false;

        for (int i = 1; i <= n; i++) {
            ri = input.nextInt();
            if (i != 0) {
                if (ri < lastR) {
                    System.out.println(i);
                    fall = true;
                    break;
                }
            }
            lastR = ri;
        }

        if (!fall) {
            System.out.println(0);
        }

    }
}
