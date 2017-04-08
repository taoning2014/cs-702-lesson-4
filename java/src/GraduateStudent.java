public class GraduateStudent extends Student{
  private int papers;

  public GraduateStudent(String myID, String myFirstName, String myLastName, int myAge, double myGpa, int myPapers) {
    super(myID, myFirstName, myLastName, myAge, myGpa);
    papers = myPapers;
  }

  public void printPapers() {
    System.out.println("My publish papers is: " + papers);
  }
}
