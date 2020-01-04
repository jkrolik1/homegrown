import java.util.Random;

public class Hangman {

    public static void main(String[] args) {

        Game game = new Game();
        game.addPlayer(new AutoPlayer("Piotr"));
        game.addPlayer(new AutoPlayer("Jan"));
        game.addPlayer(new AutoPlayer("Jan"));
        game.printPlayers();
        game.play();

    }
}
