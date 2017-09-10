.data
turkey macro

.if(level > 19 )
	add level,5
	mov plus,1
.endif	
mov dh,2
mov dl,0
call gotoxy
mov edx,offset turkey1   
call writeString

call randomize
mov  eax,5
call randomRange
add  eax,7
add  eax,level
mov  monster_hp, eax
mov  monster_exp,eax

mov  eax,3
call randomRange
add  eax,3
add  eax,level
mov  monster_att,eax

mov  eax,3
add  eax,level
mov  monster_def,eax

mov  eax,6
add  eax,level
mov  monster_int,eax

mov monster_state1, 3
mov monster_state2, 7    ;怪物行動模式
mov monster_state3, 10
mov att_miss,0
mov mag_miss,0
mov def_miss,0  

.if(plus == 1)
	mov plus,0
	sub level,5
.endif

endm
.code