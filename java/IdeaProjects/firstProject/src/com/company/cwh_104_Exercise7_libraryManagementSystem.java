package com.company;

import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.*;

class LibraryBookInfo{
    public String title;
    public String author;
    public String status;

    LibraryBookInfo(String title,String author){
        this.title = title;
        this.author = author;
        this.status = "Available";
    }
}

class IssuedBooksInfo{
    int bookAssignmentNumber;
    String dateOfIssue;
    int studentId;

    IssuedBooksInfo(int bookAssignmentNumber,String dateOfIssue,int studentId){
        this.bookAssignmentNumber = bookAssignmentNumber;
        this.dateOfIssue = dateOfIssue;
        this.studentId = studentId;
        //change status
//        LibraryBookInfo.status = "Issued";
    }
}

class StudentInfo{

    public String studentName;
    public String branchName;
    public int yearOfGraduation;
    static public int idNo = 1;

    public StudentInfo(String studentName, String branchName, int yearOfGraduation) {
        this.studentName = studentName;
        this.branchName = branchName;
        this.yearOfGraduation = yearOfGraduation;
    }

    @Override
    public String toString() {
        return "Student { name : "+this.studentName+", branch : "+this.branchName+"}";
    }
}

class LibraryManagementSystem {
    public TreeMap<Integer, LibraryBookInfo> allBooksList = new TreeMap<>();
    public ArrayList<IssuedBooksInfo> issuedBooksList = new ArrayList<>();
    private int assignmentNumber = 0;
    private final Scanner sc = new Scanner(System.in);
    public TreeMap<Integer, StudentInfo> studentList = new TreeMap<>();
    public int studentId;

    public TreeMap<Integer, StudentInfo> addStudentInfo(StudentInfo[] studentInfo) {
        for (StudentInfo st : studentInfo) {
            studentList.put(StudentInfo.idNo, st);
            StudentInfo.idNo += 1;
        }
//        System.out.println(studentList.toString());
        return studentList;
    }

    public boolean idChecker() {
        System.out.println("Please Enter your Id. number");
        int id = sc.nextInt();
        this.studentId = id;
        if (this.studentList.containsKey(id)) {
            System.out.println("You are a valid user");
            return true;
        } else {
            System.out.println("Invalid user");
        }
        return false;
    }

    LibraryManagementSystem(StudentInfo[] studentInfo) {
        addBookToLibrary("Algorithm", "Karan Kumbhar");
        addBookToLibrary("Algorithm1", "Karan Kumbhar");
        addBookToLibrary("Algorithm2", "Karan Kumbhar");
        addBookToLibrary("Algorithm3", "Karan Kumbhar");
        addBookToLibrary("Algorithm4", "Karan Kumbhar");
        studentList = addStudentInfo(studentInfo);

        System.out.println("\t\tWel-come to our Library");
        if (idChecker()) {
            chooseTask();
        }
    }

    public int listBooks() {
        System.out.println("\n================================\n");
        System.out.println("\t\tPlease select one of choice");
        System.out.println("\t\t\t1]List all books in library");
        System.out.println("\t\t\t2]List all books available to issue");
        System.out.println("\t\t\t3]List all books being issued");
        System.out.println("\t\t\t4]List all books returned to library");
        return sc.nextInt();
    }

    public void chooseTask() {
        Scanner sc = new Scanner(System.in);
        System.out.println("\t\tYou want to proceed with option...");
        System.out.println("\t\t\t1]Displaying books");
        System.out.println("\t\t\t2]Add the Book to Library");
        System.out.println("\t\t\t3]Return the Book");
        System.out.println("\t\t\t4]Issue the Book from Library");
        System.out.println("\t\t\t5]Exit the library");
        int choice = sc.nextInt();
        switch (choice) {
            case 1 -> {
                int taskNumber = listBooks();
                switch (taskNumber) {
                    case 1 -> {
                        System.out.println("Displaying all books in library ...");
                        displayAllBooks();
                        chooseTask();
                    }
                    case 2 -> {
                        displayAvailableBooks();
                        chooseTask();
                    }
                    case 3 -> {
                        displayIssuedBooks();
                        chooseTask();
                    }
                    case 4 -> {
//                        displayReturnedBooks();
                        chooseTask();
                    }
                }
            }
            case 2 -> {
                System.out.println("===============================================\n");
                System.out.println("Enter the Name of book");
                sc.nextLine();
                String title = sc.nextLine();
                System.out.println("Enter the Author of Book");
                String author = sc.nextLine();
                addBookToLibrary(title, author);
                System.out.println("Assignment Number of your book " + this.assignmentNumber);
                System.out.println("You have added one book Successfully");
                System.out.println("===============================================\n");
                chooseTask();
            }
            case 3 -> {
                System.out.println("===============================================\n");
                System.out.println("Enter the Assignment Number of book that you want to Return");
                int assNo = sc.nextInt();
                //System.out.print("Enter a date of Return(format: dd-MM-yyyy): ");
                //String inputDate = sc.next();
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
//                returnBook(num,inputDate);
                returnBookToLibrary(assNo);
                System.out.println("===============================================\n");
                chooseTask();
            }
            case 4 -> {
                System.out.println("===============================================\n");
                System.out.println("Enter the Assignment Number of book that you want to Issue");
                int assNo = sc.nextInt();
//                System.out.print("Enter a date of Issued(format: dd-MM-yyyy): ");
//                sc.nextLine();
//                String inputDate = sc.nextLine();
                LocalDateTime lt = LocalDateTime.now();
                DateTimeFormatter fm = DateTimeFormatter.ISO_LOCAL_DATE;
                String inputDate = lt.format(fm);
//                System.out.println(inputDate);
//                SimpleDateFormat dateFormat = new SimpleDateFormat("dd-MM-yyyy");
//                while(true) {
//                    try {
//                        Date date = dateFormat.parse(inputDate);
//                        break;
//                    } catch (Exception e) {
//                        System.out.println("Invalid date format. Please enter a valid date.");
//                    }
//                }
                issueBookFromLibrary(assNo, inputDate, this.studentId);
                System.out.println("You have issued a book Successfully");
                System.out.println("Please Return it in next 14 days");
                System.out.println("===============================================\n");
                chooseTask();
            }

            case 5 -> {
                System.out.println("Hope you don't like our library");
                System.out.println("Please don't visit again");
            }
            default -> {
                System.out.println("Invalid choice");
                chooseTask();
            }

        }
    }

    public void addBookToLibrary(String title, String author) {
        this.assignmentNumber += 1;
        allBooksList.put(assignmentNumber, new LibraryBookInfo(title, author));
    }

    public void issueBookFromLibrary(int assignmentNumber, String dateOfIssue, int studentId) {
        issuedBooksList.add(new IssuedBooksInfo(assignmentNumber, dateOfIssue, studentId));
        allBooksList.get(assignmentNumber).status = "Issued";
    }

    //    public void returnBook(int assignmentNumber, String dateOfReturn){
    public void returnBookToLibrary(int assignmentNumber) {
        int flag = 0;
        for (IssuedBooksInfo bk : issuedBooksList) {
            if (bk.bookAssignmentNumber == assignmentNumber) {
//                issuedBooks[i].dateOfReturn = dateOfReturn;
//                issuedBooks[i].status = "Returned";
                issuedBooksList.remove(bk);
                allBooksList.get(assignmentNumber).status = "Available";
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            System.out.println("This book is not issued from our Library");
            System.out.println("You can add this book to our Library");
        } else {
            System.out.println("You have returned a book Successfully");
        }
    }

    void displayAllBooks() {
        System.out.println("===============================================\n");
        System.out.println("Their are total " + this.allBooksList.size() + " books in Library\n");
        for (Integer assNo : allBooksList.keySet()) {
            System.out.println("\tAssignment Number ==> " + assNo);
            System.out.println("\tTitle of Book     ==> " + allBooksList.get(assNo).title);
            System.out.println("\tAuthor of Book    ==> " + allBooksList.get(assNo).author);
            System.out.println("\tStatus of Book    ==> " + allBooksList.get(assNo).status);
            System.out.println("\t\n");
        }
        System.out.println("===============================================\n");
    }

    void displayAvailableBooks() {
        System.out.println("===============================================\n");
        System.out.println("Displaying all Available books in Library...\n");
        for (Integer assNo : allBooksList.keySet()) {
            if (Objects.equals(allBooksList.get(assNo).status, "Available")) {
                System.out.println("\tAssignment Number ==> " + assNo);
                System.out.println("\tTitle of Book     ==> " + allBooksList.get(assNo).title);
                System.out.println("\tAuthor of Book    ==> " + allBooksList.get(assNo).author);
                System.out.println("\tStatus of Book    ==> " + allBooksList.get(assNo).status);
                System.out.println("\t\n");
            }
        }
        System.out.println("===============================================\n");
    }

    void displayIssuedBooks() {
        System.out.println("===============================================\n");
        System.out.println("Displaying all Issued books ...\n");
        for (IssuedBooksInfo book : issuedBooksList) {
            StudentInfo st = studentList.get(book.studentId);
            LibraryBookInfo bk = allBooksList.get(book.bookAssignmentNumber);
            if ("Issued".equals(bk.status)) {
                System.out.println("\tAssignment Number ==> " + book.bookAssignmentNumber);
                System.out.println("\tTitle of Book     ==> " + bk.title);
                System.out.println("\tAuthor of Book    ==> " + bk.author);
                System.out.println("\tIssued by         ==> " + st.studentName);
                System.out.println("\tDate of Issue     ==> " + book.dateOfIssue);
                System.out.println("\t\n");
            }
        }
        System.out.println("Their are total " + issuedBooksList.size() + " books issued from library");
        System.out.println("===============================================\n");
    }

//    void displayReturnedBooks(){
//        System.out.println("===============================================\n");
//        System.out.println("Displaying all Returned books ...\n");
//        int total = 0;
//        for (int i=0; i<totalBooksIssued; i++){
//            BookInfo b = issuedBooks[i];
//            if(Objects.equals(b.status, "Returned")) {
//                System.out.println("\tAssignment Number ==> " + b.bookAssignmentNumber);
//                System.out.println("\tTitle of Book     ==> " + bookList[b.bookAssignmentNumber - 1].title);
//                System.out.println("\tAuthor of Book    ==> " + bookList[b.bookAssignmentNumber - 1].author);
//                System.out.println("\tStatus            ==> " + b.status);
//                System.out.println("\tDate of Issue     ==> " + b.dateOfIssue);
//                System.out.println("\tDate of Return    ==> " + b.dateOfReturn);
//                System.out.println("\t\n");
//                total+=1;
//            }
//        }
//        System.out.println("Their are total "+total+" books Returned to library");
//        System.out.println("===============================================\n");
//    }
}

public  class cwh_104_Exercise7_libraryManagementSystem {
    public static void main(String[] args) {
        LibraryManagementSystem lib;
        StudentInfo st1 = new StudentInfo("karan1", "cs", 2025);
        StudentInfo st2 = new StudentInfo("karan2", "cs", 2025);
        StudentInfo st3 = new StudentInfo("karan3", "cs", 2025);
        StudentInfo st4 = new StudentInfo("karan4", "cs", 2025);
        StudentInfo st5 = new StudentInfo("karan5", "cs", 2025);
        StudentInfo[] studentInfo = {st1, st2, st3, st4, st5};
        lib = new LibraryManagementSystem(studentInfo);
    }
}