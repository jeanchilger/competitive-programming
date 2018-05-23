import java.util.Scanner;

class Main2166 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        double denominator = 2;
        double num = 0;

        for (int i = n; i > 0; i--) {
            denominator = 2 + num;
            num = 1 / denominator;
        }

        System.out.printf("%.10f\n", (1+num));

    }

}
