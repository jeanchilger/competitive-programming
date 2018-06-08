import java.util.Scanner;

class Main2424 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int x = input.nextInt();
        int y = input.nextInt();

        if (x >= 0 && x <= 432) {
            if (y >= 0 && y <= 468) {
                System.out.println("dentro");

            } else {
                System.out.println("fora");
            }

        } else {
            System.out.println("fora");
        }
    }
}
