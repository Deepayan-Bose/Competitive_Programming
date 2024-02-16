import java.util.*;

class Address{
	int premiseNumber;
	String street;
	String city;
	int pin;
	String state;
	Address(int premiseNumber,String street,String city){
		this.premiseNumber=premiseNumber;
		this.street=String.valueOf(street);
		this.city=String.valueOf(city);
	}
	
	public void setPremiseNumber(int premiseNumber){
		this.premiseNumber=premiseNumber;
	}
	public void setStreet(String street){
		this.street=String.valueOf(street);
	}
	public void setCity(String city){
		this.city=String.valueOf(city);
	}
	public void setPin(int pin){
		this.pin=pin;
	}
	public void setState(String state){
		this.state=String.valueOf(state);
	}
	public void displayAttributes(){
		System.out.print("Address:\nPremise Number : "+premiseNumber + "\nStreet : " + street + "\nCity : "+city+"\nPin : "+ pin +"\nState : "+state +"\n");
	}

}
class Person{
	String name;
	Address address;
	String phoneNumber;
	String emailId;
	//constructor
	Person(String name,Address address,String phoneNumber,String emailId){
		this.name=String.valueOf(name);
		this.address=new Address(address);
		this.phoneNumber=String.valueOf(phoneNumber);
		this.emailId=String.valueOf(emailId);
	}
	//Setters
	public void setName(String name){
		this.name=String.valueOf(name);
	}
	public void setAddress(Address address){
		Scanner myScanner= new Scanner(System.in);
		System.out.println("What would you like to change :\n1.PremiseNumber\n2.Street\n3.City\n4.Pin\n5.State");
		int option=myScanner.nextInt();
		switch(option){
			case 1:
				System.out.println("Enter the new premise number : ");
				int newPremiseNumber=myScanner.nextInt();
				address.setPremiseNumber(newPremiseNumber);
				break;
			case 2:
				
		}
	}
	public void setPhoneNumber(String phoneNumber){
		this.phoneNumber=String.valueOf(phoneNumber);
	}
	public void setEmailId(String emailId){
		this.emailId=String.valueOf(emailId);
	}
	//Getters
	public void displayAttributes(){
		System.out.println("Name : "+name);
		address.displayAttributes();
		System.out.print("PhoneNumber : "+phoneNumber+"\nEmailId : "+emailId+"\n");
		

	}

}

class Student extends Person{
	static int lastRollNo;
	int rollNumber;
	String course;

	public void setCourse(String course){
		this.course=String.valueOf(course);
	}

	
