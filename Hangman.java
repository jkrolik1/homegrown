import LetterStats.WinStatsLetters;
import PlayerStats.WinStatsPlayers;
import Players.AutoPlayer;
import WordStats.WinStatsWords;

public class Hangman {

    public static void main(String[] args) {

        Game game = new Game(new WinStatsPlayers(),new WinStatsLetters(),new WinStatsWords());
        game.addPlayer(new AutoPlayer("Piotr"));
        game.addPlayer(new AutoPlayer("Jan"));
        game.addPlayer(new AutoPlayer("Jan"));
        game.printPlayers();
        for(int i=0; i<100; i++)
            game.play();
        game.statsPlayers.printStatsPlayer();
        game.statsLetters.printLetters();
        game.statsWords.printWords();
    }
}
