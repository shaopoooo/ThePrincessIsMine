.data
midboss macro
.if(level > 19 )
	add level,5
	mov plus,1
.endif	
mov dh,0			
mov dl,0				 
call gotoxy
mov eax,12 + (black*16)
call settextcolor
mov edx,offset midboss1   
call writeString
mov eax,white + (black*16)
call settextcolor

call randomize
mov  eax,20				
call randomRange
add  eax,300

call crlf
mov  monster_hp, eax	
mov  monster_exp,eax

mov  eax,20
call randomRange
add  eax,50
add  eax,level
mov  monster_att,eax

mov  eax,30
add  eax,level
mov  monster_def,eax

mov  eax,40
add  eax,level
mov  monster_Int,eax

mov monster_state1, 3
mov monster_state2, 6    ;怪物行動模式
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