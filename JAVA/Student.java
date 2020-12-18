import java.util.Scanner;

class Student {

    int sub1, sub2, sub3;

    Student(int sub1, int sub2, int sub3) {
        this.sub1 = sub1;
        this.sub2 = sub2;
        this.sub3 = sub3;
    }

    public int getTotalMarks() {
        return sub1 + sub2 + sub3;
    }

    public double getPercentage() {
        int total = getTotalMarks();
        return (total * 100) / 300;
    }

    public static void main(String[] args)
    {

            Scanner sc = new Scanner(System.in);
            System.out.println("Enter the number of students");
            int number = sc.nextInt();
            Student[] arr = new Student[number];
            for(int i=0; i<number; i++)
            {
            System.out.println("Enter the marks in the subjects of student"+i);

            int sub1 = sc.nextInt();
            int sub2 = sc.nextInt();
            int sub3 = sc.nextInt();
            arr[i] = new Student(sub1, sub2, sub3);
            }
            for(int i=0; i<number; i++)
            {
                System.out.println("The total marks of student" + i + "is:" +arr[i].getTotalMarks()+ " and his percentange is "+ arr[i].getPercentage() );

            }

            sc.close();
    }
}

