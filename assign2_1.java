import java.util.*;

class Customer {
	int customerId;
	String name;
	int loanAmount;
	String phoneNumber;
	static int creditLimit;
	
	Customer(int customerId,String name,int loanAmount,String phoneNumber){
		this.customerId=customerid;
		this.name=String.valueOf(name);
		this.loanAmount=loanAmount;
		this.phoneNumber=String.valueOf(phoneNumber);
	}
	public static void setCreditLimit(int newCreditLimit){
		creditLimit=newCreditLimit;
		System.out.println("The credit limit has been set");
	}
	
	public void grantLoan(int requestAmount){
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
		return (this.customerId==customerId)'
	}
}

class PriviledgeCustomer extends Customer{


}

class Bank{
	public static void main(String[] args){
		
