;       Objective: find the sum of two numbers 
;       Input: Requests two  integers  from the user.
;       Output: Outputs the input number.
%include "io.mac"

.DATA
n1          dw   4862h 
ch1         db   "COVID"
prompt_msg1  db   "Please input the first number: ",0
prompt_msg2  db   "Please input the second  number : ",0
output_msg  db   "The sum is : ",0
;.UDATA 
;number1   resd   1
;number2   resb   1
;number2   resb   1
.CODE
      .STARTUP
      ; PutLInt n1
      ; nwln
      ; PutLInt ch1
      PutStr  prompt_msg1   ; request first number 
      GetInt CX             ; CX= first number  

      PutStr  prompt_msg2   ; request second number 
      GetInt DX             ; DX= second number  
      
      GetInt BX 

      mov AX, CX
      add AX, DX      
      PutStr  output_msg   
      PutInt   AX
  nwln
      PutInt   BX                                                                         
  nwln 
done:
      .EXIT







