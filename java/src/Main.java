public class Main {
  public static void main(String[] args) {
    Student s1 = new Student("0001", "tao", "ning", 30, 3.55);
    s1.printName();
    s1.printGPA();

    System.out.println("======= 我是分隔符 =======");

    GraduateStudent g1 = new GraduateStudent("0002", "xiaoming", "wang", 25, 4.0, 5);
    g1.printName();
    g1.printGPA();
    g1.printPapers();
  }
}
