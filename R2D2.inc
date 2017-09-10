.data
R2D2 macro

.if(level > 19 )
	add level,10
	mov plus,1
.endif	
mov dh,7 
mov dl,0
call gotoxy
mov eax,9 +(black*16)
call settextcolor
mov edx,offset R2D21  
call writeString

mov eax,15+(black*16)
call settextcolor

call randomize
mov  eax,5
call randomRange
add  eax,level
mov  monster_hp, eax
mov  monster_exp,eax

add  eax,10
add  eax,level
mov  monster_att,eax

mov  eax,10
add  eax,level
mov  monster_def,eax

mov  eax,10
add  eax,level
mov  monster_int,eax

mov monster_state1, 6
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