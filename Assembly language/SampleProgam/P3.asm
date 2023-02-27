;Test routine for GetPut.asm      
;
;       Objective: find the sum of two numbers 
;       Input: Requests two  integers  from the user.
;       Output: Outputs the input number.
%include "io.mac"

.DATA
prompt_msg1  db   "Please input the first number : ",0
n1 dw   6247H  
n2 dw   4523H 
.UDATA 
number1   resd   1343 
number2   resd   134

.CODE
      .STARTUP
       mov CL,5  
L1     mov AX, [n1]
       mov dx,[n2]
       push word [n1+2]
       dec CL
       jnz  L1
       PutInt  AX  
done:
      .EXIT








