
%include "io.mac"

.DATA
inputMessage      db    "Please Enter Order of Square Matrix ", 0
inputMessageRow   db    "Row No. ",0
empty_character   db    ":- ",0
result_message    db    "Answer is :- ",0
matrix_A_message  db    "Matrix A :",0
matrix_B_message  db    "Matrix B :",0
matrix_C_message  db    "A X B :",0
matrix_D_message  db    "A + B :",0

.UDATA
matrix_A resd 101
matrix_B resd 101
matrix_C resd 101
matrix_D resd 101
order    resw 1

.CODE
    .STARTUP
    mov EBX,matrix_A            ;taking matrix A as input
    call matrixFormation
    mov EBX,matrix_B            ;taking matrix B as input
    call matrixFormation

    ;---------------
    push matrix_C               ;calling multiplication funtion
    push matrix_B
    push matrix_A
    call matrix_multiplication

    

    ;---------------
    nwln
    PutStr matrix_A_message     ;printing result of multiplication
    nwln
    mov EAX,matrix_A
    call display_matrix
    nwln
    PutStr matrix_B_message
    nwln
    mov EAX,matrix_B
    call display_matrix
    nwln
    PutStr matrix_C_message
    nwln
    mov EAX,matrix_C
    call display_matrix
    nwln

    mov EAX, matrix_A
    mov EBX, matrix_B
    mov ECX, matrix_D
    call matirx_addition

    PutStr matrix_D_message
    nwln
    mov EAX,matrix_D
    call display_matrix
    
done:
    .EXIT


;----------------------------------------------------Matrix Formation Funtion--------------------------------------------------------------------------------------------------------------------------------------------------------;

matrixFormation :                       ;fution for taking matirx as input
    push EBX                            ;taking order of matrix as input
    PutStr inputMessage
    PutStr empty_character
    GetInt CX
    ;--------------
    mov [order],CX                      ;storing order of matrix in variable order
    mov [EBX],CX                        
    ;--------------
    mov AX,1                            
    mov DX,0                            ;counter for number of rows
    ;--------------

    Row_Entry:                          ;funtion taking row of matrix as input 
        cmp DX ,[order]                 ;comparing row counter of rows to order of matirx    
        je matrixFormation_return    
        ;----------------
        PutStr inputMessageRow          ;printing message for takint row entry as input
        PutInt DX
        PutStr empty_character
        nwln
        ;-----------------
    Coloum_Entry:                       ;funtion taking each entry of row
        GetInt  CX                      ;taing element of matrix as input
        add EBX,4                       ;increasing storing address by 4 as we have stored order in first address and maintaing distance of 4 between two successive element
        mov [EBX],CX
        ;-----------------
        cmp AX , [order]                ;after all entires completed in row go to next row
        je entry_next
        ;----------------
        inc AX                          ;increasing counter for how much entries are in row
        jmp Coloum_Entry
        ;-----------------
    entry_next:                         ;fution for setting all counters before goint to next row
        mov AX,1                        
        inc DX                          ;as row entries completed incresing row number
        jmp Row_Entry
        ;-----------------

    matrixFormation_return:             ;fution return
        pop EBX                 
        ret
        

;-----------------------------------------------------------------------------------------------Matrix Display-------------------------------------------------------------------------------------------------------------------------

display_matrix:                     ;fution for printing matix
    push EAX
    mov CX,0
    mov BX,0
    mov EDX,EAX
    add EAX,4
    loop_row:
        cmp CX,[EDX]
        je display_matrix_return
        PutCh "["
        PutCh " "
        jmp loop_coloum
        
    loop_coloum:
        PutInt [EAX]
        PutCh " "
        add BX,1
        add EAX,4
        cmp BX,[EDX]
        jne loop_coloum
        PutCh "]"
        nwln
        add CX,1
        mov BX,0
        jmp loop_row
        
        
    display_matrix_return:
        pop EAX
        ret

;---------------------------------------------------------Matrix multiplication-------------------------------------------------------------------------------------------------------------;

matrix_multiplication:  ;fution for multiplyint two matix

      Push ebp          ;pushing ebp                                                   
                                                      
      mov ebp, esp      ;shifting stack pointer to base pointer

                                                         
      Push EAX                              ;matrix_A      ebp+8 
      Push EBX                              ;matrix_B      ebp+12
      Push ECX                              ;matirx_C      ebp+16
      Push EDX                              ;size          ebp-16                                                        
      sub esp, 40                           ;i          ebp-20                                
                                            ;j          ebp-24                                
                                            ;k          ebp-28    
                                            ;pointer    ebp-32                            
      Push EDX                              ;sum        ebp-36   

      
      mov ECX, [ebp+8]  ;get size of matrix_A
      mov EAX, [ECX]


      mov EDX, [ebp+16]  ;set size of oualpha beta gamma delta epsilon tput matrix
      mov [EDX], EAX
      
      mov [ebp - 16], EAX

      add EDX, 4
            
      

                              ;matrix_C[i][j] = matrix_A[i][:] * matrix_B[:][j]
      mov BH, 0               ;for i in 0 to n-1
      mov [ebp-20], BH
      loop_i:
            mov BL, 0         ;for j in 0 to n-1
            loop_j:
                  mov [ebp-32], EDX
                  mov [ebp-24], BL
                  mov [ebp-20], BH
                  mov dword [ebp-36], 0         ;Sum = 0

                  mov BL, 0                     ;for k in 0 to n-1
                  
                  loop_k:
                                                
                        mov BH, [ebp-20]        ;get matrix_A[i][k] in EDX
                        mov ECX, [ebp+8]
                        call get_matrix_element
                        mov EDX, EAX

                        mov ECX, [ebp+12]       ;get matrix_B[k][j] in EAX
                        mov BH, BL
                        mov BL, [ebp-24]
                        call get_matrix_element

                        
      
                        imul EDX                 ;Sum += matrix_A[i][k] * matrix_B[k][j]
                        add [ebp-36], EAX
                        
                        mov BL, BH

                        inc BL
                        cmp BL, [ebp -16]
                        jl loop_k
                  ;nwln
                  mov EDX, [ebp-32]             ;*pointer = Sum
                  mov EAX, [ebp-36]
                  mov [EDX], EAX


                  mov BL, [ebp-24]
                  mov BH, [ebp-20]
                  add EDX, 4

                  inc BL
                  cmp BL, [ebp-16]
                  jl loop_j
           
            inc BH
            cmp BH, [ebp-16]
            jl loop_i

      add esp, 40

      Pop EDX
      Pop ECX
      Pop EBX
      Pop EAX

      mov esp, ebp
      Pop ebp
      ret
      ;--------------------
      get_matrix_element:           ;funtion for finding for element of matix
            mov EAX, 0              ;[offset = (i*n + j + 1)*4]
            mov AL, [ECX]
            mul BH
            add AL, BL
            inc AL

            mov EAX, [ECX + EAX*4]
            ret

;---------------------------------------------------Matrix Addition funtion-------------------------------------------------------------------------------------------------------------

matirx_addition:
    push EAX
    push EBX
    push ECX
    mov EDX,[EAX]
    mov [ECX],EDX
    add EAX,4
    add EBX,4
    add ECX,4
    mov dword EDX,0
    loop_addition:
        cmp word[EAX],0
        je matirx_addition_return
        add EDX,[EAX]
        add EDX,[EBX]
        mov [ECX],EDX
        add EAX,4
        add EBX,4
        add ECX,4
        mov dword EDX,0
        jmp loop_addition
    matirx_addition_return:
        pop EAX
        pop EBX
        pop ECX
        ret

;-------------------------------------------------------------------------finished-------------------------------------------------------------------------------------------------