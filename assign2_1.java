import java.util.*;

class Customer{
	int customerId;
	String name;
	double loanAmount;
	String phoneNumber;
	static double creditLimit=80000;

	Customer(String name,String phoneNumber){
		customerId=(int)(Math.random()*100);
		this.name=String.valueOf(name);
		this.phoneNumber=String.valueOf(phoneNumber);
		loanAmount=0;
	}
	Customer(){}
	public void changeName(String name){
		this.name=String.valueOf(name);
		System.out.println("The name has been updated");
	}
	
	public void changePhoneNumber(String phoneNumber){
		this.phoneNumber=String.valueOf(phoneNumber);
		System.out.println("The phone number has been updated");
	}

	public void showCreditLimit(){
		System.out.println("The credit limit of the user is : "+creditLimit);
	}
	static void setCreditLimit(double newCreditLimit){
		creditLimit=newCreditLimit;
		System.out.println("The credit limit has been updated ");
	}
	public void checkLoanAmount(){
		System.out.println("The loan amount of the user is : "+loanAmount);
	}
	public void checkSeekingAmount(){
		System.out.println("The loan he can be granted further is : "+ (creditLimit-loanAmount));
	}
	public void grantLoan(double loanMoney){
		if((loanAmount+loanMoney)>creditLimit) {
			System.out.println("The loan cannot be granted as it exceeds the credit limit");
		}else{
			loanAmount+=loanMoney;
			System.out.println("The loan has been sanctioned to the user");
		}
	}
	public void displayAttributes(){
		System.out.print("Name : "+name+"\nPhone Number : " +phoneNumber+"\nLoan Amount : "+loanAmount+"\nCustomer Id : "+customerId+"\n");
	}

	
}

class PriviledgedCustomer extends Customer{
	static double creditLimit=100000;
	PriviledgedCustomer(String name,String phoneNumber){
		super(name,phoneNumber);
	}
	PriviledgedCustomer(){}
	public void showCreditLimit(){
                System.out.println("The credit limit of the user is : "+creditLimit);
        }
        static void setCreditLimit(double newCreditLimit){
                creditLimit=newCreditLimit;
                System.out.println("The credit limit has been updated ");
        }
	public void checkSeekingAmount(){
                System.out.println("The loan he can be granted further is : "+ (creditLimit-loanAmount));
        }
        public void grantLoan(double loanMoney){
                if((loanAmount+loanMoney)>creditLimit) {
                        System.out.println("The loan cannot be granted as it exceeds the credit limit");
                }else{
                        loanAmount+=loanMoney;
                        System.out.println("The loan has been sanctioned to the user");
                }
        }
}

class Bank{
	public static void main(String[] args){
		String name,phoneNumber;
		int option;
		Customer customer;
		PriviledgedCustomer priviledgedCustomer;
		Scanner myObj = new Scanner (System.in);
		System.out.println("Enter the details of the customer ");
		System.out.print("Name : ");
		name  = myObj.nextLine();
		System.out.print("Phone Number : ");
		phoneNumber = myObj.nextLine();
		
		System.out.print("Is the cutomer :\n1.Priviledged\n2.Unpriviledged\n");
		option = myObj.nextInt();
		switch(option){
			case 1:
				priviledgedCustomer= new PriviledgedCustomer(name,phoneNumber);
				while(true){
					System.out.print("What would you like to do\n1.Grant a loan\n2.Change the name\n3.Change the phone number\n4.Check loan amount\n5.Check credit limit\n6.Check loan that the user can seek\n7.Display the details of the user\n8.Exit\n");
					int option2=myObj.nextInt();
					if(option2==8) break;
					switch(option2){
						case 1:
							System.out.println("Enter the amount to sanction");
							double loanMoney= myObj.nextDouble();
							priviledgedCustomer.grantLoan(loanMoney);
							break;
						case 2:
							System.out.println("Enter the new name");
							myObj.nextLine();
							String newName = myObj.nextLine();
							priviledgedCustomer.changeName(newName);
							break;
						case 3:
							System.out.println("Enter the new phone number");
							myObj.nextLine();
							String newPhoneNumber= myObj.nextLine();
							priviledgedCustomer.changePhoneNumber(newPhoneNumber);
							break;
						case 4:
							priviledgedCustomer.checkLoanAmount();
							break;
						case 5:
							priviledgedCustomer.showCreditLimit();
							break;
						case 6: 
							priviledgedCustomer.checkSeekingAmount();
							break;
						case 7:
							priviledgedCustomer.displayAttributes();
							break;
						default:
							System.out.println("Please enter a valid option");
							break;
					}
				}
				break;
			case 2:
				customer= new Customer(name,phoneNumber);
				while(true){
                                        System.out.print("What would you like to do\n1.Grant a loan\n2.Change the name\n3.Change the phone number\n4.Check loan amount\n5.Check credit limit\n6.Check loan that the user can seek\n7.Display the details of the user\n8.Exit\n");
                                        int option2=myObj.nextInt();
                                        if(option2==8) break;
                                        switch(option2){
                                                case 1:
                                                        System.out.println("Enter the amount to sanction");
                                                        double loanMoney= myObj.nextDouble();
                                                        customer.grantLoan(loanMoney);
                                                        break;
                                                case 2:
                                                        System.out.println("Enter the new name");
							myObj.nextLine();
                                                        String newName = myObj.nextLine();
                                                        customer.changeName(newName);
                                                        break;
                                                case 3:
                                                        System.out.println("Enter the new phone number");
							myObj.nextLine();
                                                        String newPhoneNumber= myObj.nextLine();
                                                        customer.changePhoneNumber(newPhoneNumber);
                                                        break;
                                                case 4:
                                                        customer.checkLoanAmount();
                                                        break;
                                                case 5:
                                                        customer.showCreditLimit();
                                                        break;
                                                case 6:
                                                        customer.checkSeekingAmount();
                                                        break;
                                                case 7:
                                                        customer.displayAttributes();
                                                        break;
                                                default:
                                                        System.out.println("Please enter a valid option");
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
