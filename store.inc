.data
store macro
call clrscr

;boarder  top&bottom
mov dh,0
mov dl,0
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,offset message38
call writeString

mov dh,22
mov dl,0
call gotoxy
mov edx,offset message38
call writeString

mov dh,2       ;usergold
mov dl,20
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,OFFSET store07
call writeString
mov dh,2       ;gold
mov dl,31
call gotoxy
mov eax, yellow + (black* 16)	   
call SetTextColor
mov eax,gold
call writeInt
mov dh,2
mov dl,38
call gotoxy
mov edx,OFFSET store10
call writeString

mov dh,2       ;storeitem
mov dl,0
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,OFFSET store06
call writeString

mov dh,4       ;item1
mov dl,0
call gotoxy
mov edx,OFFSET store01
call writeString

mov dh,6     ;item2
mov dl,0
call gotoxy
mov edx,OFFSET store02
call writeString

mov dh,8      ;item3
mov dl,0    
call gotoxy
mov edx,OFFSET store03
call writeString

mov dh,10      ;item4
mov dl,0
call gotoxy
mov edx,OFFSET store04
call writeString

mov dh,12         ;item5
mov dl,0
call gotoxy
mov edx,OFFSET store05
call writeString

mov dh,14         ;item6
mov dl,0
call gotoxy
mov edx,OFFSET store09
call writeString

mov eax, blue + (black* 16)	    ;smallsword 
call SetTextColor
mov dh,15
mov dl,0
call gotoxy
mov edx,OFFSET message106
call writeString

mov dh,21       ;instructions
mov dl,0
call gotoxy
mov eax, gray + (black* 16)	   
call SetTextColor
mov edx,OFFSET message107
call writeString

endm
.code