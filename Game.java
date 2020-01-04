import LetterStats.NullStatsLetters;
import LetterStats.StatsLetters;
import LetterStats.WinStatsLetters;
import PlayerStats.NullStatsPlayers;
import PlayerStats.StatsPlayers;
import PlayerStats.WinStatsPlayers;
import Players.Player;
import WordStats.NullStatsWords;
import WordStats.StatsWords;
import WordStats.WinStatsWords;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class Game {
    private List<Player> players = new ArrayList();
    private Random rand = new Random();
    private Word word = new Word();
    public StatsPlayers statsPlayers = new NullStatsPlayers();
    public StatsLetters statsLetters = new NullStatsLetters();
    public StatsWords statsWords = new NullStatsWords();


    public Game(WinStatsPlayers winStatsPlayers, WinStatsLetters winStatsLetters, WinStatsWords winStatsWords) {
        this.statsLetters = new WinStatsLetters();
        this.statsPlayers = new WinStatsPlayers();
        this.statsWords = new WinStatsWords();
    }
    public Game(WinStatsPlayers winStatsPlayers) {
        this.statsPlayers = new WinStatsPlayers();
    }
    public Game(WinStatsLetters winStatsLetters) {
        this.statsLetters = new WinStatsLetters();
    }
    public Game(WinStatsWords winStatsWords) {
        this.statsWords = new WinStatsWords();
    }
    public Game() {}

    public void addPlayer(Player player){
        if(nameExists(player.getName())) {
            player.setName(player.getName().concat((rand.nextInt(9)+1)+""));
            addPlayer(player);
        }else{
            players.add(player);
        }

    }
    public boolean nameExists(String name){
        boolean funScore=false;
        for(Player player2 : players)
            if(player2.getName().equals(name)) funScore=true;
        return funScore;
    }
    public void printPlayers(){
        for(Player player3 : players){
            System.out.print(player3.getName()+" ");
        }
        System.out.println("");
    }
    public void play(){
        char playerChose;
        String wordChose;
        String scoreOfVerifyChose;
        Boolean repeat = true;

        do{
            for(Player player : players){
                playerChose = player.caseOfPlay();
                statsLetters.addLetter(playerChose);

                System.out.print(player.getName()+" wybrał: "+playerChose);

                wordChose=word.choseWord(word.getWords());
                statsWords.addWord(wordChose);
                scoreOfVerifyChose=word.verifyChose(word.findSign(wordChose,playerChose));

                System.out.print("      Czy "+playerChose+" znajduje sie w wlosowanym wyrazie: "+ scoreOfVerifyChose);

                if(scoreOfVerifyChose!="Tak")
                    System.out.println("        Przegrałeś "+player.getName()+"! Jeszcze raz.");
                else{
                    System.out.println("        Brawo "+player.getName()+"! Zdobywasz punkt!!!");
                    repeat=false;
                    statsPlayers.addPoint(player);
                }
            }
            System.out.println("-------------------------------------------------------------------------------------");
        }while(repeat);
    }
}
