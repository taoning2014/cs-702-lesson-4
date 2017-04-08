public class Student {
  private String ID;
  private String firstName;
  private String lastName;
  private int age;
  private double gpa;

  public Student (String myID, String myFirstName, String myLastName, int myAge, double myGpa) {
    ID = myID;
    firstName = myFirstName;
    lastName = myLastName;
    age = myAge;
    gpa = myGpa;
  }

  public void printName() {
    System.out.println("First Name is: " + firstName);
    System.out.println("Last Name is: " + lastName);
  }

  public void printGPA() {
    System.out.println("My GPA is: " + gpa);
  }
}
