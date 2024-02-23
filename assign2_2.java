import java.util.*;

class Person{
    String name;
    class Address{
        int premiseNumber;
        String street;
        String city;
        String pin;
        String state;

        Address(int premiseNumber,String street,String city,String pin,String state){
            this.premiseNumber = premiseNumber;
            this.street = String.valueOf(street);
            this.city = String.valueOf(city);
            this.pin = String.valueOf(pin);
            this.state = String.valueOf(state);
        }
        public void setPremiseNumber(int premiseNumber){
            this.premiseNumber=premiseNumber;
        }
        public void setStreet(String street){
            this.street = String.valueOf(street);
        }
        public void setCity(String city){
            this.city = String.valueOf(city);
        }
        public void setPin(String pin){
            this.pin = String.valueOf(pin);
        }
        public void setState(String state){
            this.state = String.valueOf(state);
        }

        public void displayAttributes(){
            System.out.print("Premise Number : "+premiseNumber+"\nStreet : "+street+"\nCity : "+city+"\nPin : "+pin+"\nState : "+state +"\n");
        }

    }
    Address address;
    String phoneNumber;
    String email;
    Person(){}
    Person(String name, int premiseNumber, String street, String city, String pin, String state, String phoneNumber, String email){
        this.name = String.valueOf(name);
        this.address = new Address(premiseNumber,street,city,pin,state);
        this.phoneNumber = String.valueOf(phoneNumber);
        this.email = String.valueOf(email);
    }
    public void displayAttributes(){
        System.out.print("Name : "+name +"\n");
        address.displayAttributes();
        System.out.print("Phone Number : "+ phoneNumber +"\nEmail : "+email+"\n");
    }
    public void setName(String name){
        this.name = String.valueOf(name);
    }
    public void setPhoneNumber(String phoneNumber){
        this.phoneNumber = String.valueOf(phoneNumber);
    }
    public void setEmail(String email){
        this.email = String.valueOf(email);
    }
    public void setAddress(String value,int option){
        switch(option){
            case 1:
                address.setPremiseNumber(Integer.valueOf(value));
                break;
            case 2:
                address.setStreet(value);
                break;
            case 3:
                address.setCity(value);
                break;
            case 4:
                address.setPin(value);
                break;
            case 5:
                address.setState(value);
                break;
            default:
                break;
        }
    }
}

class Student extends Person{
    int rollNumber;
    String courseOfStudy;
    Student(){super();}
    Student(String name, int premiseNumber, String street, String city, String pin, String state, String phoneNumber, String email,int rollNumber,String courseOfStudy){
        super(name,premiseNumber,street,city,pin,state,phoneNumber,email);
        this.rollNumber = rollNumber;
        this.courseOfStudy = String.valueOf(courseOfStudy);
    }
    public void setRollNumber(int rollNumber){
        this.rollNumber=rollNumber;
    }
    public void setCourse(String courseOfStudy){
        this.courseOfStudy = String.valueOf(courseOfStudy);
    }

    public void displayAttributes(){
        super.displayAttributes();
        System.out.print("Roll Number : "+rollNumber+"\nCourse of Study : "+courseOfStudy+"\n");
    }
}

class Faculty extends Person{
    int id;
    String dept;
    String specialization;
    Faculty(){super();}
    Faculty(String name, int premiseNumber, String street, String city, String pin, String state, String phoneNumber, String email,int id,String dept,String specialization){
        super(name,premiseNumber,street,city,pin,state,phoneNumber,email);
        this.id=id;
        this.dept = String.valueOf(dept);
        this.specialization = String.valueOf(specialization);
    }
    public void setId(int id){
        this.id = id;
    }
    public void setDepartment(String dept){
        this.dept=String.valueOf(dept);
    }
    public void setSpecialization(String specialization){
        this.specialization = String.valueOf(specialization);
    }

    public void displayAttributes(){
        super.displayAttributes();
        System.out.print("Id : "+id+"\nDepartment : "+dept+"\nSpecialization : "+specialization+"\n");
    }
}

class Institute{
    public static void main(String[] args){
        Student student;
        Faculty faculty;
        String name,street,city,pin,state,phoneNumber,email,specialization,dept,courseOfStudy;
        int premiseNumber,rollNumber,id;
        Scanner myObj = new Scanner(System.in);

        System.out.println("Enter the name : ");
        name=myObj.nextLine();
        
        System.out.println("Enter the premise number : ");
        premiseNumber = myObj.nextInt();
        myObj.nextLine();
        System.out.println("Enter the street : ");
        street = myObj.nextLine();

        System.out.println("Enter the city : ");
        city = myObj.nextLine();

        System.out.println("Enter the pin : ");
        pin = myObj.nextLine();

        System.out.println("Enter the state : ");
        state = myObj.nextLine();

        System.out.println("Enter the phone number : ");
        phoneNumber = myObj.nextLine();

        System.out.println("Enter the email id : ");
        email = myObj.nextLine();

        int option;

        System.out.print("Is the person :\n1.Student\n2.Faculty\n");
        option = myObj.nextInt();

        switch(option){
            case 1:
                System.out.println("Enter the roll number : ");
                rollNumber = myObj.nextInt();
                myObj.nextLine();
                System.out.println("Enter the course of study : ");
                courseOfStudy = myObj.nextLine();
                student = new Student(name,premiseNumber,street,city,pin,state,phoneNumber,email,rollNumber,courseOfStudy);
                while(true){
                    System.out.print("What would you like to do :\n1.Change the name\n2.Change the address\n3.Change the phone number\n4.Change the email\n5.Change the roll number\n6.Change the course of study\n7.Display student details\n8.Exit\n");
                    int option2;
                    option2 = myObj.nextInt();
                    if(option2==8) break;
                    switch(option2){
                        case 1:
                            myObj.nextLine();
                            System.out.println("Enter the new name : ");
                            name=myObj.nextLine();
                            student.setName(name);
                            break;
                        case 2:
                            int option3;
                            String value;
                            System.out.print("What would you like to change\n1.Premise Number \n2.Street\n3.City\n4.Pin\n5.State\n");
                            option3 = myObj.nextInt();
                            myObj.nextLine();
                            System.out.println("Enter the new value : ");
                            value = myObj.nextLine();
                            student.setAddress(value,option3);
                            break;
                        case 3:
                            myObj.nextLine();
                            System.out.println("Enter the phone number : ");
                            phoneNumber = myObj.nextLine();
                            student.setPhoneNumber(phoneNumber);
                            break;
                        case 4:
                            myObj.nextLine();
                            System.out.println("Enter the email id : ");
                            email= myObj.nextLine();
                            student.setEmail(email);
                            break;
                        case 5:
                            System.out.println("Enter the roll number : ");
                            rollNumber = myObj.nextInt();
                            student.setRollNumber(rollNumber);
                            break;
                        case 6:
                            myObj.nextLine();
                            System.out.println("Enter the course of study : ");
                            courseOfStudy = myObj.nextLine();
                            student.setCourse(courseOfStudy);
                            break;
                        case 7:
                            student.displayAttributes();
                            break;
                        default :
                            System.out.println("Not a valid option ...");
                            break;
                    }
                }
                break;
            case 2:
                System.out.println("Enter the id : ");
                id = myObj.nextInt();
                myObj.nextLine();
                System.out.println("Enter the dept : ");
                dept = myObj.nextLine();
                System.out.println("Enter the specialization : ");
                specialization = myObj.nextLine();
                faculty = new Faculty(name,premiseNumber,street,city,pin,state,phoneNumber,email,id,dept,specialization);
                while(true){
                    System.out.print("What would you like to do :\n1.Change the name\n2.Change the address\n3.Change the phone number\n4.Change the email\n5.Change the id\n6.Change the dept\n7.Change the specialization\n8.Display student details\n9.Exit\n");
                    int option2;
                    option2 = myObj.nextInt();
                    if(option2==9) break;
                    switch(option2){
                        case 1:
                            myObj.nextLine();
                            System.out.println("Enter the new name : ");
                            name=myObj.nextLine();
                            faculty.setName(name);
                            break;
                        case 2:
                            int option3;
                            String value;
                            System.out.print("What would you like to change\n1.Premise Number \n2.Street\n3.City\n4.Pin\n5.State\n");
                            option3 = myObj.nextInt();
                            myObj.nextLine();
                            System.out.println("Enter the new value : ");
                            value = myObj.nextLine();
                            faculty.setAddress(value,option3);
                            break;
                        case 3:
                            myObj.nextLine();
                            System.out.println("Enter the phone number : ");
                            phoneNumber = myObj.nextLine();
                            faculty.setPhoneNumber(phoneNumber);
                            break;
                        case 4:
                            myObj.nextLine();
                            System.out.println("Enter the email id : ");
                            email= myObj.nextLine();
                            faculty.setEmail(email);
                            break;
                        case 5:
                            System.out.println("Enter the id : ");
                            id = myObj.nextInt();
                            faculty.setId(id);
                            break;
                        case 6:
                            myObj.nextLine();
                            System.out.println("Enter the dept : ");
                            dept = myObj.nextLine();
                            faculty.setDepartment(dept);
                            break;
                        case 7:
                            myObj.nextLine();
                            System.out.println("Enter the specialization : ");
                            specialization = myObj.nextLine();
                            faculty.setSpecialization(specialization);
                            break;
                        case 8:
                            faculty.displayAttributes();
                            break;
                        default :
                            System.out.println("Not a valid option ...");
                            break;
                    }
                }
                break;
            default:
                System.out.println("Not a valid option, aborting ...");
                break;
        }

    }
}