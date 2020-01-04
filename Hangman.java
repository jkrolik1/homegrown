import java.util.Random;

public class Hangman {
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

    public static void main(String[] args) {
        Random rand = new Random();

        char playerChose;
        String scoreOfVerifyChose;

        String words = "Ostrzeżenia pierwszego stopnia przed silnym wiatrem wydał Instytut Meteorologii i Gospodarki " +
                "Wodnej dla północnych powiatów województw pomorskiego i zachodniopomorskiego. " +
                "Ostrzeżenia przed marznącymi opadami zostały natomiast wydane dla południa Polski. Te pojawią się także " +
                "na Podlasiu i we wschodnich powiatach województwa warmińsko-mazurskiego";

        do{
            playerChose = (char)(rand.nextInt('z'-'a')+'a');
            System.out.println("Gracz wybrał: "+playerChose);
            scoreOfVerifyChose=verifyChose(findSign(choseWord(words),playerChose));
            System.out.println("    Czy "+playerChose+" znajduje sie w wlosowanym wyrazie: "+ scoreOfVerifyChose);
            if(scoreOfVerifyChose!="Tak")
                System.out.println("        Przegrałeś! Jeszcze raz.");
            else
                System.out.println("        Brawo! Zdobywasz punkt!!!");

        }while(scoreOfVerifyChose!="Tak");




    }
}
