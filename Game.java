import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class Game {
    private List<Player> players = new ArrayList();
    private Random rand = new Random();

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

    public static String verifyChose(boolean chose){
        String funScore="";
        if(chose) funScore="Tak";
        else funScore="Nie";
        return funScore;
    }
    public static boolean findSign(String randomWord, char sign){
        boolean funScore=false;
        for(int i=0; i<randomWord.length(); ++i)
            if(sign==randomWord.charAt(i)) funScore=true;
        return funScore;
    }
    public static String choseWord(String words){
        Random rand = new Random();

        int indexOfNonDefault=0;
        String returnString="";
        String[] splitingString = words.toLowerCase().split(" ");
        String chosenWord=splitingString[rand.nextInt(splitingString.length)].toLowerCase();

        if(chosenWord.matches("^[a-ząęćżźłóń]{3,}$"))
            returnString=chosenWord;
        else if(chosenWord.matches("^[a-ząęćżźłóń]{3,}[[:ascii:]]{1,}$")){
            for(int i=0; i<chosenWord.length(); ++i){
                if((chosenWord.charAt(i)<'a')||(chosenWord.charAt(i)>'z')){
                    indexOfNonDefault=(i-=1);
                    for(int j=0; j<indexOfNonDefault; ++j){
                        chosenWord="";
                        chosenWord=chosenWord.concat(chosenWord.charAt(j)+"");
                    }
                }
            }
            returnString=chosenWord+"";
        }
        else{
            for(int i=0; i<chosenWord.length(); ++i)
                if((chosenWord.charAt(i)>'a')&&(chosenWord.charAt(i)<'z'))
                    returnString+=chosenWord.charAt(i);
            if(returnString.length()<=3)
                for(int i=0; i<(rand.nextInt(7)+3); ++i)
                    returnString+=((char)(rand.nextInt('z'-'a')+'a'));
        }

        return returnString;
    }

    public void play(){
        char playerChose;
        String scoreOfVerifyChose;
        Boolean repeat = true;
        String words = "Ostrzeżenia pierwszego stopnia przed silnym wiatrem wydał Instytut Meteorologii i Gospodarki " +
                "Wodnej dla północnych powiatów województw pomorskiego i zachodniopomorskiego. " +
                "Ostrzeżenia przed marznącymi opadami zostały natomiast wydane dla południa Polski. Te pojawią się także " +
                "na Podlasiu i we wschodnich powiatach województwa warmińsko-mazurskiego";

        do{
            for(Player player : players){
                playerChose = player.caseOfPlay();
                System.out.println(player.getName()+" wybrał: "+playerChose);
                scoreOfVerifyChose=verifyChose(findSign(choseWord(words),playerChose));
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
