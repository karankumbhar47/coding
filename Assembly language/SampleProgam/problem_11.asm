%include "io.mac"

.DATA
msg1_enterString     db     "Please enter string : ",0
msg2_repeat          db     "If you want to terminate press y: ",0

.UDATA
string    resw   1
termn     resw   1

.CODE
    .STARTUP

start:
    PutStr  msg1_enterString
    nwln
    GetStr string
    mov EBX,string
    mov BL,[EBX]
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
f10:
    PutCh BL
    jmp f

f:  inc EBX
    mov  BL,[EBX]
    cmp byte BL,0
    jne Loop_start
    nwln
    
repeat:
    PutStr msg2_repeat
    GetStr  termn
    cmp byte [termn],"y"
    je done
    cmp byte [termn],"Y"
    jne start

done:
  .EXIT