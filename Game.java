import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class Game {
    private List<Player> players = new ArrayList();
    private Random rand = new Random();
    private Word word = new Word();

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
        String scoreOfVerifyChose;
        Boolean repeat = true;

        do{
            for(Player player : players){
                playerChose = player.caseOfPlay();
                System.out.println(player.getName()+" wybrał: "+playerChose);
                scoreOfVerifyChose=word.verifyChose(word.findSign(word.choseWord(word.getWords()),playerChose));
                System.out.println("    Czy "+playerChose+" znajduje sie w wlosowanym wyrazie: "+ scoreOfVerifyChose);
                if(scoreOfVerifyChose!="Tak")
                    System.out.println("        Przegrałeś "+player.getName()+"! Jeszcze raz.");
                else{
                    System.out.println("        Brawo "+player.getName()+"! Zdobywasz punkt!!!");
                    repeat=false;
                }
            }
        }while(repeat);
    }
}
