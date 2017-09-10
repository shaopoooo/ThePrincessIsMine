.data
book macro

;/////////////book
mov eax, magenta + (black* 16)	   
call SetTextColor
mov dh,5
mov dl,38
call gotoxy
mov edx,OFFSET book01
call writeString
mov dh,6
mov dl,38
call gotoxy
mov edx,OFFSET book02
call writeString
mov dh,7
mov dl,38
call gotoxy
mov edx,OFFSET book03
call writeString
mov dh,8
mov dl,38
call gotoxy
mov edx,OFFSET book04
call writeString
mov dh,9
mov dl,38
call gotoxy
mov edx,OFFSET book05
call writeString
mov dh,10
mov dl,38
call gotoxy
mov edx,OFFSET book06
call writeString
mov dh,11
mov dl,38
call gotoxy
mov edx,OFFSET book07
call writeString
mov dh,12
mov dl,38
call gotoxy
mov edx,OFFSET book08
call writeString
mov dh,13
mov dl,38
call gotoxy
mov edx,OFFSET book09
call writeString
mov dh,14
mov dl,38
call gotoxy
mov edx,OFFSET book10
call writeString
mov dh,15
mov dl,38
call gotoxy
mov edx,OFFSET book11
call writeString
mov dh,16
mov dl,38
call gotoxy
mov edx,OFFSET book12
call writeString
mov dh,17
mov dl,38
call gotoxy
mov edx,OFFSET book13
call writeString

mov eax, white + (black* 16)	   
call SetTextColor
mov dh,17
mov dl,0
call gotoxy
mov edx,OFFSET book14
call writeString
mov dh,19
mov dl,0
call gotoxy
mov edx,OFFSET book15
call writeString

endm
.code