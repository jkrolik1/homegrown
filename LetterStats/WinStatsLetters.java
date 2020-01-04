package LetterStats;

import Players.Player;

import java.util.HashMap;
import java.util.Map;

public class WinStatsLetters implements StatsLetters{
    Map<Character, Integer> statsOfLetters = new HashMap();

    public void addLetter(char sign){
        int quantity = statsOfLetters.getOrDefault(sign,0);
        quantity+=1;
        statsOfLetters.put(sign,quantity);
    };
    public void printLetters(){
        System.out.println("\n"+"Statystyki liter:");
        for(Character sign : statsOfLetters.keySet())
            System.out.print(sign+" "+statsOfLetters.get(sign)+"   ");
    };
    public void clearLetters(){statsOfLetters.clear();};
}
