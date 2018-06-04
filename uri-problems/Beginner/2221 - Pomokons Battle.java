import java.util.Scanner;

class Main2221 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        double dab;
        double gua;
        int dl, gl;

        for (int i = 0; i < t; i++) {
            dab = 0;
            gua = 0;
            int bonus = input.nextInt();
            for (int x = 0; x < 2; x++) {
                dab += input.nextInt();
            }
            dl = input.nextInt();
            dab /= 2;
            if (dl % 2 == 0) {
                dab += bonus;
            }

            for (int x = 0; x < 2; x++) {
                gua += input.nextInt();
            }
            gl = input.nextInt();
            gua /= 2;
            if (gl % 2 == 0) {
                gua += bonus;
            }

            if (dab > gua) {
                System.out.println("Dabriel");

            } else if (gua > dab) {
                System.out.println("Guarte");

            } else {
                System.out.println("Empate");
            }

        }

    }
}
