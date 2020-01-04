package WordStats;

import java.util.HashMap;
import java.util.Map;

public class WinStatsWords implements StatsWords {
    Map<String,Integer> statsOfWords = new HashMap();
    public void addWord(String word){
        int quantity = statsOfWords.getOrDefault(word,0);
        quantity+=1;
        statsOfWords.put(word,quantity);
    };
    public void printWords(){
        System.out.println("\nStatystyki słów:");
        for(String word : statsOfWords.keySet())
            System.out.print(word+" "+statsOfWords.get(word)+"  ");
    };
    public void clearWords(){
        statsOfWords.clear();
    };
}
