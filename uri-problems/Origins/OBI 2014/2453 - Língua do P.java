import java.util.Scanner;

class Main2453 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        String line = input.nextLine();
        String res = "";
        boolean p = false;

        for (int i = 0; i < line.length(); i++) {
            if (line.charAt(i) == ' ') {
                res = res.concat(" ");
                p = true;
            } else {
                if (p) {
                    res = res.concat(Character.toString(line.charAt(i)));
                }
            }
            p = !p;
        }
        System.out.println(res);
    }
}
