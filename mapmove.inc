.data
mapmove macro
;27escape 32space 8backspace
start:
map
mov dh,10       ;start
mov dl,10
call gotoxy
mov eax, lightred + (lightgreen* 16)	   
call SetTextColor
mov edx,offset message45
call writeString
mov eax, white + (black* 16)
call SetTextColor

mov dh,22
mov dl,0
call gotoxy
while1:
call readchar
.if al==8   
jmp top
.endif
.if al=='q'
jmp endofgame
.endif
mov bl,'6'
cmp al,bl
jne while1
jmp point2

point2:
map
mov dh,10
mov dl,24
call gotoxy
mov eax, white + (red* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov eax, white + (black* 16)
call SetTextColor

mov dh,22
mov dl,0
call gotoxy
while2:
call readchar
.if al==8   
jmp top
.endif
.if al=='q'
jmp endofgame
.endif
.if al=='4'
jmp start
.endif
.if al =='0'
	mov m_type,1
	jmp battle_stage
.endif 
mov bl,'8'
cmp al,bl
jne while2
jmp point3

point3:
map
mov dh,3
mov dl,24
call gotoxy
mov eax, white + (red* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov eax, white + (black* 16)
call SetTextColor

mov dh,22
mov dl,0
call gotoxy
while3:
call readchar
.if al==8   
jmp top
.endif
.if al=='q'
jmp endofgame
.endif
.if al=='2'
jmp point2
.endif
.if al=='0'
	mov m_type,2
	jmp battle_stage
.endif	
mov bl,'6'
cmp al,bl
jne while3
jmp point4

point4:
map
mov dh,3
mov dl,48
call gotoxy
mov eax, white + (red* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov eax, white + (black* 16)
call SetTextColor

mov dh,22
mov dl,0
call gotoxy
while4:
call readchar
.if al==8   
jmp top
.endif
.if al=='q'
jmp endofgame
.endif
.if al=='4'
jmp point3
.endif
.if al =='0'
	mov m_type,3
	jmp battle_stage
.endif	
mov bl,'2'
cmp al,bl
jne while4
jmp crossroad

crossroad:
map
mov dh,20
mov dl,48
call gotoxy
mov eax, white + (red* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov eax, white + (black* 16)
call SetTextColor

mov dh,22
mov dl,0
call gotoxy
while5:
call readchar
.if al==8   
jmp top
.endif
.if al=='q'
jmp endofgame
.endif
.if al=='8'
jmp point4
.endif
.if al=='4'
jmp shop
.endif
.if al =='0'
	mov m_type,4
	jmp battle_stage
.endif	
mov bl,'6'
cmp al,bl
jne while5
jmp boss

boss:
map
mov dh,20
mov dl,53
call gotoxy
mov eax, white + (red* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov eax, white + (black* 16)
call SetTextColor

mov dh,22
mov dl,0
call gotoxy
while6:
call readchar
.if al==8   
jmp top
.endif
.if al=='q'
jmp endofgame
.endif
.if al=='4'
jmp crossroad
.endif
mov bl,'0'
cmp al,bl
jne while6
mov m_poewr,1
jmp battle_stage

shop:
map
mov dh,20
mov dl,14
call gotoxy
mov eax, white + (red* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov eax, white + (black* 16)
call SetTextColor

mov dh,22
mov dl,0
call gotoxy
while7:
call readchar
.if al==8   
jmp top
.endif
.if al=='q'
jmp endofgame
.endif
.if al=='6'
jmp crossroad
.endif
mov bl,'0'
cmp al,bl
jne while7
jmp jumpstore

endm
.code