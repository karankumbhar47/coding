%include "io.mac"
%include "/build/problem_3"
.DATA
prompt_msg1  db   "Please enter string : ",0
repeat    db   "if you want to terminate press y: ",0

.UDATA
string  resb 32
again  resb 32

.CODE
    .STARTUP

start:
    nwln
    PutStr  prompt_msg1
    nwln
    GetStr [var3]
    jmp Loop1
    mov EAX, string
    mov BL,[EAX]

Loop_start:
      cmp BL,"0"
      jne f1
      PutCh 'X'
      jmp f



f1:     
    cmp BL, "1"
    jne f2  
    PutCh "Y"
    jmp f
f2:     
    cmp BL, "2"
    jne f3  
    PutCh "Z"
    jmp f
f3:     
    cmp BL, "3"
    jne f4 
    PutCh "A"
    jmp f
f4:     
    cmp BL, "4"
    jne f5 
    PutCh "B"
    jmp f
f5:     
    cmp BL, "5"
    jne f6  
    PutCh "C"
    jmp f
f6:     
    cmp BL, "6"
    jne f7  
    PutCh "D"
    jmp f
f7:     
    cmp BL, "7"
    jne f8  
    PutCh "E"
    jmp f
f8:     
    cmp BL, "8"
    jne f9  
    PutCh "F"
    jmp f
f9:     
    cmp BL, "9"
    jne f10
    PutCh "0"
    jmp f
    jmp f
    jmp f
f10:
    PutCh BL
    jmp f

f:    inc EAX
      mov BL, [EAX]
      cmp byte BL, 0
      jne Loop_start
      nwln
    
repeat1:
    PutStr repeat
    GetStr again
    cmp byte [again],"y"
    jne start

done:
  .EXIT