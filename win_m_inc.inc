.data
win_m_inc macro

mov eax ,hero_Int
sub monster_hp,eax
mov eax ,monster_hp

cmp eax,0
jg  hero_state
jmp getexp  

endm
.data