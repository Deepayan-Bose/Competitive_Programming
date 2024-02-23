import java.util.*;

class Student{
    int roll;
    double score;
    String name;
    Student(){}
    Student(String name){
        this.name = String.valueOf(name);
        this.score=0;
        this.roll=(int)(100*Math.random());
    }
    public void displayStudentDetails(){
        System.out.print("Name : "+name+"\nRoll : "+roll+"\nScore : "+score+"\n");
    }
    public void setScore(double score){
        
            if(score<0 || score>100) throw new IllegalArgumentException("Score must be between 0 and 100");
            else{
                this.score=score;
            }
        
        
    }
    public void setName(String name){
        this.name = String.valueOf(name);
    }
    public void evaluateStudent(){
        System.out.println((score<40)? "The student has failed":"The student has passed");
    }
    
}

class School{
    public static void main(String[] args){
        Student student ;
        String name;
        int score;
        Scanner myObj = new Scanner(System.in);
        System.out.println("Enter the student name : ");
        name = myObj.nextLine();
        student = new Student(name);
        while(true){
            System.out.print("What would you like to do\n1.Change name\n2.Update score\n3.Evaluate the student\n4.Display the students details\n5.Exit\n");
            int option;
            option = myObj.nextInt();
            if(option==5) break;
            switch(option){
                case 1:
                    myObj.nextLine();
                    System.out.println("Enter the name : ");
                    name = myObj.nextLine();
                    student.setName(name);
                    break;
                case 2:
                    try{
                        System.out.println("Enter the score : ");
                        score = myObj.nextInt();
                        student.setScore(score);
                    }
                    catch(IllegalArgumentException abc){
                        System.out.println(abc);
                        break;
                    }
                    break;
                case 3:
                    student.evaluateStudent();
                    break;
                case 4:
                    student.displayStudentDetails();
                    break;
                default:
                    break;
            }
        }
    }
}