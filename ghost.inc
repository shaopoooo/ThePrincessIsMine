.data
ghost macro

.if(level > 19 )
	add level,10
	mov plus,1
.endif	
mov dh,3
mov dl,0
call gotoxy
mov edx,offset ghost1   ;印鬼
call writeString

call randomize
mov  eax,2
call randomRange
add  eax,2
add  eax,level

call crlf
mov  monster_hp, eax
mov  monster_exp,eax

mov  eax,2
call randomRange
add  eax,4
add  eax,level
mov  monster_att,eax

mov  eax,0
add  eax,level
mov  monster_def,eax

mov  eax,1
add  eax,level
mov  monster_int,eax

mov monster_state1, 0
mov monster_state2, 5    ;怪物行動模式
mov monster_state3, 10
mov att_miss,1
mov mag_miss,0
mov def_miss,0  

.if(plus == 1)
	mov plus,0
	sub level,10
.endif

endm
.code