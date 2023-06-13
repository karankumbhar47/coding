package com.company;

import java.util.Objects;
import java.util.Scanner;

class Book{
    public String title;
    public String author;
    public int assignmentNumber;
    public String status;

    Book(int assignmentNumber,String title,String author){
        this.title = title;
        this.assignmentNumber = assignmentNumber;
        this.author = author;
        this.status = "Available";
    };
}

class BookInfo{
    int bookAssignmentNumber;
    String dateOfIssue;
    String dateOfReturn;
    String status;
    BookInfo(int bookAssignmentNumber,String dateOfIssue,String dateOfReturn){
        this.bookAssignmentNumber = bookAssignmentNumber;
        this.dateOfIssue = dateOfIssue;
        this.dateOfReturn = dateOfReturn;
        this.status = "Issued";
    }
}

class Library{
    private int totalBooks = 0;
    private int totalBooksIssued = 0;
    private int arrayLength = 5;
    private int arrayLengthIssuedBooks = 5;
    public Book []bookList;
    BookInfo[] issuedBooks = new BookInfo[arrayLengthIssuedBooks];

    Library(Book []bookList){
        this.bookList = bookList;
        addBook("Algorithm","Karan Kumbhar");
        addBook("Algorithm1","Karan Kumbhar");
        addBook("Algorithm2","Karan Kumbhar");
        addBook("Algorithm3","Karan Kumbhar");
        addBook("Algorithm4","Karan Kumbhar");
        System.out.println("\t\tWel-come to our Library");
        checkChoice();
    }

    public void checkChoice(){
        Scanner sc = new Scanner(System.in);
        System.out.println("\t\tYou want to proceed with option...");
        System.out.println("\t\t\t1]List all books in library");
        System.out.println("\t\t\t2]List all books available to issue");
        System.out.println("\t\t\t3]List all books being issued");
        System.out.println("\t\t\t4]List all books returned to library");
        System.out.println("\t\t\t5]Add the Book");
        System.out.println("\t\t\t6]Issue the Book");
        System.out.println("\t\t\t7]Return the Book");
        System.out.println("\t\t\t8]Exit the library");
        int choice = sc.nextInt();
        switch (choice){
            case 1 ->{
                System.out.println("Displaying all books in library ...");
                displayAllBooks();
                checkChoice();
            }
            case 2 ->{
                displayAvailableBooks();
                checkChoice();
            }
            case 3 ->{
                displayIssuedBooks();
                checkChoice();
            }
            case 4 ->{
                displayReturnedBooks();
                checkChoice();
            }
            case 5 ->{
                System.out.println("===============================================\n");
                System.out.println("Enter the Name of book");
                sc.nextLine();
                String title = sc.nextLine();
                System.out.println("Enter the Author of Book");
                String author = sc.nextLine();
                addBook(title,author);
                System.out.println("Assignment Number of your book "+totalBooks);
                System.out.println("You have added one book Successfully");
                System.out.println("===============================================\n");
                checkChoice();
            }
            case 7 ->{
                System.out.println("===============================================\n");
                System.out.println("Enter the Assignment Number of book that you want to Return");
                int num = sc.nextInt();
                System.out.print("Enter a date of Return(format: dd-MM-yyyy): ");
                String inputDate = sc.next();
//                while(true) {
//                    System.out.println(inputDate);
//                    SimpleDateFormat dateFormat = new SimpleDateFormat("dd-MM-yyyy");
//                    try {
//                        Date date = dateFormat.parse(inputDate);
//                        break;
//                    } catch (Exception e) {
//                        System.out.println(inputDate);
//                        System.out.println("Invalid date format. Please enter a valid date.");
//                        inputDate = sc.next();
//                    }
//                }
                returnBook(num,inputDate);
                System.out.println("You have returned a book Successfully");
                System.out.println("===============================================\n");
                checkChoice();
            }
            case 6 ->{
                System.out.println("===============================================\n");
                System.out.println("Enter the Assignment Number of book that you want to Issue");
                int num = sc.nextInt();
                System.out.print("Enter a date of Issued(format: dd-MM-yyyy): ");
                sc.nextLine();
                String inputDate = sc.nextLine();
//                SimpleDateFormat dateFormat = new SimpleDateFormat("dd-MM-yyyy");
//                while(true) {
//                    try {
//                        Date date = dateFormat.parse(inputDate);
//                        break;
//                    } catch (Exception e) {
//                        System.out.println("Invalid date format. Please enter a valid date.");
//                    }
//                }
                issueBook(num,inputDate);
                System.out.println("You have issued a book Successfully");
                System.out.println("Please Return it in next 14 days");
                System.out.println("===============================================\n");
                checkChoice();
            }

            case 8 ->{
                System.out.println("Hope you don't like our library");
                System.out.println("Please don't visit again");
            }
            default -> {
                System.out.println("Invalid choice");
                checkChoice();
            }

        }
    }

    public void addBook(String title, String author){
        if(totalBooks+1 > arrayLength){
            arrayLength +=5;
            Book []newBookArray = new Book[arrayLength];
            System.arraycopy(bookList,0,newBookArray,0,bookList.length);
            bookList = newBookArray;
        }
        bookList[totalBooks] = new Book(totalBooks+1,title,author);
        totalBooks += 1;
    }

    public void issueBook(int assignmentNumber, String dateOfIssue){
        if(totalBooksIssued+1 > arrayLengthIssuedBooks){
            arrayLengthIssuedBooks +=5;
            BookInfo []newBookIssuedArray = new BookInfo[arrayLengthIssuedBooks];
            System.arraycopy(issuedBooks,0,newBookIssuedArray,0,issuedBooks.length);
            issuedBooks = newBookIssuedArray;
        }
        issuedBooks[totalBooksIssued] = new BookInfo(assignmentNumber,dateOfIssue,null);
        totalBooksIssued += 1;
        bookList[assignmentNumber-1].status = "Issued";
    }

    public void returnBook(int assignmentNumber, String dateOfReturn){
        int flag = 0;
        for(int i=0; i<totalBooksIssued; i++){
            if(issuedBooks[i].bookAssignmentNumber==assignmentNumber){
               issuedBooks[i].dateOfReturn = dateOfReturn;
               issuedBooks[i].status = "Returned";
               bookList[assignmentNumber-1].status = "Available";
               flag = 1;
               break;
            }
        }
        if(flag==0){
            System.out.println("This book is not issued from our Library");
            System.out.println("You can add this book to our Library");
        }
    }

    void displayAllBooks(){
        System.out.println("===============================================\n");
        System.out.println("Their are total "+this.totalBooks+" books in Library\n");
        for(int i =0; i<totalBooks; i++){
            Book b = bookList[i];
            System.out.println("\tAssignment Number ==> "+b.assignmentNumber);
            System.out.println("\tTitle of Book     ==> "+b.title);
            System.out.println("\tAuthor of Book    ==> "+b.author);
            System.out.println("\tStatus of Book    ==> "+b.status);
            System.out.println("\t\n");
        }
        System.out.println("===============================================\n");
    }

    void displayAvailableBooks(){
        System.out.println("===============================================\n");
        System.out.println("Displaying all Available books in Library...\n");
        for(int i=0; i<totalBooks; i++){
            if(Objects.equals(this.bookList[i].status, "Available")){
                Book b = bookList[i];
                System.out.println("\tAssignment Number ==> "+b.assignmentNumber);
                System.out.println("\tTitle of Book     ==> "+b.title);
                System.out.println("\tAuthor of Book    ==> "+b.author);
                System.out.println("\tStatus of Book    ==> "+b.status);
                System.out.println("\t\n");
            }
        }
        System.out.println("===============================================\n");
    }

    void displayIssuedBooks(){
        System.out.println("===============================================\n");
        System.out.println("Displaying all Issued books ...\n");
        int total = 0;
        for (int i=0; i<totalBooksIssued; i++){
            BookInfo b = issuedBooks[i];
            if("Issued".equals(b.status)) {
                System.out.println("\tAssignment Number ==> " + b.bookAssignmentNumber);
                System.out.println("\tTitle of Book     ==> " + bookList[b.bookAssignmentNumber - 1].title);
                System.out.println("\tAuthor of Book    ==> " + bookList[b.bookAssignmentNumber - 1].author);
                System.out.println("\tStatus            ==> " + b.status);
                System.out.println("\tDate of Issue     ==> " + b.dateOfIssue);
                System.out.println("\t\n");
                total+=1;
            }
        }
        System.out.println("Their are total "+total+" books issued from library");
        System.out.println("===============================================\n");
    }

    void displayReturnedBooks(){
        System.out.println("===============================================\n");
        System.out.println("Displaying all Returned books ...\n");
        int total = 0;
        for (int i=0; i<totalBooksIssued; i++){
            BookInfo b = issuedBooks[i];
            if(Objects.equals(b.status, "Returned")) {
                System.out.println("\tAssignment Number ==> " + b.bookAssignmentNumber);
                System.out.println("\tTitle of Book     ==> " + bookList[b.bookAssignmentNumber - 1].title);
                System.out.println("\tAuthor of Book    ==> " + bookList[b.bookAssignmentNumber - 1].author);
                System.out.println("\tStatus            ==> " + b.status);
                System.out.println("\tDate of Issue     ==> " + b.dateOfIssue);
                System.out.println("\tDate of Return    ==> " + b.dateOfReturn);
                System.out.println("\t\n");
                total+=1;
            }
        }
        System.out.println("Their are total "+total+" books Returned to library");
        System.out.println("===============================================\n");
    }
}


public class cwh_50_onlineLibrary {
    public static void main(String[] args) {
        Book [] bookList = new Book[5];
        Library lib;
        lib = new Library(bookList);
    }
}

