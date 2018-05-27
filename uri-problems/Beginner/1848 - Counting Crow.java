import java.util.Scanner;

class Main1848 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int screamCount = 0;
        int lotteryNumber = 0;
        String eyes = "";

        while (screamCount < 3) {
            while (true) {
                eyes = input.nextLine();
                if (eyes.equals("caw caw")) break;
                for (int i = 3; i > 0; i--) {
                    if (eyes.charAt(3-i) == '*') {
                        lotteryNumber += Math.pow(2, i-1);
                    }
                }
            }
            System.out.println(lotteryNumber);
            lotteryNumber = 0;
            screamCount++;
        }
    }
}
