import java.util.Scanner;

class Main2408 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();

        if (a > b && b > c || c > b && b > a) {
            System.out.println(b);

        } else if (a > c && c > b || b > c && c > a) {
            System.out.println(c);

        } else if (c > a && a > b || b > a && a > c) {
            System.out.println(a);

        }
    }
}
