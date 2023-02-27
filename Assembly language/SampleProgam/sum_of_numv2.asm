;Test routine for GetPut.asm      
;
;       Objective: find the sum of two numbers 
;       Input: Requests two  integers  from the user.
;       Output: Outputs the input number.
%include "io.mac"

.DATA
prompt_msg1  db   "Please input the first number : ",0
n1 dw   4862  
n2 dw   4523 
.UDATA 
number1   resd   1343 
number2   resd   134

.CODE
      .STARTUP
       PutStr  prompt_msg1   ; request second number 
       GetInt AX             ; DX= second number  

      mov cx, [n1]
     	call P1
     	dec CL
    	PutInt  AX  
      nwln
    	call P2 
    	inc CL
    	mov CX,AX
done:
      .EXIT

; -----------------------------------------------------
P1:
  mov AX, CX   ; 
  add AX,DX    ;  
  ret
;-----------------------------------------------------------

P2:
            mov cx, 5
            mov dx, 10
           call P1 
           add cx,5 
           add CL,1  
         PutInt   AX
         nwln
ret 
 





