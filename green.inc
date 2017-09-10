.data

greenm macro

.if(level > 19 )
	add level,10
	mov plus,1
.endif
	
mov dh,5				
mov dl,0
call gotoxy
mov eax,cyan + (black*16)
call settextcolor
mov edx,offset green1  
call writeString

mov eax,white + (black*16)
call settextcolor

call randomize
mov  eax,4
call randomRange
add  eax,1
add  eax,level
mov  monster_hp, eax
mov  monster_exp,eax

mov  eax,1
call randomRange
add  eax,2
add  eax,level
mov  monster_att,eax

mov  eax,2
add  eax,level
mov  monster_def,eax

mov  eax,1
add  eax,level
mov  monster_int,eax

mov monster_state1,2 
mov monster_state2,4     ;怪物行動模式
mov monster_state3,10 
mov att_miss,0
mov mag_miss,0
mov def_miss,0

.if(plus == 1)
	mov plus,0
	sub level,10
.endif
	
endm
.code