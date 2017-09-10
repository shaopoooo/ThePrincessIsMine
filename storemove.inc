.data 
storemove macro

item1:
store
mov dh,4
mov dl,2
call gotoxy
mov eax, lightred + (white* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov eax, white + (black* 16)
call SetTextColor

swords

mov dh,22
mov dl,0
call gotoxy
while8:
call readchar
.if al==8
jmp jumpmap
.endif
.if al=='0'
	.if gold>100
		mov cheatflg,0
		buy
		mov eax,hero_Att
		add eax,1
		mov hero_Att,eax
	.endif
.endif
mov bl,'2'
cmp al,bl
jne while8
jmp item2

item2:
store
mov dh,6
mov dl,2
call gotoxy
mov eax, lightred + (white* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov eax, white + (black* 16)
call SetTextColor

sheild

mov dh,22
mov dl,0
call gotoxy
while9:
call readchar
.if al=='8'
jmp item1
.endif
.if al==8
jmp jumpmap
.endif
.if al=='0'
	.if gold>100
		mov cheatflg,0
		buy
		mov eax,hero_Def
		add eax,1
		mov hero_Def,eax
	.endif
.endif
mov bl,'2'
cmp al,bl
jne while9
jmp item3

item3:
store
mov dh,8
mov dl,2
call gotoxy
mov eax, lightred + (white* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov eax, white + (black* 16)
call SetTextColor

book

mov dh,22
mov dl,0
call gotoxy
while10:
call readchar
.if al==8
jmp jumpmap
.endif
.if al=='8'
jmp item2
.endif
.if al=='0'
	.if gold>100
		mov cheatflg,0
		buy
		mov eax,hero_Int
		add eax,1
		mov hero_Int,eax
	.endif
.endif
mov bl,'2'
cmp al,bl
jne while10
jmp item4

item4:
store
mov dh,10
mov dl,2
call gotoxy
mov eax, lightred + (white* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov eax, white + (black* 16)
call SetTextColor

heart

mov dh,22
mov dl,0
call gotoxy
while11:
call readchar
.if al==8
jmp jumpmap
.endif
.if al=='8'
jmp item3
.endif
.if al=='0'
	.if gold>100
		mov cheatflg,0
		buy
		mov eax,hero_hp_full
		add eax,1
		mov hero_hp_full,eax
	.endif
.endif
mov bl,'2'
cmp al,bl
jne while11
jmp item5

item5:
store
mov dh,12
mov dl,2
call gotoxy
mov eax, lightred + (white* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov eax, white + (black* 16)
call SetTextColor

storecheat

mov dh,22
mov dl,0
call gotoxy
while12:
call readchar
.if al==8
jmp jumpmap
.endif
.if al=='2'
jmp item6
.endif
.if al=='0'
	.if gold>500
		mov cheatflg,1
		buy
	.endif
.endif
mov bl,'8'
cmp al,bl
jne while12
jmp item4

item6:
store
mov dh,14
mov dl,2
call gotoxy
mov eax, lightred + (white* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov eax, white + (black* 16)
call SetTextColor

cross

mov dh,22
mov dl,0
call gotoxy
while13:
call readchar
.if al==8
jmp jumpmap
.endif
.if al=='0'
	.if gold>100
		mov cheatflg,0
		buy
		mov eax,hero_hp_full
		mov hero_hp_now,eax
	.endif
.endif
mov bl,'8'
cmp al,bl
jne while13
jmp item5

endm
.code