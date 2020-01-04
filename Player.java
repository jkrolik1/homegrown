public abstract class Player {

    String name="Anonim";

    public Player(String name){ setName(name); }

    public void setName(String name) {
        if((name.matches("^[a-zA-Z0-9]{3,}$"))&&(name!=null)) this.name = name;
        else throw new IllegalArgumentException("Nieprawidlowe imie!");
    }
    public String getName() {
        return name;
    }
    public abstract char caseOfPlay();
}
