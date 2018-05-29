import java.util.Scanner;

class Main2457 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        String letter = input.nextLine();
        String phrase = input.nextLine();

        int ocur = 0;
        int total = 0;

        for (String word : phrase.split("\\ ")) {
            if (word.contains(letter)) {
                ocur++;
            }

            total++;
        }

        System.out.printf("%.1f\n", (float)ocur*100.0/total);

    }
}
