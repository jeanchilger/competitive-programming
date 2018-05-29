import java.util.Scanner;

class Main2454 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int p = input.nextInt();
        int r = input.nextInt();


        if (p == 1) {
            if (r == 1) {
                System.out.println("A");

            } else {
                System.out.println("B");
            }

        } else {
            System.out.println("C");
        }

    }
}
