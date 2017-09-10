.data
heart macro

;//////////////heart
mov eax, yellow + (black* 16)	   
call SetTextColor
mov dh,1
mov dl,49
call gotoxy
mov edx,OFFSET heart00
call writeString
mov dh,2
mov dl,49
call gotoxy
mov edx,OFFSET heart01
call writeString
mov dh,3
mov dl,49
call gotoxy
mov edx,OFFSET heart02
call writeString
mov dh,4
mov dl,49
call gotoxy
mov edx,OFFSET heart03
call writeString
mov dh,5
mov dl,49
call gotoxy
mov edx,OFFSET heart04
call writeString
mov dh,6
mov dl,49
call gotoxy
mov edx,OFFSET heart05
call writeString
mov dh,7
mov dl,49
call gotoxy
mov edx,OFFSET heart06
call writeString

mov eax, lightred + (black* 16)	   
call SetTextColor
mov dh,8
mov dl,42
call gotoxy
mov edx,OFFSET heart07
call writeString
mov dh,9
mov dl,42
call gotoxy
mov edx,OFFSET heart08
call writeString
mov dh,10
mov dl,42
call gotoxy
mov edx,OFFSET heart09
call writeString
mov dh,11
mov dl,42
call gotoxy
mov edx,OFFSET heart10
call writeString
mov dh,12
mov dl,42
call gotoxy
mov edx,OFFSET heart11
call writeString
mov dh,13
mov dl,42
call gotoxy
mov edx,OFFSET heart12
call writeString
mov dh,14
mov dl,42
call gotoxy
mov edx,OFFSET heart13
call writeString
mov dh,15
mov dl,42
call gotoxy
mov edx,OFFSET heart14
call writeString
mov dh,16
mov dl,42
call gotoxy
mov edx,OFFSET heart15
call writeString
mov dh,17
mov dl,42
call gotoxy
mov edx,OFFSET heart16
call writeString
mov dh,18
mov dl,42
call gotoxy
mov edx,OFFSET heart17
call writeString
mov dh,19
mov dl,42
call gotoxy
mov edx,OFFSET heart18
call writeString
mov dh,20
mov dl,42
call gotoxy
mov edx,OFFSET heart19
call writeString
mov dh,21
mov dl,42
call gotoxy
mov edx,OFFSET heart20
call writeString

mov eax, white + (black* 16)	   
call SetTextColor
mov dh,17
mov dl,0
call gotoxy
mov edx,OFFSET heart21
call writeString
mov dh,19
mov dl,0
call gotoxy
mov edx,OFFSET heart22
call writeString

endm
.code