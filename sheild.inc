.data
sheild macro

;///////sheild
mov eax, lightgreen + (black* 16)	   
call SetTextColor
mov dh,1
mov dl,58
call gotoxy
mov edx,OFFSET sheild01
call writeString
mov dh,2
mov dl,56
call gotoxy
mov edx,OFFSET sheild02
call writeString
mov dh,3
mov dl,52
call gotoxy
mov edx,OFFSET sheild03
call writeString
mov dh,4
mov dl,53
call gotoxy
mov edx,OFFSET sheild04
call writeString
mov dh,5
mov dl,54
call gotoxy
mov edx,OFFSET sheild05
call writeString
mov dh,6
mov dl,48
call gotoxy
mov edx,OFFSET sheild06
call writeString
mov dh,7
mov dl,48
call gotoxy
mov edx,OFFSET sheild07
call writeString
mov dh,8
mov dl,48
call gotoxy
mov edx,OFFSET sheild08
call writeString
mov dh,9
mov dl,48
call gotoxy
mov edx,OFFSET sheild09
call writeString
mov dh,10
mov dl,48
call gotoxy
mov edx,OFFSET sheild10
call writeString
mov dh,11
mov dl,48
call gotoxy
mov edx,OFFSET sheild11
call writeString
mov dh,12
mov dl,48
call gotoxy
mov edx,OFFSET sheild12
call writeString
mov dh,13
mov dl,48
call gotoxy
mov edx,OFFSET sheild13
call writeString
mov dh,14
mov dl,48
call gotoxy
mov edx,OFFSET sheild14
call writeString
mov dh,15
mov dl,49
call gotoxy
mov edx,OFFSET sheild15
call writeString
mov dh,16
mov dl,50
call gotoxy
mov edx,OFFSET sheild16
call writeString
mov dh,17
mov dl,51
call gotoxy
mov edx,OFFSET sheild17
call writeString
mov dh,18
mov dl,52
call gotoxy
mov edx,OFFSET sheild18
call writeString
mov dh,19
mov dl,54
call gotoxy
mov edx,OFFSET sheild19
call writeString

mov eax, white + (black* 16)	   
call SetTextColor
mov dh,17
mov dl,0
call gotoxy
mov edx,OFFSET sheild20
call writeString
mov dh,19
mov dl,0
call gotoxy
mov edx,OFFSET sheild21
call writeString

endm
.code