%include "io.mac"


.DATA
Student_No      db  "Please enter the number of student :- ",0
Subject_No      db  "Please enter the number subjects :- ",0
marks           db  "Enter the marks of Subject_",0
marks2          db  " :- ",0
student_marks   db  "Roll No.-",0
highMarks       db  "Student with Roll No. ",0
maxMarks        db  " got highest marks - ",0


.UDATA
;variabls declared for :-
N resw 1                ;Total number of student
M resw 1                ;Total number of subject
highestMark resw 1      ;Storing highest Marks
Roll_high   resw 1      ;Storing roll number of student who got highest marks


.CODE
    .STARTUP
    PutStr Student_No   
    GetInt [N]          ;Taking total number of students
    PutStr Subject_No
    GetInt [M]          ;Taking total number of subjects
    add word[N],1       ;Increasing number of studens by 1 for compraing in loops (N + 1)
    add word[M],1       ;Increasing number of subjects by 1 for compraing in loops (M + 1)
    mov AX,1            ;counter for Subject number--> initial value is 1
    mov BX,1            ;counter for Student number--> initial value is 1
    mov word[highestMark],0    ;Initilizing highest marks as zero


Loop_subject:           ;loop in which all subjects are asking for marks
    cmp AX,word[M]      ;compare subject counter to m+1
    je done             ;if all subjects done then jump to done
    PutStr marks        ;oterwise aking marks for subject no....
    PutInt AX           
    PutStr marks2
    nwln
    add AX,1            ;increasing subject number
    mov BX,1            ;setting student number to 1
    jmp Loop_Student


Loop_Student:           ;loop taking marks of all the students
    cmp BX,[N]          ;compare student counter to N + 1
    je Loop_store

    PutStr student_marks        
    PutInt BX
    PutStr marks2
    GetInt CX                   ;taking marks of individual students 
    cmp CX,word[highestMark]    ;comparing privious marks with current marks
    JNG j1                      ;jump not greater than then go to J1 label
    mov word[highestMark],CX    ;if jump greater than then store marks in highestMarks variable
    mov word[Roll_high],BX      ;sotring roll number of student who got this marks
    j1:
    add BX,1                    ;increasing number of student by 1 
    jmp Loop_Student            ;again to student loop


Loop_store:                     ;loop for printing highest marks and its roll number of specific subjects
    PutStr highMarks
    PutInt [Roll_high]
    PutStr maxMarks
    PutInt [highestMark]
    mov word [highestMark],0    ;resetting value of highestMark to zero
    nwln                        
    jmp Loop_subject            ;again go to next subject


done:
    .EXIT
    we