import java.util.Scanner;

class Main1192 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String sequence;

        input.nextLine();
        for (int i = 0; i < n; i++) {
            sequence = input.nextLine();

            if (sequence.charAt(0) == sequence.charAt(2)) {
                System.out.println((sequence.charAt(0) - '0') * (sequence.charAt(2) - '0'));

            } else if (sequence.charAt(1) >= 'a' && sequence.charAt(1) <= 'z') {
                System.out.println((sequence.charAt(0) - '0') + (sequence.charAt(2) - '0'));

            } else if (sequence.charAt(1) >= 'A' && sequence.charAt(1) <= 'Z') {
                System.out.println((sequence.charAt(2) - '0') - (sequence.charAt(0) - '0'));
            }
        }

    }
}
