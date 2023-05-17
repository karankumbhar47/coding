%include "io.mac"

.DATA
inputMessage db  "Please Enter Your Full Name", 0

.UDATA
FullName resw 32
;first_name resw 32
;cnt resb 1

 
.CODE
    .STARTUP
    PutStr  inputMessage
    nwln
    GetStr  FullName
    mov EAX,FullName
    call operation
    

done:
    .EXIT

;-------------------------Funtion code ------------------------------------------------------;      
operation:
    push EAX
    mov BX,0
    mov ECX,EAX
    loop_char:
        cmp byte[EAX]," "
        jne abc
        add BX,1
        abc:
        add EAX,1
        cmp BX,2
        je display_last_name
        jmp loop_char

    display_last_name:
        cmp byte[EAX],0
        jne f1
        mov BX,0
        PutCh " "
        jmp display_first_name
        f1:
        PutCh byte[EAX]
        add EAX,1
        jmp display_last_name
    display_first_name:
        cmp byte[ECX]," "
        jne abcd
        add BX,1
        abcd:
        PutCh [ECX]
        add ECX,1
        cmp BX,2
        je operation_return
        jmp display_first_name
    operation_return:
        nwln
        pop EAX
        ret 

        
