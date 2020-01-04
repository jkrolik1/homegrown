import java.util.Scanner;

public class HumanPlayer extends Player {

    Scanner scanner = new Scanner(System.in);

    public HumanPlayer(String name) {
        super(name);
    }

    @Override
    public char caseOfPlay(){
        char returnChar = scanner.nextLine().charAt(0);
        return returnChar;
    }
}
