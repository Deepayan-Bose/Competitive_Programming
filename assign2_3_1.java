//BookList package
import java.util.*;
package Booklist;

class Book{
	int bookId;
	String title;
	int totalCopies;
	int copiesAvailable;
	Book(){}
	Book(Book book){
		bookId = book.bookId;
		title = String.valueOf(book.title);
		totalCopies = book.totalCopies;
		copiesAvailable = book.copiesAvailable;
	}
	Book(int bookId,String title,int totalCopies,int copiesAvailable){
		this.bookId = bookId;
		this.title = String.valueOf(title);
		this.totalCopies = totalCopies;
		this.copiesAvailable = copiesAvailable;
	}
	public boolean checkId(int id){
		return (bookId==id);
	}
	public int getBookId(){
		return bookId;
	}
	public boolean checkTitle(String title){
		return ((this.title).equals(title));
	}
	public void displayBookDetails(){
		System.out.print("Book Id : "+bookId+"\nTitle : "+title+"\nTotal Copies : "+totalCopies+"\nCopies Available : "+copiesAvailable+"\n");
	}
	public void updateTotalCopies(int totalCopies){
		this.totalCopies=totalCopies;
	}
	public void updateCopiesAvailable(int copiesAvailable){
		this.copiesAvailable=copiesAvailable;
	}
	public void incrementCopy(){
		if(copiesAvailable==totalCopies) System.out.println("Not possible");
		else copiesAvailable++;
	}
	public void decrementCopy(){
		if(copiesAvailable==0){
			System.out.println("The book cannot be issued as there are no copies");
			return;
		} 
		copiesAvailable--;
	}
	public boolean checkCanIssue(){
		return (copiesAvailable>0);
	}
}

class BookList{
	Book[1000] book;
	int count;
	

	public void addBook(Book book_){
		int bookId = book_.getBookId();
		for(int i=0;i<count;i++){
			if(book[i].checkId(bookId)){
				System.out.println("The bookId entered is not a unique value,aborting.....");
				return;
			}
		}
		book[count++] = new Book(book_);
		System.out.println("The book has been added to the list");
		return;
	}
	public void addBookCopy(Book book_){
		int bookId = book_.getBookId();
		for(int i=0;i<count;i++){
			if(book[i].checkId(bookId)){
				book[i].incrementCopy();
				System.out.println("The book copy has been added successfully");
				return;
			}
		}
		System.out.println("The book with the given bookId does not exists");
	}
	public void displayBookDetails(int bookId){
		for(int i=0;i<count;i++){
			if(book[i].checkId(bookId){
				book[i].displayBookDetails();
				return;
			}
		}
		System.out.println("The bookId is not valid");
	}
	public void displayAllBooks(){
		for(int i=0;i<count;i--) book[i].displayBookDetails();
	}
	public void issueBook(int bookId){
		for(int i=0;i<count;i++){
			if(book[i].checkId(bookId){
				book[i].decrementCopy();
				System.out.println("The book has been issued");
				return;
			}
		}
		System.out.println("The bookId is not valid");
	}
	public boolean checkCanIssue(int bookId){
		for(int i=0;i<count;i++) if(book[i].checkId(bookId)) return book[i].checkCanIssue():
	}
	public boolean getBook()
}
	
