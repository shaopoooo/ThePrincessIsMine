.data
wolf macro

.if(level > 19 )
	add level,5
	mov plus,1
.endif	
mov dh,5 
mov dl,0
call gotoxy
mov edx,offset wolf5   
call writeString

call randomize
mov  eax,5
call randomRange
add  eax,2
add  eax,level
mov  monster_hp, eax
mov  monster_exp,eax

mov  eax,5
call randomRange
add  eax,10
add  eax,level
mov  monster_att,eax

mov  eax,0
add  eax,level
mov  monster_def,eax

mov  eax,6
add  eax,level
mov  monster_int,eax

mov monster_state1, 5
mov monster_state2, 10    ;怪物行動模式
mov monster_state3, 10
mov att_miss,0
mov mag_miss,0
mov def_miss,1  

.if(plus == 1)
	mov plus,0
	sub level,5
.endif

endm
.code