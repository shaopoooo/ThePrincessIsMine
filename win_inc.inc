.data
win_inc macro

call randomize
mov eax, 99
call randomRange

.if(hero_Luk > eax)        ;爆擊
    mov eax ,hero_att
    add eax ,hero_att
    sub eax ,monster_def
.else                    ;沒爆擊
    mov eax ,hero_att;

	
.endif

.if(eax>1)                ;攻擊>怪物防禦
    sub monster_hp,eax    ;扣血
.endif

mov eax,monster_hp
cmp eax,0
jg  hero_state
cmp boss_lv,1
je happy_end
jmp getexp

endm
.code