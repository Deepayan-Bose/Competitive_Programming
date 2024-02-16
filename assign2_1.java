import java.util.*;

class Customer {
	int customerId;
	String name;
	double loanAmount;
	String phoneNumber;
	static double creditLimit=80000;
	
	Customer(int customerId,String name,double loanAmount,String phoneNumber){
		this.customerId=customerId;
		this.name=String.valueOf(name);
		this.loanAmount=loanAmount;
		this.phoneNumber=String.valueOf(phoneNumber);
	}/*
	public static void setCreditLimit(double newCreditLimit){
		creditLimit=newCreditLimit;
		System.out.println("The credit limit has been set");
	}*/
	
	public void grantLoan(double requestAmount){
		if(loanAmount+requestAmount>creditLimit){
			System.out.println("The loan cannot be granted as it crosses the credit limit");
		}
		else{
			loanAmount=loanAmount+requestAmount;
			System.out.println("The loan has been granted to the account holder");
		}
	}
	public void showCreditLimit(){
		System.out.println("The credit limit for this account is "+creditLimit);
	}
	public void showLoanAmount(){
		System.out.println("The loan amount for this account is "+loanAmount);
	}
	public void showMaxSeekAmount(){
		System.out.println("The amount of loan the user can seek is "+(creditLimit-loanAmount)+"INR");
	}
	public Boolean checkCustomerId(int customerId){
		return (this.customerId==customerId);
	}
}

class PriviledgeCustomer extends Customer{
	static double creditLimit=100000;

	
	PriviledgeCustomer(int customerId,String name,double loanAmount,String phoneNumber){
		super(customerId,name,loanAmount,phoneNumber);
	}
	public void showCreditLimit(){
                System.out.println("The credit limit for this account is "+creditLimit);
        }
	public void showMaxSeekAmount(){
                System.out.println("The amount of loan the user can seek is "+(creditLimit-loanAmount)+"INR");
        }
	public void grantLoan(double requestAmount){
                if(loanAmount+requestAmount>creditLimit){
                        System.out.println("The loan cannot be granted as it crosses the credit limit");
                }
                else{
                        loanAmount=loanAmount+requestAmount;
                        System.out.println("The loan has been granted to the account holder");
                }
        }

}

class Bank{
	public static void main(String[] args){
		Scanner myScanner = new Scanner(System.in);
		Customer customer = new Customer(123,"Rajesh",0,"9024372134");
		PriviledgeCustomer priviledgeCustomer = new PriviledgeCustomer(124,"Suresh",0,"7829437223");
		//PriviledgeCustomer.setCreditLimit(100000);
		//Customer.setCreditLimit(80000);
		customer.showCreditLimit();
		priviledgeCustomer.showCreditLimit();
		customer.grantLoan(40000.34);
		priviledgeCustomer.grantLoan(50000.67);
		customer.showLoanAmount();
		priviledgeCustomer.showLoanAmount();
		customer.showMaxSeekAmount();
		priviledgeCustomer.showMaxSeekAmount();
		customer.grantLoan(40000);
		priviledgeCustomer.grantLoan(40000);
	}
}

