.data
boss_stage macro

mov dh,5 
mov dl,0
call gotoxy
mov eax,yellow + (black*16)
call settextcolor
mov edx,offset boss1   ;印boss
call writeString

mov eax,white + (black*16)
call settextcolor

mov  eax,3000

call crlf
mov  monster_hp, eax
mov  monster_exp,eax

mov  eax,300
mov  monster_att,eax

mov  eax,300
mov  monster_def,eax

mov  eax,300
mov  monster_Int,eax

mov monster_state1, 3
mov monster_state2, 7    ;怪物行動模式
mov monster_state3, 10
mov att_miss,0
mov mag_miss,1
mov def_miss,0  
mov boss_lv,1


endm
.code