import java.util.*;
package MemberList;

class Member{
	int memberId;
	String name;
	String dateOfBirth;
	int booksIssued;
	static int maxBooksIssued=5;
	Member(){}
	Member(int memberId,String name,String dateOfBirth,int booksIssued){
		this.memberId = memberId;
		this.name = String.valueOf(name);
		this.dateOfBirth = String.valueOf(dateOfBirth);
		this.booksIssued = booksIssued;
	}
	Member(Member member){
		memberId = member.memberId;
		name = String.valueOf(member.name);
		dateOfBirth = String.valueOf(member.dateOfBirth);
		booksIssued = member.booksIssued;
	}
	public boolean checkId(int memberId){
		return this.memberId = memberId;
	}
	
	public void displayMemberDetails(){
		System.out.print("Member Id : "+memberId+"\nName : "+name+"\nDate of Birth : "+ dateOfBirth+"\nBooks Issued : "+ booksIssued+"\n");
	}
	public int getMemberId(){
		return memberId;
	}
	public void decrementIssued(){
		if(booksIssued==0){
			System.out.println("The student did not issue any books ");
		}
		else booksIssued--;
	}
	public void incrementIssued(){
		if(booksIssued==maxBooksIssued) System.out.println("The student cannot issue any more books");
		else booksIssued++;
	}
	public boolean checkCanIssue(){
		return (booksIssued<maxBooksIssued);
	}
}

class MemberList{
	Member[1000] member;
	int count;
	
	public void addMember(Member member_){
		int memberId = member_.getMemberId();
		for(int i=0;i<count;i++){
			if(member[i].checkId(memberId)){
				System.out.println("The memberId of the new member is not unique, aborting.....");
				return;
			}
		}
		member[count++]= new Member(member_);
		System.out.println("The member has been added succesfully");
	}
	
	public void displayMemberDetails(int memberId){
		for(int i=0;i<count;i++){
			if(member[i].checkId(memberId)){
				member[i].displayMemberDetails();
				return;
			}
		}
		System.out.println("The memberId does not exist");
	}
	public void issueBook(int memberId){
		for(int i=0;i<count ; i++){
			if(member[i].checkId(memberId)){
				member[i].incrementIssued();
				return;
			}
		}
		System.out.println("The memberId is non existent");
	}
	
	public void returnBook(int memberId) 
		for(int i=0;i<count;i++){
			if(member[i].checkId(memberId)){
				member[i].decrementIssued();
				return;
			}
		}
		System.out.println("The memberId is non existent");
	}

	public boolean checkCanIssue(int memberId){
		for(int i=0;i<count;i++){
			if(member[i].checkId(memberId)){
				return member[i].checkCanIssue();
			}
		}
		System.out.println("The memberId is non existent");
		return false;
	}
	public void displayAllMembers(){
		for(int i=0;i<count;i++) member[i].displayMemberDetails();
	}
	public Member getMember(int memberId){
		for(int i=0;i<count;i++){
			if(member[i].checkId(memberId)){
				return member[i];
			}
		}
	}
}


