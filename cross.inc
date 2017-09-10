.data 
cross macro
;/////////////cross
mov eax, red + (black* 16)	   
call SetTextColor

mov dh,2
mov dl,43
call gotoxy
mov edx,OFFSET cross01
call writeString
mov dh,3
mov dl,43
call gotoxy
mov edx,OFFSET cross02
call writeString
mov dh,4
mov dl,43
call gotoxy
mov edx,OFFSET cross03
call writeString
mov dh,5
mov dl,43
call gotoxy
mov edx,OFFSET cross04
call writeString
mov dh,6
mov dl,43
call gotoxy
mov edx,OFFSET cross05
call writeString
mov dh,7
mov dl,43
call gotoxy
mov edx,OFFSET cross06
call writeString
mov dh,8
mov dl,43
call gotoxy
mov edx,OFFSET cross07
call writeString
mov dh,9
mov dl,43
call gotoxy
mov edx,OFFSET cross08
call writeString
mov dh,10
mov dl,43
call gotoxy
mov edx,OFFSET cross09
call writeString
mov dh,11
mov dl,43
call gotoxy
mov edx,OFFSET cross10
call writeString
mov dh,12
mov dl,43
call gotoxy
mov edx,OFFSET cross11
call writeString
mov dh,13
mov dl,43
call gotoxy
mov edx,OFFSET cross12
call writeString
mov dh,14
mov dl,43
call gotoxy
mov edx,OFFSET cross13
call writeString
mov dh,15
mov dl,43
call gotoxy
mov edx,OFFSET cross14
call writeString
mov dh,16
mov dl,43
call gotoxy
mov edx,OFFSET cross15
call writeString
mov dh,17
mov dl,43
call gotoxy
mov edx,OFFSET cross16
call writeString
mov dh,18
mov dl,43
call gotoxy
mov edx,OFFSET cross17
call writeString
mov dh,19
mov dl,43
call gotoxy
mov edx,OFFSET cross18
call writeString
mov dh,20
mov dl,43
call gotoxy
mov edx,OFFSET cross19
call writeString

mov eax, white + (black* 16)	   
call SetTextColor
mov dh,17
mov dl,0
call gotoxy
mov edx,OFFSET cross20
call writeString
mov dh,19
mov dl,0
call gotoxy
mov edx,OFFSET cross21
call writeString


endm
.code