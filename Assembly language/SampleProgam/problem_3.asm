%include "io.mac"

.DATA
var2 db "Please Enter the Number",0

.UDATA
var3 resb 2

.CODE
    .STARTUP
    PutStr var2
    nwln
    GetInt [var3]
    mov AX, 0

Loop1:
    cmp AX,[var3]
    je done
    PutInt AX
    nwln
    inc AX
    jmp Loop1

done:
    nwln
    .EXIT
