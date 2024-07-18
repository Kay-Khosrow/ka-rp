// in the name of ALLAH
//
// Licence: GPL-3.0
//
class Web {
    public static void main (String[] args){
    String appName = "AppName";
    boolean isRunning = false;

    System.out.println("Is running : " + isRunning + " " + appName+ "\n\n");
    App nApp = new App();
    System.out.println("\n"+nApp);
    }
}

class App {
  String main() {
     return "Loading App";
  }
}
