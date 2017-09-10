.data
bat macro
.if(level > 20 )
	add level,10
	mov plus,1
.endif	
mov dh,5				 
mov dl,0				 
call gotoxy
mov eax,3 + (black*16)
call settextcolor
mov edx,offset bat1   
call writeString
mov eax,white + (black*16)
call settextcolor

call randomize
mov  eax,2				
call randomRange
add  eax,5
add  eax,level

call crlf
mov  monster_hp, eax	
mov  monster_exp,eax

mov  eax,2
call randomRange
add  eax,5
add  eax,level
mov  monster_att,eax

mov  eax,1
add  eax,level
mov  monster_def,eax

mov  eax,1
add  eax,level
mov  monster_Int,eax

mov monster_state1, 5
mov monster_state2, 8    ;怪物行動模式
mov monster_state3, 10
mov att_miss,0
mov mag_miss,0
mov def_miss,0

.if(plus == 1)
	mov plus,0
	sub level,10
.endif

endm
.code