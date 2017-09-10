.data
lose_inc macro

mov eax,monster_att
cmp eax,hero_def
jb next  

sub hero_hp_now,eax	

next:
mov dh,18
mov dl,8
call gotoxy
mov edx, offset UImesSpace
call writeString

mov eax,hero_hp_now
cmp eax, 0
jg  hero_state
jmp death

endm
.data