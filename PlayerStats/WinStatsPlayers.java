package PlayerStats;

import Players.Player;

import java.util.HashMap;
import java.util.Map;

public class WinStatsPlayers implements StatsPlayers {
    Map<Player,Integer> statsOfPlayers = new HashMap();

    public void addPoint(Player player){
        int score = statsOfPlayers.getOrDefault(player,0);
        score += 1;
        statsOfPlayers.put(player,score);
    }
    public void printStatsPlayer(){
        System.out.println("\n"+"Punkty graczy:");
        for(Player player : statsOfPlayers.keySet()) System.out.print(player.getName()+" "+statsOfPlayers.get(player)+"   ");
    }
}