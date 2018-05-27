import java.util.Scanner;

class Main2165 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        String t = input.nextLine();

        if (t.length() <= 140) {
            System.out.println("TWEET");
        } else {
            System.out.println("MUTE");
        }

    }


}
