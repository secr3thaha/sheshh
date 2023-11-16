public class Lyrics {
    public static void main(String[] args) {
        String[] lyrics = {
            "Ako to si sijey",
            "Miss na kita",
            "*nirestrict na nya ulit akoo potaaaaa!",
            "Labis na Naiinip",
            "Nayayamot Sa bawat saglit",
            "kapag naalala ka",
            "Wala namn akong magawa",
            "Umuwi ka na baby",
            "di na ako sanay ng wala ka",
            "mahirap ang magisa",
            "at sa gabing hinahanap hanap kita",
            "i miss you so muchhhhhh:<"
        };

        int characterDelay = 140; // Delay between characters in milliseconds
        int lineDelay = 2000; // Delay between lines in milliseconds (2 seconds)

        displayLyricsWithDelay(lyrics, characterDelay, lineDelay);

        System.out.println("\nHello, World!");
        System.out.println("<3");
        System.out.println("<3");
        System.out.println("<3");
    }

    private static void displayLyricsWithDelay(String[] lyrics, int characterDelay, int lineDelay) {
        try {
            for (String line : lyrics) {
                clearScreen();
                // Print the new line
                for (char c : line.toCharArray()) {
                    System.out.print(c);
                    Thread.sleep(characterDelay);
                }
                Thread.sleep(lineDelay);
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    private static void clearScreen() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }
}