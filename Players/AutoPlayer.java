package Players;

import java.util.Random;

public class AutoPlayer extends Player {

    private Random rand = new Random();

    public AutoPlayer(String name) {
        super(name);
    }
    @Override
    public char caseOfPlay() {
        return (char)(rand.nextInt(('z'-'a')+1)+'a');
    }
}
