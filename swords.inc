.data
swords macro

;///////swords
mov eax, lightcyan + (black* 16)	   
call SetTextColor
mov dh,1
mov dl,60
call gotoxy
mov edx,OFFSET swords01
call writeString
mov dh,2
mov dl,59
call gotoxy
mov edx,OFFSET swords02
call writeString
mov dh,3
mov dl,60
call gotoxy
mov edx,OFFSET swords03
call writeString
mov dh,4
mov dl,60
call gotoxy
mov edx,OFFSET swords04
call writeString
mov dh,5
mov dl,60
call gotoxy
mov edx,OFFSET swords05
call writeString
mov dh,6
mov dl,55
call gotoxy
mov edx,OFFSET swords06
call writeString
mov dh,7
mov dl,54
call gotoxy
mov edx,OFFSET swords07
call writeString
mov dh,8
mov dl,55
call gotoxy
mov edx,OFFSET swords08
call writeString
mov dh,9
mov dl,60
call gotoxy
mov edx,OFFSET swords09
call writeString
mov dh,10
mov dl,60
call gotoxy
mov edx,OFFSET swords10
call writeString
mov dh,11
mov dl,60
call gotoxy
mov edx,OFFSET swords11
call writeString
mov dh,12
mov dl,60
call gotoxy
mov edx,OFFSET swords12
call writeString
mov dh,13
mov dl,60
call gotoxy
mov edx,OFFSET swords13
call writeString
mov dh,14
mov dl,60
call gotoxy
mov edx,OFFSET swords14
call writeString
mov dh,15
mov dl,60
call gotoxy
mov edx,OFFSET swords15
call writeString
mov dh,16
mov dl,60
call gotoxy
mov edx,OFFSET swords16
call writeString
mov dh,17
mov dl,60
call gotoxy
mov edx,OFFSET swords17
call writeString
mov dh,18
mov dl,60
call gotoxy
mov edx,OFFSET swords18
call writeString
mov dh,19
mov dl,60
call gotoxy
mov edx,OFFSET swords19
call writeString
mov dh,20
mov dl,61
call gotoxy
mov edx,OFFSET swords20
call writeString

mov eax, white + (black* 16)	   
call SetTextColor
mov dh,17
mov dl,0
call gotoxy
mov edx,OFFSET swords21
call writeString
mov dh,19
mov dl,0
call gotoxy
mov edx,OFFSET swords22
call writeString

endm
.code