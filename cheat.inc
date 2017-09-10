.data
storecheat macro

;/////////////cheat
mov eax, lightblue + (black* 16)	   
call SetTextColor
mov dh,2
mov dl,45
call gotoxy
mov edx,OFFSET cheat01
call writeString
mov dh,3
mov dl,45
call gotoxy
mov edx,OFFSET cheat02
call writeString
mov dh,4
mov dl,45
call gotoxy
mov edx,OFFSET cheat03
call writeString
mov dh,5
mov dl,45
call gotoxy
mov edx,OFFSET cheat04
call writeString
mov dh,6
mov dl,45
call gotoxy
mov edx,OFFSET cheat05
call writeString
mov dh,7
mov dl,45
call gotoxy
mov edx,OFFSET cheat06
call writeString
mov dh,8
mov dl,45
call gotoxy
mov edx,OFFSET cheat07
call writeString
mov dh,9
mov dl,45
call gotoxy
mov edx,OFFSET cheat08
call writeString
mov dh,10
mov dl,45
call gotoxy
mov edx,OFFSET cheat09
call writeString
mov dh,11
mov dl,45
call gotoxy
mov edx,OFFSET cheat10
call writeString
mov dh,12
mov dl,45
call gotoxy
mov edx,OFFSET cheat11
call writeString
mov dh,13
mov dl,45
call gotoxy
mov edx,OFFSET cheat12
call writeString
mov dh,14
mov dl,45
call gotoxy
mov edx,OFFSET cheat13
call writeString
mov dh,15
mov dl,45
call gotoxy
mov edx,OFFSET cheat14
call writeString
mov dh,18
mov dl,53
call gotoxy
mov edx,OFFSET cheat15
call writeString
mov dh,19
mov dl,53
call gotoxy
mov edx,OFFSET cheat16
call writeString
mov dh,20
mov dl,53
call gotoxy
mov edx,OFFSET cheat17
call writeString

mov eax, white + (black* 16)	   
call SetTextColor
mov dh,17
mov dl,0
call gotoxy
mov edx,OFFSET cheat18
call writeString
mov dh,19
mov dl,0
call gotoxy
mov edx,OFFSET cheat19
call writeString


endm
.code