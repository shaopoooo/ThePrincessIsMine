.data
lose_m_inc macro

mov eax ,monster_Int
sub hero_hp_now,eax
mov eax,hero_hp_now

cmp eax, 0
jg Hero_state
jmp death

endm
.data