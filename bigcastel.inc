.data
bigcastel macro

mov dh,2           ;castel
mov dl,0
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,OFFSET message14
call writeString

endm
.code