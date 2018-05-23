import java.util.Scanner;

class Main2164 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        double sqrt5 = Math.sqrt(5);
        double p1 = Math.pow(((1 + sqrt5) / 2), n);
        double p2 = Math.pow(((1 - sqrt5) / 2), n);

        System.out.printf("%.1f\n", (p1 - p2) / sqrt5);

    }


}
